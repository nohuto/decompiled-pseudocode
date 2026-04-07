/*
 * XREFs of ?SetCenter@CVisual@@QEAAXNN@Z @ 0x180105918
 * Callers:
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9C88 (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BE3F0 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800D83F8 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 *     ?UpdateParentVisual@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6B18 (-UpdateParentVisual@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetCenter(CVisual *this, double a2, double a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  double v5; // rax

  v3 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 19) - v3) & _xmm) > 0.0000011920929
    || (v4 = a3, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 20) - v4) & _xmm) > 0.0000011920929) )
  {
    v5 = *(double *)this;
    *((double *)this + 19) = a2;
    *((double *)this + 20) = a3;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v5 + 24LL))(this, 16LL);
  }
}
