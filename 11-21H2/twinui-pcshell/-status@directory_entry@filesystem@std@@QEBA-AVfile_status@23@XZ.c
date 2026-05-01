/*
 * XREFs of ?status@directory_entry@filesystem@std@@QEBA?AVfile_status@23@XZ @ 0x180587C84
 * Callers:
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180586AC8 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 * Callees:
 *     ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x180581ED0 (-_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x18058793C (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     __std_fs_get_stats @ 0x1805E34A4 (__std_fs_get_stats.c)
 */

__int64 *__fastcall std::filesystem::directory_entry::status(__int64 a1, __int64 *a2)
{
  int v2; // eax
  char *v5; // r8
  unsigned int v6; // edx
  const WCHAR *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  unsigned int stats; // [rsp+28h] [rbp-30h]
  char v11; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 28);
  v9 = 0xFFFF00000000LL;
  if ( (v2 & 3) == 3 )
  {
    stats = 0;
    v5 = (char *)a1;
    v6 = 0;
  }
  else
  {
    v7 = (const WCHAR *)(a1 + 32);
    if ( *((_QWORD *)v7 + 3) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    stats = _std_fs_get_stats(v7);
    v5 = &v11;
    v6 = stats;
  }
  std::filesystem::file_status::_Refresh((unsigned int *)&v9, v6, (__int64)v5);
  if ( stats && (((_DWORD)v9 - 1) & 0xFFFFFFF7) != 0 )
    std::filesystem::_Throw_fs_error((__int64)"directory_entry::status", stats, a1 + 32);
  *a2 = v9;
  return a2;
}
