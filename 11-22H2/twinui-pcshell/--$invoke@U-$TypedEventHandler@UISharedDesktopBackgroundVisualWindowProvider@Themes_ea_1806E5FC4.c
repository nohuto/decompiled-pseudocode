/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@USharedDesktopBackgroundVisualHost@@_N@impl@winrt@@YA_NAEBU?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@1@AEBUSharedDesktopBackgroundVisualHost@@AEB_N@Z @ 0x1806E5FC4
 * Callers:
 *     ??$?RUSharedDesktopBackgroundVisualHost@@_N@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_N@Z @ 0x1806E5814 (--$-RUSharedDesktopBackgroundVisualHost@@_N@-$event@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 * Callees:
 *     ??R?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@QEBA@AEBUISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@23@AEB_N@Z @ 0x1806E6E1C (--R-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Inte_ea_1806E6E1C.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>,SharedDesktopBackgroundVisualHost,bool>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2 + 24;
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>::operator()();
  }
  catch ( ... )
  {
    v3 = *winrt::to_hresult(&v6);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v5,
      v4,
      &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>,SharedDesktopBackgroundVisualHost,bool>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>,SharedDesktopBackgroundVisualHost,bool>'::`4'::handler)(
      v3,
      0LL,
      0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
