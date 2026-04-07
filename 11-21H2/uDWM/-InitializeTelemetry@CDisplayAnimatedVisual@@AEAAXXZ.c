/*
 * XREFs of ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x18005BCB0
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18005BA80 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z @ 0x180005754 (-Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z.c)
 *     ?reset@?$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800134C8 (-reset@-$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDisplayAnimatedVisual::InitializeTelemetry(CDisplayAnimatedVisual *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 416);
  if ( !*((_QWORD *)this + 52)
    && (unsigned int)dword_180141868 > 4
    && tlgKeywordOn((__int64)&dword_180141868, 0x200000000000LL) )
  {
    wil::com_ptr_t<IAnimationFrameStats,wil::err_returncode_policy>::reset(v1);
    if ( (int)CAnimationFrameStats::Create((struct IAnimationFrameStats **)v1) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 24LL))(*v1);
  }
}
