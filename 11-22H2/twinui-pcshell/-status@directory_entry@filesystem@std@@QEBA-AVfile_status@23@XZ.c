/*
 * XREFs of ?status@directory_entry@filesystem@std@@QEBA?AVfile_status@23@XZ @ 0x180645868
 * Callers:
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180644860 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 * Callees:
 *     __std_fs_get_stats @ 0x180193700 (__std_fs_get_stats.c)
 *     ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x1801937EC (-_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x1803DCE24 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 */

__int64 *__fastcall std::filesystem::directory_entry::status(__int64 a1, __int64 *a2)
{
  int v2; // eax
  __int64 v5; // r8
  const WCHAR **v6; // rbx
  int v7; // r9d
  const WCHAR *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  DWORD stats; // [rsp+28h] [rbp-30h]
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 28);
  v10 = 0xFFFF00000000LL;
  if ( (v2 & 3) == 3 )
  {
    stats = 0;
    std::filesystem::file_status::_Refresh((unsigned int *)&v10, 0, a1);
    v6 = (const WCHAR **)(v5 + 32);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 28) & 2) != 0 )
      v7 = *(_DWORD *)(a1 + 16);
    else
      v7 = -1;
    v6 = (const WCHAR **)(a1 + 32);
    v8 = (const WCHAR *)(a1 + 32);
    if ( *(_QWORD *)(a1 + 56) >= 8uLL )
      v8 = *v6;
    stats = _std_fs_get_stats(v8, (__int64)v12, 3, v7);
    std::filesystem::file_status::_Refresh((unsigned int *)&v10, stats, (__int64)v12);
  }
  if ( stats && (((_DWORD)v10 - 1) & 0xFFFFFFF7) != 0 )
    std::filesystem::_Throw_fs_error((__int64)"directory_entry::status", stats, (__int64)v6);
  *a2 = v10;
  return a2;
}
