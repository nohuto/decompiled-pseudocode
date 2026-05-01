/*
 * XREFs of ??0directory_iterator@filesystem@std@@QEAA@AEBVpath@12@@Z @ 0x18064268C
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180642CE0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x1803DCE24 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1806416A0 (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 */

// Hidden C++ exception states: #wind=1
std::filesystem::directory_iterator *__fastcall std::filesystem::directory_iterator::directory_iterator(
        std::filesystem::directory_iterator *this,
        const struct std::filesystem::path *a2)
{
  int v4; // eax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v4 = std::filesystem::_Dir_enum_impl::_Initialize_dir_enum<std::filesystem::_Dir_enum_impl>(this, (__int64)a2);
  if ( v4 )
    std::filesystem::_Throw_fs_error((__int64)"directory_iterator::directory_iterator", v4, (__int64)a2);
  return this;
}
