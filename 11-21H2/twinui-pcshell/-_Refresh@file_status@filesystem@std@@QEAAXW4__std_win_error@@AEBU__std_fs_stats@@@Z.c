/*
 * XREFs of ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x180581ED0
 * Callers:
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1805824B4 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?status@directory_entry@filesystem@std@@QEBA?AVfile_status@23@XZ @ 0x180587C84 (-status@directory_entry@filesystem@std@@QEBA-AVfile_status@23@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filesystem::file_status::_Refresh(unsigned int *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  int v4; // r9d
  __int64 result; // rax

  v3 = 0;
  if ( !a2 )
  {
    v4 = *(_DWORD *)(a3 + 16);
    result = (v4 & 1) != 0 ? 365 : 511;
    a1[1] = result;
    if ( (v4 & 0x400) != 0 )
    {
      if ( *(_DWORD *)(a3 + 20) == -1610612724 )
      {
        v3 = 4;
        goto LABEL_13;
      }
      if ( *(_DWORD *)(a3 + 20) == -1610612733 )
      {
        v3 = 10;
        goto LABEL_13;
      }
    }
    v3 = (v4 & 0x10 | 0x20u) >> 4;
    goto LABEL_13;
  }
  a1[1] = 0xFFFF;
  if ( a2 >= 2 && (a2 <= 3 || a2 == 53 || a2 == 123) )
    v3 = 1;
LABEL_13:
  *a1 = v3;
  return result;
}
