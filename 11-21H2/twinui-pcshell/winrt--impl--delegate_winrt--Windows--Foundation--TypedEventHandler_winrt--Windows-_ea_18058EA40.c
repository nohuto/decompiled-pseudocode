/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke @ 0x18058EA40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cd8c6316c996060cbab4a596526042be_::operator()_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_ @ 0x18058C7FC (_lambda_cd8c6316c996060cbab4a596526042be_--operator()_winrt--Windows--UI--Internal--Input--Physi.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke(
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
    lambda_cd8c6316c996060cbab4a596526042be_::operator()_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_(
      v3,
      a2,
      &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
