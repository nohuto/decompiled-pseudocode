/*
 * XREFs of ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930
 * Callers:
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180007E0C (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x180008AC0 (-OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180014474 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x1800150C0 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18003FB48 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800405C0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800454F8 (-StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180045A10 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800512B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x18005E4F4 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800990BC (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x180099170 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z @ 0x18009AC60 (-StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800A7848 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D295C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D2E34 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800D87EC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800D8A4C (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E3194 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800E3370 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800ED880 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 *     ?AcquireAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAPEAVCAnimationEngine@@@Z @ 0x1800FCCB0 (-AcquireAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAPEAVCAnim.c)
 * Callees:
 *     <none>
 */

struct CAnimationEngine *CDesktopManager::AcquireAnimationEngine(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rcx

  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
  if ( v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 116));
    v0 = CDesktopManager::s_pDesktopManagerInstance;
  }
  return (struct CAnimationEngine *)*((_QWORD *)v0 + 21);
}
