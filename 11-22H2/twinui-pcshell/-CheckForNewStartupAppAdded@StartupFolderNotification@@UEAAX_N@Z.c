/*
 * XREFs of ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180642CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x18008E2C4 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x1802E8832 (--0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x1802E8A2C (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x180640828 (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     ??0directory_iterator@filesystem@std@@QEAA@AEBVpath@12@@Z @ 0x18064268C (--0directory_iterator@filesystem@std@@QEAA@AEBVpath@12@@Z.c)
 *     ??Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ @ 0x1806427F8 (--Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ.c)
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180644860 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 *     ?end@filesystem@std@@YA?AVdirectory_iterator@12@V312@@Z @ 0x1806457CC (-end@filesystem@std@@YA-AVdirectory_iterator@12@V312@@Z.c)
 */

// Hidden C++ exception states: #wind=16
void __fastcall StartupFolderNotification::CheckForNewStartupAppAdded(StartupFolderNotification *this, char a2)
{
  std::_Ref_count_base *v4; // rax
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rax
  __int128 v7; // xmm0
  std::_Ref_count_base *v8; // rsi
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
  unsigned int lpData; // [rsp+20h] [rbp-E0h]
  int lpDataa; // [rsp+20h] [rbp-E0h]
  unsigned int lpDatab; // [rsp+20h] [rbp-E0h]
  BYTE Data[16]; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v28; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v29; // [rsp+58h] [rbp-A8h]
  std::_Ref_count_base *v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v31; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[192]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v34[4]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v35; // [rsp+178h] [rbp+78h]
  __int128 v36; // [rsp+188h] [rbp+88h]
  __int128 v37; // [rsp+198h] [rbp+98h]
  __int128 v38; // [rsp+1A8h] [rbp+A8h]
  __int128 v39; // [rsp+1B8h] [rbp+B8h]
  __int128 v40; // [rsp+1C8h] [rbp+C8h]
  int v41; // [rsp+1D8h] [rbp+D8h]
  __int64 v42; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v43[5]; // [rsp+1E8h] [rbp+E8h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+210h] [rbp+110h] BYREF
  __int128 v45; // [rsp+220h] [rbp+120h]
  __int128 v46; // [rsp+230h] [rbp+130h] BYREF
  __int128 v47; // [rsp+240h] [rbp+140h]
  BYTE v48[16]; // [rsp+250h] [rbp+150h] BYREF
  __int128 v49; // [rsp+260h] [rbp+160h]
  _BYTE v50[32]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v4 = (StartupFolderNotification *)((char *)this + 64);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v4 = *(std::_Ref_count_base **)v4;
  v28 = v4;
  v29 = v5;
  std::wstring::wstring(&v46, (void **)&v28);
  std::filesystem::directory_iterator::directory_iterator(
    (std::filesystem::directory_iterator *)v27,
    (const struct std::filesystem::path *)&v46);
  std::wstring::_Tidy_deallocate((__int64)&v46);
  v6 = v27[1];
  if ( v27[1] )
  {
    _InterlockedIncrement((volatile signed __int32 *)v27[1] + 2);
    v6 = v27[1];
  }
  v7 = *(_OWORD *)v27;
  *(_OWORD *)v30 = *(_OWORD *)v27;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    v7 = *(_OWORD *)v27;
  }
  v31 = v7;
  std::filesystem::end(&v28, &v31);
  while ( 1 )
  {
    v8 = v30[0];
    if ( v30[0] == v28 )
      break;
    std::wstring::wstring(lpValueName, L"StartupTNoti");
    v9 = (_QWORD *)std::filesystem::path::filename((std::_Ref_count_base *)((char *)v8 + 32), (__int64)&v46);
    if ( v9[3] >= 8uLL )
      v9 = (_QWORD *)*v9;
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)v9 + v10) );
    std::wstring::append(lpValueName, v9, v10);
    std::wstring::_Tidy_deallocate((__int64)&v46);
    v11 = std::filesystem::path::filename((std::_Ref_count_base *)((char *)v8 + 32), (__int64)&v46);
    if ( *(_QWORD *)(v11 + 24) >= 8uLL )
      v11 = *(_QWORD *)v11;
    v12 = RegQueryValueExW(*((HKEY *)this + 1), (LPCWSTR)v11, 0LL, 0LL, 0LL, 0LL) == 0;
    std::wstring::_Tidy_deallocate((__int64)&v46);
    if ( v12 )
    {
      v13 = std::filesystem::path::filename((std::_Ref_count_base *)((char *)v8 + 32), (__int64)&v46);
      if ( *(_QWORD *)(v13 + 24) >= 8uLL )
        v13 = *(_QWORD *)v13;
      v14 = RegDeleteValueW(*((HKEY *)this + 1), (LPCWSTR)v13);
      if ( v14 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0x148,
          (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v14);
      std::wstring::_Tidy_deallocate((__int64)&v46);
      *(_DWORD *)Data = *((_DWORD *)this + 14);
      v15 = (const WCHAR *)lpValueName;
      if ( *((_QWORD *)&v45 + 1) >= 8uLL )
        v15 = lpValueName[0];
      v16 = RegSetValueExW(*((HKEY *)this + 1), v15, 0, 4u, Data, 4u);
      if ( v16 )
        wil::details::in1diag3::Throw_Win32(
          retaddr,
          331LL,
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
        v18 = std::filesystem::path::filename((std::_Ref_count_base *)((char *)v8 + 32), (__int64)v50);
        std::wstring::wstring(&v46, v18);
        std::wstring::_Tidy_deallocate((__int64)v50);
        std::wstring::wstring(v48, (__int64)v8 + 32);
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
        v39 = *(_OWORD *)v48;
        v40 = v49;
        *(_QWORD *)&v49 = 0LL;
        *((_QWORD *)&v49 + 1) = 7LL;
        *(_WORD *)v48 = 0;
        v41 = *((_DWORD *)this + 14);
        std::chrono::steady_clock::now(&v42);
        std::wstring::wstring(v43, (__int64)this + 24);
        v19 = (STARTUPAPPINFO *)STARTUPAPPINFO::STARTUPAPPINFO((__int64)v32, (__int64)&v33);
        updated = StartupAppMonitor::UpdateNotificationMap(v19);
        if ( updated < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x159,
            (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
            (const char *)(unsigned int)updated,
            lpDataa);
        STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v33);
        std::wstring::_Tidy_deallocate((__int64)v48);
        std::wstring::_Tidy_deallocate((__int64)&v46);
      }
      else
      {
        *(_DWORD *)v48 = *((_DWORD *)this + 14);
        v21 = (const WCHAR *)lpValueName;
        if ( *((_QWORD *)&v45 + 1) >= 8uLL )
          v21 = lpValueName[0];
        v22 = RegSetValueExW(*((HKEY *)this + 1), v21, 0, 4u, v48, 4u);
        if ( v22 )
          wil::details::in1diag3::Throw_Win32(
            retaddr,
            353LL,
            (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
            (const char *)v22,
            lpDatab);
      }
    }
    std::wstring::_Tidy_deallocate((__int64)lpValueName);
    std::filesystem::directory_iterator::operator++((__int64)v30);
  }
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  if ( v30[1] )
    std::_Ref_count_base::_Decref(v30[1]);
  if ( v27[1] )
    std::_Ref_count_base::_Decref(v27[1]);
}
