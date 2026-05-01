/*
 * XREFs of ??1StartupNotification@@QEAA@XZ @ 0x18063E2C4
 * Callers:
 *     _StartupFolderNotification::StartupFolderNotification_::_1_::dtor$2 @ 0x18064210D (_StartupFolderNotification--StartupFolderNotification_--_1_--dtor$2.c)
 *     _StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor$3 @ 0x18064250F (_StartupRegKeyNotification--StartupRegKeyNotification_--_1_--dtor$3.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall StartupNotification::~StartupNotification(StartupNotification *this)
{
  HKEY v2; // rcx

  std::wstring::_Tidy_deallocate((__int64)this + 24);
  v2 = (HKEY)*((_QWORD *)this + 1);
  if ( v2 )
    RegCloseKey(v2);
}
