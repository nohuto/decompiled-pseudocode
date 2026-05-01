/*
 * XREFs of _UndockedSearchAppExperienceManager::AuditWebSearchExtensions_::_1_::dtor$2 @ 0x1801EA8AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LSTATUS __fastcall UndockedSearchAppExperienceManager::AuditWebSearchExtensions_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>((HKEY *)(a2 + 72));
}
