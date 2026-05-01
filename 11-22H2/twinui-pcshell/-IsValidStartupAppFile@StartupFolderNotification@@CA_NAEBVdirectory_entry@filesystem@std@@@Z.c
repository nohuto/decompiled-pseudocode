/*
 * XREFs of ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180644860
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180642CE0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x18008E2C4 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??$transform@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@std@@YA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0V10@P6AGG@Z@Z @ 0x180465D7C (--$transform@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@.c)
 *     ?status@directory_entry@filesystem@std@@QEBA?AVfile_status@23@XZ @ 0x180645868 (-status@directory_entry@filesystem@std@@QEBA-AVfile_status@23@XZ.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall StartupFolderNotification::IsValidStartupAppFile(const struct std::filesystem::directory_entry *a1)
{
  char v2; // di
  std::filesystem *v4; // rbx
  __int64 v5; // rax
  _WORD *v6; // r9
  unsigned __int16 *v7; // rcx
  unsigned __int16 *v8; // rdx
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-30h]
  _BYTE v13[32]; // [rsp+58h] [rbp-28h] BYREF

  v2 = 0;
  if ( *(_DWORD *)std::filesystem::directory_entry::status(a1, &v10) == 3 )
    return 0;
  v4 = (const struct std::filesystem::directory_entry *)((char *)a1 + 32);
  v5 = std::filesystem::path::filename(v4, (__int64)v13);
  std::wstring::wstring(v11, v5);
  std::wstring::_Tidy_deallocate((__int64)v13);
  v6 = v11;
  if ( v12 >= 8 )
    v6 = (_WORD *)v11[0];
  v7 = (unsigned __int16 *)v11;
  if ( v12 >= 8 )
    v7 = (unsigned __int16 *)v11[0];
  v8 = (unsigned __int16 *)v11;
  if ( v12 >= 8 )
    v8 = (unsigned __int16 *)v11[0];
  std::transform<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short (*)(unsigned short)>(
    &v10,
    v8,
    &v7[v11[2]],
    v6,
    _o_towlower);
  LOBYTE(v9) = std::wstring::compare((char *)v11, (char *)L"desktop.ini");
  if ( v9 )
  {
    if ( *((_QWORD *)v4 + 3) >= 8uLL )
      v4 = *(std::filesystem **)v4;
    if ( (GetFileAttributesW((LPCWSTR)v4) & 2) == 0 )
      v2 = 1;
  }
  std::wstring::_Tidy_deallocate((__int64)v11);
  return v2;
}
