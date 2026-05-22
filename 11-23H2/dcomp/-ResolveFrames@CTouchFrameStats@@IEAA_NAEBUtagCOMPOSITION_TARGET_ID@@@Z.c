/*
 * XREFs of ?ResolveFrames@CTouchFrameStats@@IEAA_NAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A89E8
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FrameIdFromBatchId@CTouchFrameStats@@IEBA_KK@Z @ 0x1801A8680 (-FrameIdFromBatchId@CTouchFrameStats@@IEBA_KK@Z.c)
 */

char __fastcall CTouchFrameStats::ResolveFrames(CTouchFrameStats *this, const struct tagCOMPOSITION_TARGET_ID *a2)
{
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  if ( !*((_QWORD *)this + 14) || !*((_QWORD *)this + 15) )
    return 0;
  v4 = (__int64 *)*((_QWORD *)this + 27);
  v5 = (__int64 *)*((_QWORD *)this + 28);
  while ( v4 != v5 )
  {
    v6 = *v4;
    v7 = *(_QWORD *)(*v4 + 8);
    if ( !v7 )
    {
      v8 = CTouchFrameStats::FrameIdFromBatchId(this, *(_DWORD *)v6);
      *(_QWORD *)(v6 + 8) = v8;
      v7 = v8;
      if ( !v8 )
        return 0;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CTouchFrameStats *, unsigned __int64, __int64, const struct tagCOMPOSITION_TARGET_ID *, __int64))(*(_QWORD *)this + 96LL))(
            this,
            v7,
            v6 + 16,
            a2,
            v6 + 40) )
      return 0;
    ++v4;
  }
  return 1;
}
