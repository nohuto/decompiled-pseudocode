/*
 * XREFs of _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$4 @ 0x180404FC3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDH_STATUS __fastcall GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long PdhCloseQuery(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long PdhCloseQuery(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>((void **)(a2 + 64));
}
