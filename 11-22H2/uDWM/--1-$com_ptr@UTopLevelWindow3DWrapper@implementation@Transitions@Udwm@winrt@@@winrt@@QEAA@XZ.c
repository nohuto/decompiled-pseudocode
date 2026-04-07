/*
 * XREFs of ??1?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F90D4
 * Callers:
 *     __lambda_c60948a4075e9d25cd4406f3dd63722d_::operator()_::_1_::dtor$0 @ 0x1800F9369 (__lambda_c60948a4075e9d25cd4406f3dd63722d_--operator()_--_1_--dtor$0.c)
 *     __lambda_65776acf8dfa6fe29cb3050938b98b74_::operator()_::_1_::dtor$0 @ 0x1800FAD34 (__lambda_65776acf8dfa6fe29cb3050938b98b74_--operator()_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call_::_1_::dtor$0 @ 0x180104FF5 (_std--_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_--_Do_call_--_1_--dtor$.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800E7A54 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::~com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref(a1);
  return result;
}
