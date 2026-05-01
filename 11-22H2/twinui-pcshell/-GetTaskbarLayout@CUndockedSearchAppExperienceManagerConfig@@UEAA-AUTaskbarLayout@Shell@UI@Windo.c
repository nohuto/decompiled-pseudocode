/*
 * XREFs of ?GetTaskbarLayout@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@XZ @ 0x18019D650
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D5C18 (-Current@-$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@Win.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$call@P6A?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@?$factory_cache_entry@UTaskbarLayout@Shell@UI@WindowsUdk@winrt@@UITaskbarLayoutStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskbarLayout@Shell@UI@WindowsUdk@2@AEBUITaskbarLayoutStatics@4562@@Z@Z @ 0x18019F4DC (--$call@P6A-AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@-$facto.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall CUndockedSearchAppExperienceManagerConfig::GetTaskbarLayout(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rdi
  __int64 (__fastcall *v5)(const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *); // [rsp+40h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h]

  v6 = a2;
  v3 = (winrt::Windows::Foundation::IUnknown *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v7 = &qword_18098E3D8;
    _InterlockedIncrement64(&qword_18098E3D8);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::Current(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>,
        &v6);
      _InterlockedDecrement64(&qword_18098E3D8);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E3D8);
      v5 = _lambda_a9de7e7a0851adce5db2c194794b7096_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::call<winrt::WindowsUdk::UI::Shell::TaskbarLayout (*)(winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics const &)>(
        a1,
        &v6,
        &v5);
    }
    winrt::Windows::Foundation::IUnknown::operator=(v3, (winrt::Windows::Foundation::IUnknown *)&v6);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
  *(_QWORD *)a2 = *(_QWORD *)v3;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  return a2;
}
