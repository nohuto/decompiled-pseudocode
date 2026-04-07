/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F4054
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047CF0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateScene@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x18004F610 (-UpdateScene@-$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 *     ??1?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@QEAA@XZ @ 0x1800F1228 (--1-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@QEAA@XZ.c)
 *     ?CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4DA4 (-CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tran.c)
 *     ?DrawBackground@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5170 (-DrawBackground@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5E18 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6320 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F8048 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F858C (-StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@.c)
 *     ?PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F9B34 (-PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?RegisterBitmap@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAXPEAUHWND__@@PEAVCBitmapSource@@@Z @ 0x1800F9EA0 (-RegisterBitmap@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FE3E8 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCTopLevelWindow3D@@W4ShellTransition@345@@Z @ 0x1800FE850 (-PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEA.c)
 *     ?RegisterTransitionBitmap@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800FEA50 (-RegisterTransitionBitmap@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAUHWND.c)
 *     ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1801011B8 (-AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ?CreateAndInsertSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x180101734 (-CreateAndInsertSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AUAni.c)
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x180102BC4 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x180103724 (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010AF40 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010D078 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
