/*
 * XREFs of ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801007DC
 * Callers:
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6508 (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D2248 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D2E34 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800D3794 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?PrepareForFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4938 (-PrepareForFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transition.c)
 *     ?UpdateAngle@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F56FC (-UpdateAngle@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetRotation(CVisual *this, double a2)
{
  float v2; // xmm0_4
  double v3; // rax

  v2 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 21) - v2) & _xmm) > 0.0000011920929 )
  {
    v3 = *(double *)this;
    *((double *)this + 21) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v3 + 24LL))(this, 16LL);
  }
}
