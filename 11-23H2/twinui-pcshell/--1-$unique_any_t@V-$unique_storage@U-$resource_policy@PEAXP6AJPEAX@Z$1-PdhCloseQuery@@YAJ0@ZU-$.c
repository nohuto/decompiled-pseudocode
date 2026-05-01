/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?PdhCloseQuery@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803F9698
 * Callers:
 *     _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$4 @ 0x180404FC3 (_GamingOverlayExperienceManager--PerfDataCollectionThread_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

PDH_STATUS __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long PdhCloseQuery(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long PdhCloseQuery(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  PDH_STATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return PdhCloseQuery(v1);
  return result;
}
