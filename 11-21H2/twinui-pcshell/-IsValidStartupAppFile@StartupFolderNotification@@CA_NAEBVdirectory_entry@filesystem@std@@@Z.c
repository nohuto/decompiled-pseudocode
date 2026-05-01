/*
 * XREFs of ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180586AC8
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180584FA0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18022B968 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??$transform@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@std@@YA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0V10@P6AGG@Z@Z @ 0x180584018 (--$transform@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x180587BD0 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?status@directory_entry@filesystem@std@@QEBA?AVfile_status@23@XZ @ 0x180587C84 (-status@directory_entry@filesystem@std@@QEBA-AVfile_status@23@XZ.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall StartupFolderNotification::IsValidStartupAppFile(const struct std::filesystem::directory_entry *a1)
{
  char *v3; // rbx
  __int64 v4; // rax
  _WORD *v5; // r9
  unsigned __int16 *v6; // rcx
  unsigned __int16 *v7; // rdx
  int v8; // eax
  char v9; // di
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-30h]
  _BYTE v13[32]; // [rsp+58h] [rbp-28h] BYREF

  if ( *(_DWORD *)std::filesystem::directory_entry::status(a1, &v10) == 3 )
    return 0;
  v3 = (char *)a1 + 32;
  v4 = std::filesystem::path::filename(v3, v13);
  std::wstring::wstring((__int64)v11, v4);
  std::wstring::_Tidy_deallocate((__int64)v13);
  v5 = v11;
  if ( v12 >= 8 )
    v5 = (_WORD *)v11[0];
  v6 = (unsigned __int16 *)v11;
  if ( v12 >= 8 )
    v6 = (unsigned __int16 *)v11[0];
  v7 = (unsigned __int16 *)v11;
  if ( v12 >= 8 )
    v7 = (unsigned __int16 *)v11[0];
  std::transform<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short (*)(unsigned short)>(
    &v10,
    v7,
    &v6[v11[2]],
    v5,
    _o_towlower);
  LOBYTE(v8) = std::wstring::compare(v11, (__int64)L"desktop.ini");
  v9 = 0;
  if ( v8 )
  {
    if ( *((_QWORD *)v3 + 3) >= 8uLL )
      v3 = *(char **)v3;
    if ( (GetFileAttributesW((LPCWSTR)v3) & 2) == 0 )
      v9 = 1;
  }
  std::wstring::_Tidy_deallocate((__int64)v11);
  return v9;
}
