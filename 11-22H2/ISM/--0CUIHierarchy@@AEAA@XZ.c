/*
 * XREFs of ??0CUIHierarchy@@AEAA@XZ @ 0x1800ADC98
 * Callers:
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x1800AE478 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$call@P6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindowStatics@23456@@Z@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEBUIWindowStatics@45672@@Z@Z @ 0x1800490E0 (--$call@P6A-AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindo.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180053678 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AFBB0 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
CUIHierarchy *__fastcall CUIHierarchy::CUIHierarchy(CUIHierarchy *this)
{
  CUIHierarchy *v1; // rax
  CUIHierarchy *v3; // [rsp+30h] [rbp+8h] BYREF
  const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics *(__fastcall *v4)(const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics *, __int64); // [rsp+38h] [rbp+10h] BYREF
  __int64 *v5; // [rsp+40h] [rbp+18h]
  __int64 *v6; // [rsp+48h] [rbp+20h]

  v3 = this;
  try
  {
    v5 = &qword_180277FC0;
    qword_180277FC0 = 0LL;
    qword_180277FC8 = 0LL;
    xmmword_180277FD0 = 0LL;
    qword_180277FE0 = 0LL;
    qword_180277FE8 = 0LL;
    xmmword_180277FF0 = 0LL;
    xmmword_180278000 = 0LL;
    v6 = &qword_1802786C8;
    _InterlockedIncrement64(&qword_1802786C8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics> )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::CreateWatcher(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
        &v3);
      _InterlockedDecrement64(&qword_1802786C8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1802786C8);
      v4 = _lambda_ae55d4909240e1fdeaaab3ab1260b561_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher (*)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics const &)>(
        (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
        (__int64)&v3,
        (void (__fastcall **)(__int64, __int64 *))&v4);
    }
    if ( *((_QWORD *)&xmmword_180278000 + 1) )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&xmmword_180278000 + 1);
    v1 = v3;
    *((_QWORD *)&xmmword_180278000 + 1) = v3;
  }
  catch ( ... )
  {
    v1 = (CUIHierarchy *)*((_QWORD *)&xmmword_180278000 + 1);
  }
  if ( v1 )
    CUIHierarchy::StartWindowWatcher((CUIHierarchy *)&qword_180277FC0);
  return (CUIHierarchy *)&qword_180277FC0;
}
