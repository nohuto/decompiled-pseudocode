/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VStartupFolderNotification@@@std@@EEAAXXZ @ 0x1806409F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

LSTATUS __fastcall std::_Ref_count_obj2<StartupFolderNotification>::_Destroy(__int64 a1)
{
  LSTATUS result; // eax
  HKEY v3; // rcx

  std::wstring::_Tidy_deallocate(a1 + 80);
  result = std::wstring::_Tidy_deallocate(a1 + 40);
  v3 = *(HKEY *)(a1 + 24);
  if ( v3 )
    return RegCloseKey(v3);
  return result;
}
