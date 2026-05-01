/*
 * XREFs of ?FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801EB2EC
 * Callers:
 *     _lambda_9e570927e665d205f933b0ae213f3c70_::operator() @ 0x1801E932C (_lambda_9e570927e665d205f933b0ae213f3c70_--operator().c)
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1801EA284 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1804682C8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     ??$call@P6A?AU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIWebSearchProviderStatics2@Shell@UI@WindowsUdk@5@@Z@?$factory_cache_entry@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@UIWebSearchProviderStatics2@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@2@AEBUIWebSearchProviderStatics2@Shell@UI@WindowsUdk@2@@Z@Z @ 0x1801E6F08 (--$call@P6A-AU-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundatio.c)
 *     ??R_lambda_f01f7ed5d7ee74b5ad982a500b9078c7_@@QEBA@AEBUIWebSearchProviderStatics2@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801E9C90 (--R_lambda_f01f7ed5d7ee74b5ad982a500b9078c7_@@QEBA@AEBUIWebSearchProviderStatics2@Shell@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::WindowsUdk::UI::Shell::WebSearchProvider::FindAll(_QWORD *a1)
{
  const struct winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2 *(__fastcall *v3)(const struct winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2 *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098E3B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2> )
  {
    _lambda_f01f7ed5d7ee74b5ad982a500b9078c7_::operator()(
      (__int64)a1,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2>);
    _InterlockedDecrement64(&qword_18098E3B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E3B8);
    v3 = _lambda_f01f7ed5d7ee74b5ad982a500b9078c7_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2>::call<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider> (*)(winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics2 const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
