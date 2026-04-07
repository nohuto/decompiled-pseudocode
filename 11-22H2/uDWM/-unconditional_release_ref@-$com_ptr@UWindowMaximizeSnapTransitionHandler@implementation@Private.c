/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800F881C
 * Callers:
 *     ??1?$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F751C (--1-$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Invoke @ 0x1800F7E30 (winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_298ff7ed3f48e3.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAAIXZ @ 0x180055320 (-subtract_reference@-$root_implements@UWindowJointResizeTransitionHandler@implementation@Private.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler>::unconditional_release_ref(
        volatile __int64 **a1)
{
  volatile __int64 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  result = winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::subtract_reference((__int64)v1);
  if ( !(_DWORD)result )
  {
    result = _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      return (*(__int64 (__fastcall **)(volatile __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return result;
}
