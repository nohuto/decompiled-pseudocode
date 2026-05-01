/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fac63ae4a10d0c60eda94047ae860b1f___ @ 0x1805F8764
 * Callers:
 *     ??0CachedDataSource@@QEAA@_NPEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopPerMonitorCollection@34567@@Z @ 0x1805F90F4 (--0CachedDataSource@@QEAA@_NPEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multita.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _lambda_fac63ae4a10d0c60eda94047ae860b1f_::__lambda_fac63ae4a10d0c60eda94047ae860b1f_ @ 0x1805F94FC (_lambda_fac63ae4a10d0c60eda94047ae860b1f_--__lambda_fac63ae4a10d0c60eda94047ae860b1f_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fac63ae4a10d0c60eda94047ae860b1f___(
        _QWORD *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v8; // [rsp+30h] [rbp+8h]

  v8 = operator new(0x28uLL);
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v8[1] = v4;
  v5 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  v8[2] = v5;
  v6 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = 0LL;
  v8[3] = v6;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v8 + 8) = 1;
  *v8 = off_1807AB4B0;
  *a1 = v8;
  lambda_fac63ae4a10d0c60eda94047ae860b1f_::__lambda_fac63ae4a10d0c60eda94047ae860b1f_(a2);
  return a1;
}
