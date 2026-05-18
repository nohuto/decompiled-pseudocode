/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000D4C4
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000DE08 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000DF74 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001CB0 (__security_check_cookie.c)
 *     memset_0 @ 0x180002688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180002BC8 (--2@YAPEAX_K@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180008AB4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000CEAC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000D478 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000D854 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000E200 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NXZ @ 0x18000E250 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NX.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x18000E47C (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000E584 (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000F9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  unsigned int v1; // ebx
  CPortClient *v2; // rax
  void *v3; // r8
  volatile signed __int32 *v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int16 v13[48]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int16 v14[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( CApiPortClient::IsConnected(this) )
    return 0;
  CApiPortClient::Disconnect((CApiPortClient *)&g_PortClient);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2163525945>::GetImpl'::`2'::impl) )
  {
    v2 = (CPortClient *)operator new(0x40uLL);
    v3 = 0LL;
  }
  else
  {
    v2 = (CPortClient *)operator new(0x40uLL);
    v3 = xmmword_180016C20;
  }
  v4 = (volatile signed __int32 *)v2;
  CPortClient::CPortClient(v2, g_PortClient, v3);
  *((_DWORD *)v4 + 14) = 1;
  *(_QWORD *)v4 = &CPortClientRefCounted::`vftable';
  memset_0(v13, 0, 0x52uLL);
  memset_0(v14, 0, 0x52uLL);
  LeaveCriticalSection(&stru_180016C30);
  if ( NtCurrentPeb()->SessionId
    && (v5 = StringCchPrintfW(v13, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v1 = v5, v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v5, 0x145u);
  }
  else
  {
    v7 = StringCchPrintfW(v14, 41LL, L"%s\\Windows\\DwmApiPort", v13);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v7, 0x14Cu);
    }
    else
    {
      v9 = CPortClient::ConnectWithName((CPortClient *)v4, v14);
      v10 = CApiPortClient::Translate(v9);
      v1 = v10;
      if ( v10 >= 0 )
      {
        EnterCriticalSection(&stru_180016C30);
        if ( !*(&xmmword_180016C20 + 1) )
        {
          *(&xmmword_180016C20 + 1) = (void *)v4;
          return v1;
        }
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v10, 0x14Fu);
    }
  }
  EnterCriticalSection(&stru_180016C30);
LABEL_16:
  if ( v4 && _InterlockedExchangeAdd(v4 + 14, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v4)(v4, 1LL);
  return v1;
}
