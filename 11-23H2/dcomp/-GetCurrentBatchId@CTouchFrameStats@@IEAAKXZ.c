/*
 * XREFs of ?GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ @ 0x180008E38
 * Callers:
 *     ?StartTouchInteraction@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z @ 0x180008A90 (-StartTouchInteraction@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z.c)
 *     ?GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z @ 0x180008C34 (-GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z.c)
 *     ?CollectStats@CTouchFrameStats@@MEAAX_K@Z @ 0x1801A8350 (-CollectStats@CTouchFrameStats@@MEAAX_K@Z.c)
 *     ?EndAnimation@CTouchFrameStats@@UEAAXXZ @ 0x1801A8530 (-EndAnimation@CTouchFrameStats@@UEAAXXZ.c)
 *     ?EndTouchInteraction@CTouchFrameStats@@UEAAXXZ @ 0x1801A85D0 (-EndTouchInteraction@CTouchFrameStats@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTouchFrameStats::GetCurrentBatchId(CTouchFrameStats *this)
{
  __int64 v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    v4 = 0;
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 56LL))(v2, &v4) >= 0 )
      return v4;
    (*(void (__fastcall **)(CTouchFrameStats *))(*(_QWORD *)this + 216LL))(this);
  }
  return 0LL;
}
