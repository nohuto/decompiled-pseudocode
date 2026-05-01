/*
 * XREFs of ??1StartupNotification@@QEAA@XZ @ 0x18057F244
 * Callers:
 *     _StartupFolderNotification::StartupFolderNotification_::_1_::dtor$2 @ 0x1805842C0 (_StartupFolderNotification--StartupFolderNotification_--_1_--dtor$2.c)
 *     _StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor$3 @ 0x1805846C1 (_StartupRegKeyNotification--StartupRegKeyNotification_--_1_--dtor$3.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall StartupNotification::~StartupNotification(HKEY *this)
{
  std::wstring::_Tidy_deallocate((__int64)(this + 3));
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(this + 1);
}
