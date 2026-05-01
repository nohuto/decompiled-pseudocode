/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VStartupFolderNotification@@@std@@EEAAXXZ @ 0x1805819D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

LSTATUS __fastcall std::_Ref_count_obj2<StartupFolderNotification>::_Destroy(__int64 a1)
{
  std::wstring::_Tidy_deallocate(a1 + 80);
  std::wstring::_Tidy_deallocate(a1 + 40);
  return wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>((HKEY *)(a1 + 24));
}
