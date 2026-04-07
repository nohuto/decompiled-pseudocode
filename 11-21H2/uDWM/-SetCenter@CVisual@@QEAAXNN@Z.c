/*
 * XREFs of ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18005CDC4
 * Callers:
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x18005CBB0 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4618 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6508 (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800D3794 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 *     ?UpdateAngle@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F56FC (-UpdateAngle@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
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
