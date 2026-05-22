/*
 * XREFs of ??0CUIHierarchy@@AEAA@XZ @ 0x18008469C
 * Callers:
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x180084EB0 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$call@P6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindowStatics@23456@@Z@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@$$QEAP6A?AU345672@AEBUIWindowStatics@45672@@Z@Z @ 0x18003F434 (--$call@P6A-AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindo.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180048108 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800865A0 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
CUIHierarchy *__fastcall CUIHierarchy::CUIHierarchy(CUIHierarchy *this, __int64 a2, __int64 a3, __int64 a4)
{
  CUIHierarchy *v4; // rax
  CUIHierarchy *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall *v7)(__int64, __int64); // [rsp+38h] [rbp+10h] BYREF
  __int64 *v8; // [rsp+40h] [rbp+18h]
  __int64 *v9; // [rsp+48h] [rbp+20h]

  v6 = this;
  try
  {
    v8 = &qword_180242B80;
    qword_180242B80 = 0LL;
    qword_180242B88 = 0LL;
    xmmword_180242B90 = 0LL;
    qword_180242BA0 = 0LL;
    qword_180242BA8 = 0LL;
    xmmword_180242BB0 = 0LL;
    xmmword_180242BC0 = 0LL;
    v9 = &qword_1802431C8;
    _InterlockedIncrement64(&qword_1802431C8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics> )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::CreateWatcher(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
        &v6);
      _InterlockedDecrement64(&qword_1802431C8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1802431C8);
      v7 = _lambda_ae55d4909240e1fdeaaab3ab1260b561_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher (*)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics const &)>(
        (__int64)this,
        (__int64)&v6,
        (void (__fastcall **)(__int64, __int64 *))&v7,
        a4);
    }
    if ( *((_QWORD *)&xmmword_180242BC0 + 1) )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&xmmword_180242BC0 + 1);
    v4 = v6;
    *((_QWORD *)&xmmword_180242BC0 + 1) = v6;
  }
  catch ( ... )
  {
    v4 = (CUIHierarchy *)*((_QWORD *)&xmmword_180242BC0 + 1);
  }
  if ( v4 )
    CUIHierarchy::StartWindowWatcher((CUIHierarchy *)&qword_180242B80);
  return (CUIHierarchy *)&qword_180242B80;
}
