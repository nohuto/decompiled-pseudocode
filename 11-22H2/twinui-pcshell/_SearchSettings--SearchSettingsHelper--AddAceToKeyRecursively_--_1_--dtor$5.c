/*
 * XREFs of _SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor$5 @ 0x1801EA20F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLOCAL __fastcall SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>((void **)(a2 + 96));
}
