/*
 * XREFs of ?FlushChannels@CComposition@@QEAAXXZ @ 0x180045A2C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180047108 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x1800492C0 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180029D90 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800DCBA4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CComposition::FlushChannels(CComposition *this)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  CChannelContext *v6; // rbp
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+34h] [rbp-24h]
  __int64 v11; // [rsp+44h] [rbp-14h]

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 56LL))(*((_QWORD *)this + 28)) )
  {
    if ( *((_DWORD *)this + 134) )
    {
      v3 = 0LL;
      v4 = *((unsigned int *)this + 134);
      do
      {
        v5 = *((_QWORD *)this + 64);
        v9 = 1;
        v10 = 0LL;
        v6 = *(CChannelContext **)(v3 + v5);
        v11 = 0LL;
        v7 = CChannelContext::PostMessageToChannel(v6, (const struct MIL_MESSAGE *)&v9, v2);
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x70u, 0LL);
        CMILRefCountBaseT<IMILRefCount>::InternalRelease(v6);
        v3 += 8LL;
        --v4;
      }
      while ( v4 );
    }
    *((_DWORD *)this + 134) = 0;
    DynArrayImpl<1>::ShrinkToSize((char *)this + 512, 8LL);
  }
}
