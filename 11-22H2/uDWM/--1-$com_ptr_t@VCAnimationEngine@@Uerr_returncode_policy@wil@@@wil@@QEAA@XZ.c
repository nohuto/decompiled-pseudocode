/*
 * XREFs of ??1?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7568
 * Callers:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B81B4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     _CDisplayAnimatedVisual::ScheduleAnimation_::_1_::dtor$0 @ 0x1800B8382 (_CDisplayAnimatedVisual--ScheduleAnimation_--_1_--dtor$0.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B83A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     _CDisplayAnimatedVisual::ScheduleAnimation_::_1_::dtor$0_0 @ 0x1800B8472 (_CDisplayAnimatedVisual--ScheduleAnimation_--_1_--dtor$0_0.c)
 *     _CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification_::_1_::dtor$0 @ 0x1800B8737 (_CDisplayAnimatedVisual--UnregisterForAnimationCompleteNotification_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartFirstAnimation_::_1_::dtor$4 @ 0x1800F630D (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F630D.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartSecondAnimation_::_1_::dtor$4 @ 0x1800F6804 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F6804.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180043790 (-Release@CAnimationEngine@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(
        CAnimationEngine **a1)
{
  CAnimationEngine *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CAnimationEngine::Release(v1);
  return result;
}
