/*
 * XREFs of ??1StartupRegKeyNotification@@QEAA@XZ @ 0x18063E2F8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VStartupRegKeyNotification@@@std@@EEAAXXZ @ 0x180640A30 (-_Destroy@-$_Ref_count_obj2@VStartupRegKeyNotification@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall StartupRegKeyNotification::~StartupRegKeyNotification(StartupRegKeyNotification *this)
{
  HKEY v2; // rcx
  HKEY v3; // rcx

  std::wstring::_Tidy_deallocate((__int64)this + 80);
  v2 = (HKEY)*((_QWORD *)this + 8);
  if ( v2 )
    RegCloseKey(v2);
  std::wstring::_Tidy_deallocate((__int64)this + 24);
  v3 = (HKEY)*((_QWORD *)this + 1);
  if ( v3 )
    RegCloseKey(v3);
}
