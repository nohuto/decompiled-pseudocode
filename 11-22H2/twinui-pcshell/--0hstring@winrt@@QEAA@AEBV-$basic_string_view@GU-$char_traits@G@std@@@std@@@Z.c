/*
 * XREFs of ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800DC364
 * Callers:
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@QEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@XZ @ 0x18023C4CC (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@QEAA-AUPackageVersion@Application.c)
 *     ?GetRuntimeClassName@?$implements@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUri@Foundation@Windows@winrt@@@5673@U?$IIterable@UUri@Foundation@Windows@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x18023CC20 (-GetRuntimeClassName@-$implements@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@F.c)
 *     ?GetRuntimeClassName@?$implements@Uiterator@?$iterable_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@EEBA?AUhstring@2@XZ @ 0x18023CC60 (-GetRuntimeClassName@-$implements@Uiterator@-$iterable_base@U-$vector_impl@UUri@Foundation@Windo.c)
 *     ?GetRuntimeClassName@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@EEBA?AUhstring@2@XZ @ 0x18023CCA0 (-GetRuntimeClassName@-$implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackageVo.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x18023FA40 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

_QWORD *__fastcall winrt::hstring::hstring(_QWORD *a1, __int64 a2, unsigned int a3)
{
  *a1 = winrt::impl::create_hstring_on_heap(*(winrt::impl **)a2, (winrt::impl *)*(unsigned int *)(a2 + 8), a3);
  return a1;
}
