/*
 * XREFs of ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceUpdateScene@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x18002F590 (-ForceUpdateScene@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotation.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?Cancel@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180040B94 (-Cancel@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt.c)
 *     ?StopRotation@?$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180040BCC (-StopRotation@-$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransition.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180040C04 (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ??$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA?AUTransitionManager@Transitions@Udwm@1@PEAU2implementation@341@@Z @ 0x180040E78 (--$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA-AUTran.c)
 *     ?RegisterTransitionHandler@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBUITransitionHandler@563@@Z @ 0x180040F50 (-RegisterTransitionHandler@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Tra.c)
 *     ??$as@UITransitionStateNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18006EDB8 (--$as@UITransitionStateNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@.c)
 *     ?AnimationComplete@?$consume_Udwm_Transitions_Private_IScreenRotationTransitionHandlerWrapper@UScreenRotationTransitionHandlerWrapper@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D6DE4 (-AnimationComplete@-$consume_Udwm_Transitions_Private_IScreenRotationTransitionHandlerWrapper@US.c)
 *     ??$as@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIAnimationsTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800E7340 (--$as@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Founda.c)
 *     ?EnsureWorkAreaChangeTransitionRemoved@?$consume_Udwm_Transitions_Private_IAnimationsTransitionManager@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800E7594 (-EnsureWorkAreaChangeTransitionRemoved@-$consume_Udwm_Transitions_Private_IAnimationsTransitionM.c)
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F1974 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 *     ?HasKey@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@Uhstring@5@N@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800F1C90 (-HasKey@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@N@Collections@Foun.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@Uhstring@5@N@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800F1CD8 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@N@Collections@Foun.c)
 *     ??$as@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@winrt@@YA?AUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@1@PEAU2implementation@3451@@Z @ 0x1800F474C (--$as@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementatio.c)
 *     ??$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F73C8 (--$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ??$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAA?AU?$weak_ref@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x1800F7430 (--$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@.c)
 *     ?AdjustSnapUIArrangementStartRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1800F779C (-AdjustSnapUIArrangementStartRect@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevel.c)
 *     ?AnimationComplete@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUAnimationCompletedHandler@Transitions@Udwm@3@@Z @ 0x1800F77F8 (-AnimationComplete@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper.c)
 *     ?AnimationsEnabled@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F7834 (-AnimationsEnabled@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udw.c)
 *     ?BeginRect@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1800F7878 (-BeginRect@-$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisua.c)
 *     ?BeginRect@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F78BC (-BeginRect@-$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTr_ea_1800F78BC.c)
 *     ?Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7968 (-Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransition@456@@Z @ 0x1800F7A8C (-CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?CreateAndInsertSnapshotVisual@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUTopLevelWindow3DWrapper@Transitions@Udwm@3@@Z @ 0x1800F7D14 (-CreateAndInsertSnapshotVisual@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Tra.c)
 *     ?EndRect@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1800F7D6C (-EndRect@-$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualW.c)
 *     ?GetAbsoluteWindowRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F7DB0 (-GetAbsoluteWindowRect@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWra.c)
 *     ?IsInSnapUIArrangement@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F7EFC (-IsInSnapUIArrangement@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWra.c)
 *     ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7F40 (-OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transiti.c)
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F8048 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?StartAnimation@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@HH@Z @ 0x1800F8504 (-StartAnimation@-$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransition.c)
 *     ?StartAnimation@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBURect@Foundation@Windows@3@@Z @ 0x1800F8544 (-StartAnimation@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Tr.c)
 *     ??$as@UIUserResizeVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUserResizeVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F8C20 (--$as@UIUserResizeVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@.c)
 *     ??$from_com_ref@AEBUITransitionState@Transitions@Udwm@winrt@@@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@AEAAXAEBUITransitionState@Transitions@Udwm@1@@Z @ 0x1800F8E04 (--$from_com_ref@AEBUITransitionState@Transitions@Udwm@winrt@@@-$weak_ref@UITransitionState@Trans.c)
 *     ?Clear@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800F957C (-Clear@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@I@Z @ 0x1800F95B4 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F9908 (-PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F9B34 (-PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?Rect@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBU0Foundation@Windows@3@@Z @ 0x1800F9E0C (-Rect@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@i.c)
 *     ?Rect@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F9E50 (-Rect@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@U_ea_1800F9E50.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800FA084 (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions@.c)
 *     ?Target@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FA0C8 (-Target@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@.c)
 *     ?TransferJointResizeVisuals@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FA10C (-TransferJointResizeVisuals@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transi.c)
 *     _lambda_65776acf8dfa6fe29cb3050938b98b74_::operator() @ 0x1800FAC80 (_lambda_65776acf8dfa6fe29cb3050938b98b74_--operator().c)
 *     ??$as@UITransitionStateNativePrivate@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNativePrivate@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800FC3E0 (--$as@UITransitionStateNativePrivate@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FE3E8 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FE640 (-PostTransition@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Ud.c)
 *     ?PreTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x1800FE710 (-PreTransition@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udw.c)
 *     ?UpdateFloatProperties@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBU?$map@Uhstring@winrt@@N@param@3@@Z @ 0x1800FF408 (-UpdateFloatProperties@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transit.c)
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x180102BC4 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAXXZ @ 0x180104F30 (-_Do_call@-$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAXXZ.c)
 *     ??$from_com_ref@AEBUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@?$weak_ref@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXAEBUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@1@@Z @ 0x180105188 (--$from_com_ref@AEBUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@-.c)
 *     ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationRejuvTransitionHandler@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180105340 (-OnGlobalTimeUpdated@-$consume_Udwm_Transitions_Private_IScreenRotationRejuvTransitionHandler@US.c)
 *     ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationResponsiveTransitionHandler@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801053D4 (-OnGlobalTimeUpdated@-$consume_Udwm_Transitions_Private_IScreenRotationResponsiveTransitionHandl.c)
 *     ??$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionManagerNativePrivate@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180108918 (--$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Window.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x18010A9F0 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@?$consume_Udwm_Transitions_Private_IAnimationsTransitionManager@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18010B5E8 (-OnMoveResizeInitiatedFromWorkAreaChange@-$consume_Udwm_Transitions_Private_IAnimationsTransitio.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x18010B9C0 (-PostTransition@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Ud.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18010C464 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?SkipAnimationDelays@?$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010CF5C (-SkipAnimationDelays@-$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTra.c)
 *     ?UpdateRect@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@AEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x18010D50C (-UpdateRect@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@w.c)
 *     ?WindowMaximizeSnapCancel@?$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010D554 (-WindowMaximizeSnapCancel@-$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWin.c)
 *     ?WindowMaximizeSnapPostTransition@?$consume_Udwm_Transitions_Private_IWindowStateTransitionManager@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010D58C (-WindowMaximizeSnapPostTransition@-$consume_Udwm_Transitions_Private_IWindowStateTransitionManag.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180066340 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800D6A5C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 */

void __fastcall __noreturn winrt::throw_hresult(unsigned int a1)
{
  _QWORD pExceptionObject[4]; // [rsp+30h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]

  if ( winrt_throw_hresult_handler )
    winrt_throw_hresult_handler(0LL, 0LL, 0LL, retaddr, a1);
  switch ( a1 )
  {
    case 0x8007000E:
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    case 0x80070005:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_access_denied);
      throw (winrt::hresult_access_denied *)pExceptionObject;
    case 0x8001010E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_wrong_thread);
      throw (winrt::hresult_wrong_thread *)pExceptionObject;
    case 0x80004001:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_not_implemented);
      throw (winrt::hresult_not_implemented *)pExceptionObject;
    case 0x80070057:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_invalid_argument);
      throw (winrt::hresult_invalid_argument *)pExceptionObject;
    case 0x8000000B:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_out_of_bounds);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    case 0x80004002:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_no_interface);
      throw (winrt::hresult_no_interface *)pExceptionObject;
    case 0x80040111:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_class_not_available);
      throw (winrt::hresult_class_not_available *)pExceptionObject;
    case 0x80040154:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_class_not_registered);
      throw (winrt::hresult_class_not_registered *)pExceptionObject;
    case 0x8000000C:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_changed_state);
      throw (winrt::hresult_changed_state *)pExceptionObject;
    case 0x8000000E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_method_call);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    case 0x8000000D:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_state_change);
      throw (winrt::hresult_illegal_state_change *)pExceptionObject;
    case 0x80000018:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_delegate_assignment);
      throw (winrt::hresult_illegal_delegate_assignment *)pExceptionObject;
    case 0x800704C7:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_canceled);
      throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::hresult_error::hresult_error((__int64)pExceptionObject, a1);
  throw (winrt::hresult_error *)pExceptionObject;
}
