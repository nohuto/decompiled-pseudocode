/*
 * XREFs of ??4?$ComPtr@VCDelegatedInkTrailCookieTracker@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@Z @ 0x1800E59D4
 * Callers:
 *     ?GetForSurface@CDelegatedInkTrailCookieTracker@DirectComposition@@SAJPEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E5AB4 (-GetForSurface@CDelegatedInkTrailCookieTracker@DirectComposition@@SAJPEAVCCompositionSurfaceProx.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailCookieTracker>::operator=(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  void (__fastcall ***v4)(_QWORD); // rcx

  if ( (void (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    if ( a2 )
      (**a2)(a2);
    v4 = (void (__fastcall ***)(_QWORD))*a1;
    *a1 = a2;
    if ( v4 )
      (*v4)[1](v4);
  }
  return a1;
}
