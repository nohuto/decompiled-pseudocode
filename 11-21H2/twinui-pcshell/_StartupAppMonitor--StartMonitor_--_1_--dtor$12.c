/*
 * XREFs of _StartupAppMonitor::StartMonitor_::_1_::dtor$12 @ 0x180580B5B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StartupAppMonitor::StartMonitor_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(a2 + 88);
}
