/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@UWindowTabHost@implementation@Shell@Internal@34@UWindowTabsChangedEventArgs@7UI@834@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@1@AEBUWindowTabHost@implementation@Shell@Internal@41@AEBUWindowTabsChangedEventArgs@7UI@841@@Z @ 0x18001A254
 * Callers:
 *     ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUWindowTabsChangedEventArgs@4UI@561@@Z @ 0x18001A154 (--$-RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>,winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  int v3; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, a2 + 32, *a3);
  if ( v3 < 0 )
  {
    try
    {
      winrt::throw_hresult((unsigned int)v3);
    }
    catch ( ... )
    {
      v7 = &v8;
      v5 = *(_DWORD *)winrt::to_hresult(v7 + 6);
      ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBDAEAP6AHHHPEAX__EP6AHHH1__E_Z(
        v6,
        &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>,winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>'::`4'::handler);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>,winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>'::`4'::handler)(
        v5,
        0LL,
        0LL);
      return v5 != -2147417848 && v5 != -2147023174 && v5 != -1996357631;
    }
  }
  return 1;
}
