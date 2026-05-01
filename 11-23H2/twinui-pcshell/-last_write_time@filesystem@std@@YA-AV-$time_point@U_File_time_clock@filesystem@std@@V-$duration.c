/*
 * XREFs of ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x1806F7044
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     __std_fs_get_stats @ 0x180193700 (__std_fs_get_stats.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x1803DCE24 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 */

_QWORD *__fastcall std::filesystem::last_write_time(_QWORD *a1, const WCHAR *a2)
{
  const WCHAR *v4; // rcx
  DWORD stats; // eax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v4 = *(const WCHAR **)a2;
  stats = _std_fs_get_stats(v4, (__int64)v7, 33, -1);
  if ( stats )
  {
    *a1 = 0x8000000000000000uLL;
    std::filesystem::_Throw_fs_error((__int64)"last_write_time", stats, (__int64)a2);
  }
  *a1 = v7[0];
  return a1;
}
