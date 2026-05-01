/*
 * XREFs of ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x18058757C
 * Callers:
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x180582E30 (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 * Callees:
 *     ??$?_0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAAAEAV012@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x180582968 (--$-_0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAAAEAV012@AE.c)
 *     ?_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z @ 0x18058754C (-_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z.c)
 *     __std_fs_directory_iterator_close @ 0x1805E3470 (__std_fs_directory_iterator_close.c)
 */

DWORD __fastcall std::filesystem::_Dir_enum_impl::_Open_dir(
        _QWORD *a1,
        char a2,
        _QWORD *a3,
        struct _WIN32_FIND_DATAW *a4)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  HANDLE FirstFile; // rax
  const struct __std_fs_find_data *v10; // rdx
  DWORD result; // eax
  void *v12; // rbx
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = a1;
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)a1 + v8) );
  if ( !v8 || v8 != v7[2] )
    return 2;
  v13[1] = 1LL;
  v13[0] = L"*";
  std::filesystem::path::operator/=<std::basic_string_view<unsigned short>,0>(v7, (__int64)v13);
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  _std_fs_directory_iterator_close(*a3);
  FirstFile = FindFirstFileExW((LPCWSTR)v7, FindExInfoBasic, a4, FindExSearchNameMatch, 0LL, 0);
  *a3 = FirstFile;
  if ( FirstFile == (HANDLE)-1LL && (result = GetLastError()) != 0 )
  {
    if ( result == 5 && (a2 & 2) != 0 )
      return 18;
  }
  else
  {
    v12 = (void *)*a3;
    while ( std::filesystem::_Is_dot_or_dotdot((std::filesystem *)a4, v10) )
    {
      if ( !FindNextFileW(v12, a4) )
      {
        result = GetLastError();
        if ( result )
          return result;
      }
    }
    return 0;
  }
  return result;
}
