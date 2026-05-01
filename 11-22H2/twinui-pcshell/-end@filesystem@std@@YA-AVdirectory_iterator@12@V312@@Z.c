/*
 * XREFs of ?end@filesystem@std@@YA?AVdirectory_iterator@12@V312@@Z @ 0x1806457CC
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180642CE0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::filesystem::end(_QWORD *a1, __int64 a2)
{
  std::_Ref_count_base *v3; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
