/*
 * XREFs of ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x180582E30
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180584FA0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$make_shared@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@std@@YA?AV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@0@$$QEAU_Creator@_Dir_enum_impl@filesystem@0@AEBW4directory_options@40@@Z @ 0x180583F68 (--$make_shared@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@std@@YA-.c)
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x18058757C (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 *     __std_fs_directory_iterator_close @ 0x1805E3470 (__std_fs_directory_iterator_close.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::filesystem::_Dir_enum_impl::_Initialize_dir_enum<std::filesystem::_Dir_enum_impl>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-D8h]
  _BYTE v12[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[592]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+2A8h] [rbp+1A8h]

  std::wstring::wstring((__int64)v12, a2);
  v13 = -1LL;
  v3 = std::filesystem::_Dir_enum_impl::_Open_dir(v12, 0LL, &v13, v14);
  if ( !v3 )
  {
    LOBYTE(v10) = 1;
LABEL_3:
    HIDWORD(v10) = 0;
    goto LABEL_6;
  }
  LOBYTE(v10) = 0;
  if ( v3 == 18 )
    goto LABEL_3;
  HIDWORD(v10) = v3;
LABEL_6:
  v15 = v10;
  if ( (_BYTE)v10 )
  {
    v4 = (__int64 *)std::make_shared<std::filesystem::_Dir_enum_impl,std::filesystem::_Dir_enum_impl::_Creator,enum std::filesystem::directory_options const &>(
                      &v10,
                      v12);
    v5 = *v4;
    v6 = v4[1];
    *v4 = 0LL;
    v4[1] = 0LL;
    *a1 = v5;
    v7 = (std::_Ref_count_base *)a1[1];
    a1[1] = v6;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  v8 = HIDWORD(v15);
  _std_fs_directory_iterator_close(v13);
  std::wstring::_Tidy_deallocate((__int64)v12);
  return v8;
}
