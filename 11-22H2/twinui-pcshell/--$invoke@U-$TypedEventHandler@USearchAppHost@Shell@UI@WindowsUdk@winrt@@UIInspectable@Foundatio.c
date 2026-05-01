/*
 * XREFs of ??$invoke@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@USearchAppHost@implementation@Shell@UI@WindowsUdk@4@$$T@impl@winrt@@YA_NAEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@1@AEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEB$$T@Z @ 0x18047E7D0
 * Callers:
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEB$$T@Z @ 0x18047E628 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@-$event@U-$TypedEventHandler@U.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??R?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@QEBA@AEBUSearchAppHost@Shell@UI@WindowsUdk@3@AEBUIInspectable@123@@Z @ 0x18047E8B0 (--R-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Window.c)
 */

// Hidden C++ exception states: #wind=2
bool winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>()
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>::operator()();
    if ( v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  }
  catch ( ... )
  {
    v1 = *winrt::to_hresult(&v4);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v3,
      v2,
      &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>'::`4'::handler)(
      v1,
      0LL,
      0LL);
    return v1 != -2147417848 && v1 != -2147023174 && v1 != -1996357631;
  }
  return 1;
}
