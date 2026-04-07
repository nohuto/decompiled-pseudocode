/*
 * XREFs of ?StartAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5DB4
 * Callers:
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5E18 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005671C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartAnimationFrameStats(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 96);
  if ( !*((_QWORD *)this + 12) )
  {
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 12);
    if ( (int)DCompositionCreateAnimationStats(v1) >= 0 )
    {
      v3 = *v1;
      *((_DWORD *)this + 30) = 0;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 0LL);
    }
  }
}
