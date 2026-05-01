/*
 * XREFs of ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180584FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x180239440 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x18057E5B4 (--0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x1805817BC (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x180582E30 (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180586AC8 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x180587418 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180587860 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x18058793C (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x180587BD0 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall StartupFolderNotification::CheckForNewStartupAppAdded(StartupFolderNotification *this, char a2)
{
  _QWORD *v4; // rdx
  unsigned __int64 v5; // r8
  unsigned int v6; // eax
  volatile signed __int32 *v7; // rdi
  const struct std::filesystem::directory_entry *v8; // r14
  _QWORD *v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  bool v12; // bl
  __int64 v13; // rax
  unsigned int v14; // eax
  const WCHAR *v15; // rdx
  unsigned int v16; // eax
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  STARTUPAPPINFO *v19; // rax
  int updated; // eax
  const WCHAR *v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int lpData; // [rsp+28h] [rbp-E0h]
  int lpDataa; // [rsp+28h] [rbp-E0h]
  unsigned int lpDatab; // [rsp+28h] [rbp-E0h]
  BYTE Data[8]; // [rsp+38h] [rbp-D0h] BYREF
  LPCWSTR *v29; // [rsp+40h] [rbp-C8h] BYREF
  BYTE v30[16]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v31[3]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v32[192]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v33; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v34[4]; // [rsp+160h] [rbp+58h] BYREF
  __int128 v35; // [rsp+180h] [rbp+78h]
  __int128 v36; // [rsp+190h] [rbp+88h]
  __int128 v37; // [rsp+1A0h] [rbp+98h]
  __int128 v38; // [rsp+1B0h] [rbp+A8h]
  __int128 v39; // [rsp+1C0h] [rbp+B8h]
  __int128 v40; // [rsp+1D0h] [rbp+C8h]
  int v41; // [rsp+1E0h] [rbp+D8h]
  __int64 v42; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v43[40]; // [rsp+1F0h] [rbp+E8h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+218h] [rbp+110h] BYREF
  __int128 v45; // [rsp+228h] [rbp+120h]
  __int128 v46; // [rsp+238h] [rbp+130h] BYREF
  __int128 v47; // [rsp+248h] [rbp+140h]
  __int128 v48; // [rsp+258h] [rbp+150h] BYREF
  __int128 v49; // [rsp+268h] [rbp+160h]
  _BYTE v50[32]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v4 = (_QWORD *)((char *)this + 64);
  v29 = lpValueName;
  v5 = *((_QWORD *)this + 10);
  if ( *((_QWORD *)this + 11) >= 8uLL )
    v4 = (_QWORD *)*v4;
  *(_QWORD *)&v45 = 0LL;
  *((_QWORD *)&v45 + 1) = 7LL;
  LOWORD(lpValueName[0]) = 0;
  std::wstring::assign((char *)lpValueName, v4, v5);
  *(_OWORD *)v30 = 0LL;
  v6 = std::filesystem::_Dir_enum_impl::_Initialize_dir_enum<std::filesystem::_Dir_enum_impl>(v30, (__int64)lpValueName);
  if ( v6 )
    std::filesystem::_Throw_fs_error("directory_iterator::directory_iterator", v6, lpValueName);
  std::wstring::_Tidy_deallocate((__int64)lpValueName);
  v7 = *(volatile signed __int32 **)&v30[8];
  if ( *(_QWORD *)&v30[8] )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&v30[8] + 8LL));
    v7 = *(volatile signed __int32 **)&v30[8];
  }
  v31[0] = *(_OWORD *)v30;
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)&v30[8];
  }
  v31[1] = 0LL;
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  while ( 1 )
  {
    v8 = *(const struct std::filesystem::directory_entry **)&v31[0];
    if ( !*(_QWORD *)&v31[0] )
      break;
    std::wstring::wstring(lpValueName, L"StartupTNoti");
    v9 = (_QWORD *)std::filesystem::path::filename((char *)v8 + 32, &v46);
    if ( v9[3] >= 8uLL )
      v9 = (_QWORD *)*v9;
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)v9 + v10) );
    std::wstring::append(lpValueName, v9, v10);
    std::wstring::_Tidy_deallocate((__int64)&v46);
    v11 = std::filesystem::path::filename((char *)v8 + 32, &v46);
    if ( *(_QWORD *)(v11 + 24) >= 8uLL )
      v11 = *(_QWORD *)v11;
    v12 = RegQueryValueExW(*((HKEY *)this + 1), (LPCWSTR)v11, 0LL, 0LL, 0LL, 0LL) == 0;
    std::wstring::_Tidy_deallocate((__int64)&v46);
    if ( v12 )
    {
      v13 = std::filesystem::path::filename((char *)v8 + 32, &v46);
      if ( *(_QWORD *)(v13 + 24) >= 8uLL )
        v13 = *(_QWORD *)v13;
      v14 = RegDeleteValueW(*((HKEY *)this + 1), (LPCWSTR)v13);
      if ( v14 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0x146,
          (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v14);
      std::wstring::_Tidy_deallocate((__int64)&v46);
      *(_DWORD *)Data = *((_DWORD *)this + 14);
      v15 = (const WCHAR *)lpValueName;
      if ( *((_QWORD *)&v45 + 1) >= 8uLL )
        v15 = lpValueName[0];
      v16 = RegSetValueExW(*((HKEY *)this + 1), v15, 0, 4u, Data, 4u);
      if ( v16 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          329LL,
          (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v16,
          lpData);
    }
    v17 = (const WCHAR *)lpValueName;
    if ( *((_QWORD *)&v45 + 1) >= 8uLL )
      v17 = lpValueName[0];
    if ( RegQueryValueExW(*((HKEY *)this + 1), v17, 0LL, 0LL, 0LL, 0LL) == 2
      && StartupFolderNotification::IsValidStartupAppFile(v8) )
    {
      if ( a2 )
      {
        v18 = std::filesystem::path::filename((char *)v8 + 32, v50);
        std::wstring::wstring((__int64)&v46, v18);
        std::wstring::_Tidy_deallocate((__int64)v50);
        std::wstring::wstring((__int64)&v48, (__int64)v8 + 32);
        v33 = *((_QWORD *)this + 12);
        std::wstring::wstring(v34, &LocaleName);
        v35 = v46;
        v36 = v47;
        *(_QWORD *)&v47 = 0LL;
        *((_QWORD *)&v47 + 1) = 7LL;
        LOWORD(v46) = 0;
        v37 = *(_OWORD *)lpValueName;
        v38 = v45;
        *(_QWORD *)&v45 = 0LL;
        *((_QWORD *)&v45 + 1) = 7LL;
        LOWORD(lpValueName[0]) = 0;
        v39 = v48;
        v40 = v49;
        *(_QWORD *)&v49 = 0LL;
        *((_QWORD *)&v49 + 1) = 7LL;
        LOWORD(v48) = 0;
        v41 = *((_DWORD *)this + 14);
        std::chrono::steady_clock::now(&v42);
        std::wstring::wstring((__int64)v43, (__int64)this + 24);
        v19 = (STARTUPAPPINFO *)STARTUPAPPINFO::STARTUPAPPINFO((__int64)v32, (__int64)&v33);
        updated = StartupAppMonitor::UpdateNotificationMap(v19);
        if ( updated < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x157,
            (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
            (const char *)(unsigned int)updated,
            lpDataa);
        STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v33);
        std::wstring::_Tidy_deallocate((__int64)&v48);
        std::wstring::_Tidy_deallocate((__int64)&v46);
      }
      else
      {
        LODWORD(v29) = *((_DWORD *)this + 14);
        v21 = (const WCHAR *)lpValueName;
        if ( *((_QWORD *)&v45 + 1) >= 8uLL )
          v21 = lpValueName[0];
        v22 = RegSetValueExW(*((HKEY *)this + 1), v21, 0, 4u, (const BYTE *)&v29, 4u);
        if ( v22 )
          wil::details::in1diag3::_Throw_Win32(
            retaddr,
            351LL,
            (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
            (const char *)v22,
            lpDatab);
      }
    }
    std::wstring::_Tidy_deallocate((__int64)lpValueName);
    v23 = std::filesystem::_Dir_enum_impl::_Advance_and_reset_if_no_more_files(v31);
    if ( v23 )
      std::filesystem::_Throw_fs_error(v24, v23);
  }
  if ( *((_QWORD *)&v31[0] + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v31[0] + 1));
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
}
