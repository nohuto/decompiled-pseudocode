/*
 * XREFs of ??1?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F79A0
 * Callers:
 *     __lambda_c60948a4075e9d25cd4406f3dd63722d_::operator()_::_1_::dtor$0 @ 0x1800F7AEF (__lambda_c60948a4075e9d25cd4406f3dd63722d_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800F864C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::~com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref();
  return result;
}
