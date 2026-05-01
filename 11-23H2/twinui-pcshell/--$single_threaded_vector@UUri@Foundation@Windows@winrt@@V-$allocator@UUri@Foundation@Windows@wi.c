/*
 * XREFs of ??$single_threaded_vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@winrt@@YA?AU?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x1802332A8
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$make@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@@winrt@@YA?A_P$$QEAV?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x1802307EC (--$make@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Windows@winrt@@V.c)
 */

_QWORD *__fastcall winrt::single_threaded_vector<winrt::Windows::Foundation::Uri,std::allocator<winrt::Windows::Foundation::Uri>>(
        _QWORD *a1,
        __int64 *a2)
{
  winrt::make<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::Foundation::Uri>>(
    a1,
    a2);
  return a1;
}
