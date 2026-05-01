/*
 * XREFs of ??$invoke@U?$EventHandler@I@Foundation@Windows@winrt@@UProcessTracker@implementation@Shell@Internal@34@I@impl@winrt@@YA_NAEBU?$EventHandler@I@Foundation@Windows@1@AEBUProcessTracker@implementation@Shell@Internal@41@AEBI@Z @ 0x18027D960
 * Callers:
 *     ??$?RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUProcessTracker@implementation@Shell@Internal@Windows@1@AEBI@Z @ 0x18027D31C (--$-RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@-$event@U-$EventHandler@I@Fo.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??R?$EventHandler@I@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBI@Z @ 0x18027E100 (--R-$EventHandler@I@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<unsigned int>,winrt::Windows::Internal::Shell::implementation::ProcessTracker,unsigned int>(
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
    winrt::Windows::Foundation::EventHandler<unsigned int>::operator()();
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
  }
  catch ( ... )
  {
    v5 = *(_DWORD *)winrt::to_hresult(&v8);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v7,
      v6,
      &`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<unsigned int>,winrt::Windows::Internal::Shell::implementation::ProcessTracker,unsigned int>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<unsigned int>,winrt::Windows::Internal::Shell::implementation::ProcessTracker,unsigned int>'::`4'::handler)(
      v5,
      0LL,
      0LL);
    return v5 != -2147417848 && v5 != -2147023174 && v5 != -1996357631;
  }
  return 1;
}
