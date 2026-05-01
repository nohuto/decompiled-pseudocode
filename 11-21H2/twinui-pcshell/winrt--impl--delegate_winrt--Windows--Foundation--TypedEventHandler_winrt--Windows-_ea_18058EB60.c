/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_645383672cc8ef3abc3762ef416a0823___::Invoke @ 0x18058EB60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_645383672cc8ef3abc3762ef416a0823_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058CB98 (_lambda_645383672cc8ef3abc3762ef416a0823_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_645383672cc8ef3abc3762ef416a0823___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  TouchGestureProcessor **v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = (TouchGestureProcessor **)(a1 + 8);
  try
  {
    lambda_645383672cc8ef3abc3762ef416a0823_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_(
      v3,
      a2,
      (__int64)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
