/*
 * XREFs of ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x18008E2C4
 * Callers:
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x1800B08F4 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180642CE0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180644860 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x180090CE4 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 */

__int64 __fastcall std::filesystem::path::filename(std::filesystem *a1, __int64 a2)
{
  std::filesystem *v3; // r8
  const unsigned __int16 *v4; // rbx
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v3 = *(std::filesystem **)a1;
  v4 = (const unsigned __int16 *)((char *)v3 + 2 * *((_QWORD *)a1 + 2));
  v6[0] = std::filesystem::_Find_filename(v3, v4, (const unsigned __int16 *)v3);
  v6[1] = ((__int64)v4 - v6[0]) >> 1;
  std::wstring::wstring(a2, v6);
  return a2;
}
