/*
 * XREFs of ??1?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F8728
 * Callers:
 *     __lambda_4f6e55dd49ac94c28a6037e68643a924_::operator()_::_1_::dtor$0 @ 0x180064A91 (__lambda_4f6e55dd49ac94c28a6037e68643a924_--operator()_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call_::_1_::dtor$0 @ 0x1800FFD29 (_std--_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_--_Do_call_--_1_--dtor$.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180007AB4 (-unconditional_release_ref@-$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@wi.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::~com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::unconditional_release_ref(a1);
  return result;
}
