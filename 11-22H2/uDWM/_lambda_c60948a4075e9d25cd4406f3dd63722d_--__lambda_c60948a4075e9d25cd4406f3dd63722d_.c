/*
 * XREFs of _lambda_c60948a4075e9d25cd4406f3dd63722d_::__lambda_c60948a4075e9d25cd4406f3dd63722d_ @ 0x1800F8F70
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition_::_1_::dtor$19 @ 0x1800F9AAB (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F9AAB.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 __fastcall lambda_c60948a4075e9d25cd4406f3dd63722d_::__lambda_c60948a4075e9d25cd4406f3dd63722d_(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = a1 + 1;
  if ( *v2 )
    result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v2);
  if ( *a1 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
  return result;
}
