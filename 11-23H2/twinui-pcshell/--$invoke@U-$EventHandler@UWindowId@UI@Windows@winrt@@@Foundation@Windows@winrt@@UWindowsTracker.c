/*
 * XREFs of ??$invoke@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@UWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@impl@winrt@@YA_NAEBU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@1@AEBUWindowsTracker@implementation@Shell@Internal@41@AEBUWindowId@UI@41@@Z @ 0x1807251B4
 * Callers:
 *     ??$?RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@?$event@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowsTracker@implementation@Shell@Internal@Windows@1@AEBUWindowId@UI@61@@Z @ 0x180724EFC (--$-RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@-$event@U-$Ev.c)
 * Callees:
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBUWindowId@UI@23@@Z @ 0x1807254EC (--R-$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@1.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>,winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::UI::WindowId>(
        __int64 a1,
        __int64 a2)
{
  struct IUnknown *v2; // rax
  void *v3; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  winrt::copy_from_abi((winrt *)&v8, v2, v3);
  try
  {
    winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>::operator()();
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  }
  catch ( ... )
  {
    v5 = *winrt::to_hresult(&v8);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v7,
      v6,
      &`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>,winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::UI::WindowId>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>,winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::UI::WindowId>'::`4'::handler)(
      v5,
      0LL,
      0LL);
    return v5 != -2147417848 && v5 != -2147023174 && v5 != -1996357631;
  }
  return 1;
}
