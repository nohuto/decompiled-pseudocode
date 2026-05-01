/*
 * XREFs of ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x180645230
 * Callers:
 *     ??Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ @ 0x1806427F8 (--Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z @ 0x180645318 (-_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180645480 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 */

DWORD __fastcall std::filesystem::_Dir_enum_impl::_Advance_and_reset_if_no_more_files(__int64 a1)
{
  HANDLE *v1; // rdi
  const struct __std_fs_find_data *v3; // rdx
  DWORD result; // eax
  std::_Ref_count_base *v5; // rcx
  _WIN32_FIND_DATAW FindFileData; // [rsp+20h] [rbp-268h] BYREF

  v1 = *(HANDLE **)a1;
  while ( FindNextFileW(v1[8], &FindFileData) )
  {
LABEL_5:
    if ( !std::filesystem::_Is_dot_or_dotdot((std::filesystem *)&FindFileData, v3) )
    {
      std::filesystem::_Dir_enum_impl::_Refresh(
        (std::filesystem::_Dir_enum_impl *)v1,
        (const struct __std_fs_find_data *)&FindFileData);
      return 0;
    }
  }
  result = GetLastError();
  if ( result != 18 )
  {
    if ( result )
      return result;
    goto LABEL_5;
  }
  v5 = *(std::_Ref_count_base **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 0LL;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return 0;
}
