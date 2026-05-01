/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@$$TUPoint@234@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@1@AEB$$TAEBUPoint@341@@Z @ 0x18068AC08
 * Callers:
 *     ??$?R$$TUPoint@Foundation@Windows@winrt@@@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$TAEBUPoint@Foundation@Windows@1@@Z @ 0x18068A4E4 (--$-R$$TUPoint@Foundation@Windows@winrt@@@-$event@U-$TypedEventHandler@UIInspectable@Foundation@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??R?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBUPoint@123@@Z @ 0x18068AF10 (--R-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=1
bool winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>,std::nullptr_t,winrt::Windows::Foundation::Point>()
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>::operator()();
    if ( v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  }
  catch ( ... )
  {
    v1 = *winrt::to_hresult(&v4);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v3,
      v2,
      &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>,std::nullptr_t,winrt::Windows::Foundation::Point>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>,std::nullptr_t,winrt::Windows::Foundation::Point>'::`4'::handler)(
      v1,
      0LL,
      0LL);
    return v1 != -2147417848 && v1 != -2147023174 && v1 != -1996357631;
  }
  return 1;
}
