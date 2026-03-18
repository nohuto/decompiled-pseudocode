/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x140007EBC
 * Callers:
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003B18 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x1400027CC (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z @ 0x140002FD0 (-LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400033CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NXZ @ 0x14000803C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        CPortClient *this,
        ULONG a2,
        HANDLE *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        void *a7,
        __int16 a8,
        int *a9)
{
  unsigned int v12; // ebx
  HANDLE ProcessHeap; // rax
  struct _PORT_MESSAGE *v14; // rax
  struct _PORT_MESSAGE *v15; // rdi
  unsigned int v16; // eax
  int v17; // eax
  HANDLE v18; // rax
  int v20; // [rsp+40h] [rbp-48h] BYREF
  __int128 v21; // [rsp+44h] [rbp-44h]
  __int128 v22; // [rsp+54h] [rbp-34h]
  int v23; // [rsp+64h] [rbp-24h]

  v21 = 0LL;
  v23 = 0;
  v22 = 0LL;
  v12 = 0;
  ProcessHeap = GetProcessHeap();
  v14 = (struct _PORT_MESSAGE *)HeapAlloc(ProcessHeap, 8u, 0x38uLL);
  v15 = v14;
  if ( v14 )
  {
    v14[1].u1.Length = a2;
    v14->u1.Length = 3670032;
    LpcVerifyOutgoingPayloadSize(v14);
    v15[1].ClientId.UniqueProcess = *a3;
    v20 = 0x40000000;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2163525945>::GetImpl'::`2'::impl);
    v16 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 2), 0x20000LL, v15, &v20, v15);
    v17 = CPortClient::CheckStatus(this, v16);
    if ( v17 >= 0 )
    {
      *a9 = v15[1].u2.ZeroInit;
    }
    else
    {
      v12 = v17 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9LL,
        v17 | 0x10000000,
        0x254u);
    }
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v15);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, -2147024882, 0x236u);
  }
  return v12;
}
