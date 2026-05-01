/*
 * XREFs of ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x18063FC30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18008CD34 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1800B08A8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x18019366C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B5348 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1802E78DC (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??0STARTUPAPPINFO@@QEAA@AEBU0@@Z @ 0x1802E8956 (--0STARTUPAPPINFO@@QEAA@AEBU0@@Z.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x1802E8A2C (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18063D588 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     ??$_Emplace_reallocate@PEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAAPEAPEAXQEAPEAX$$QEAPEAX@Z @ 0x18063D704 (--$_Emplace_reallocate@PEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAAPEAPEAXQEAPEAX$$QEAPEA.c)
 *     ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18063D840 (--$_Eqrange@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trai.c)
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x18063EBE8 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x180640A40 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180644120 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180644CB0 (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 */

// Hidden C++ exception states: #wind=14 #try_helpers=1
void __fastcall StartupAppMonitor::StartupToastNotifier(struct StartupAppMonitor *a1)
{
  int v2; // r15d
  unsigned int v3; // eax
  wil **v4; // rdi
  HANDLE *v5; // r14
  HANDLE *v6; // r14
  HANDLE *v7; // r12
  int v8; // eax
  void *v9; // rdx
  __int64 v10; // rbx
  const char *v11; // r9
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  const WCHAR *v15; // rdx
  LSTATUS Value; // eax
  LPCWSTR *v17; // r9
  char *i; // rax
  __int64 v19; // rcx
  char *v20; // rdx
  char *v21; // rax
  __int64 v22; // r10
  const wchar_t *v23; // rdx
  bool v24; // cc
  wchar_t v25; // cx
  __int64 v26; // rax
  const WCHAR *v27; // rdx
  unsigned int v28; // eax
  const WCHAR *v29; // rdx
  LSTATUS v30; // eax
  BYTE *v31; // rax
  const WCHAR *v32; // rdx
  LPBYTE *v33; // rdx
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  const WCHAR *v36; // rdx
  unsigned int v37; // eax
  const unsigned __int16 *v38; // r8
  const unsigned __int16 *v39; // rdx
  bool v40; // r8
  const unsigned __int16 *v41; // rdx
  const unsigned __int16 *v42; // rcx
  _QWORD *v43; // rax
  const struct std::filesystem::path *v44; // rdx
  const WCHAR *v45; // rdx
  unsigned int v46; // eax
  const unsigned __int16 *v47; // r8
  const unsigned __int16 *v48; // rdx
  bool v49; // r8
  const unsigned __int16 *v50; // rdx
  const unsigned __int16 *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD **v55; // rcx
  _QWORD *v56; // rbx
  _QWORD *v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  wil::details *v63; // rax
  _QWORD *v64; // rdi
  _QWORD *v65; // rbx
  unsigned int phkResult; // [rsp+20h] [rbp-308h]
  unsigned int phkResulta; // [rsp+20h] [rbp-308h]
  unsigned int phkResultb; // [rsp+20h] [rbp-308h]
  unsigned int phkResultc; // [rsp+20h] [rbp-308h]
  wil::details *v70; // [rsp+50h] [rbp-2D8h] BYREF
  DWORD cbData; // [rsp+58h] [rbp-2D0h] BYREF
  int v72; // [rsp+5Ch] [rbp-2CCh]
  BYTE Data[8]; // [rsp+60h] [rbp-2C8h] BYREF
  void *v74[2]; // [rsp+68h] [rbp-2C0h] BYREF
  HKEY v75; // [rsp+78h] [rbp-2B0h] BYREF
  DWORD Type; // [rsp+80h] [rbp-2A8h] BYREF
  HKEY hKey; // [rsp+88h] [rbp-2A0h] BYREF
  HANDLE *lpHandles[2]; // [rsp+90h] [rbp-298h] BYREF
  HANDLE *v79; // [rsp+A0h] [rbp-288h]
  wil **v80; // [rsp+A8h] [rbp-280h]
  wil::details *v81; // [rsp+B0h] [rbp-278h] BYREF
  wil::details *v82; // [rsp+B8h] [rbp-270h]
  __int64 v83; // [rsp+C0h] [rbp-268h] BYREF
  void *v84[4]; // [rsp+D0h] [rbp-258h] BYREF
  HKEY v85; // [rsp+F0h] [rbp-238h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+F8h] [rbp-230h] BYREF
  unsigned __int64 v87; // [rsp+108h] [rbp-220h]
  unsigned __int64 v88; // [rsp+110h] [rbp-218h]
  LPCWSTR v89[3]; // [rsp+118h] [rbp-210h] BYREF
  unsigned __int64 v90; // [rsp+130h] [rbp-1F8h]
  LPCWSTR lpValueName[3]; // [rsp+138h] [rbp-1F0h] BYREF
  unsigned __int64 v92; // [rsp+150h] [rbp-1D8h]
  _QWORD v93[4]; // [rsp+158h] [rbp-1D0h] BYREF
  int v94; // [rsp+178h] [rbp-1B0h]
  __int64 v95; // [rsp+180h] [rbp-1A8h]
  unsigned __int16 *v96[3]; // [rsp+188h] [rbp-1A0h] BYREF
  unsigned __int64 v97; // [rsp+1A0h] [rbp-188h]
  LPBYTE lpData[2]; // [rsp+1B0h] [rbp-178h] BYREF
  __int128 v99; // [rsp+1C0h] [rbp-168h]
  unsigned __int16 *v100[2]; // [rsp+1D0h] [rbp-158h] BYREF
  __int64 v101; // [rsp+1E0h] [rbp-148h]
  unsigned __int64 v102; // [rsp+1E8h] [rbp-140h]
  __int128 v103; // [rsp+1F0h] [rbp-138h] BYREF
  __int128 v104; // [rsp+200h] [rbp-128h]
  _QWORD v105[4]; // [rsp+210h] [rbp-118h] BYREF
  _BYTE v106[192]; // [rsp+230h] [rbp-F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+0h]

  v2 = 0;
  v72 = 0;
  hKey = 0LL;
  v3 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\RunNotification",
         0,
         0x2011Bu,
         &hKey);
  try
  {
    if ( v3 )
      wil::details::in1diag3::Throw_Win32(
        retaddr,
        195LL,
        (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
        (const char *)v3,
        phkResult);
    *(_OWORD *)lpHandles = 0LL;
    v79 = 0LL;
    v4 = (wil **)((char *)a1 + 176);
    v80 = (wil **)((char *)a1 + 176);
    v70 = (wil::details *)*((_QWORD *)a1 + 22);
    std::vector<void *>::_Emplace_reallocate<void *>((const void **)lpHandles, 0LL, &v70);
    v70 = StartupAppMonitor::s_showNotificationMapUpdateEvent;
    v5 = lpHandles[1];
    if ( lpHandles[1] == v79 )
    {
      std::vector<void *>::_Emplace_reallocate<void *>((const void **)lpHandles, (_BYTE *)lpHandles[1], &v70);
      v6 = lpHandles[1];
    }
    else
    {
      *lpHandles[1] = StartupAppMonitor::s_showNotificationMapUpdateEvent;
      v6 = v5 + 1;
      lpHandles[1] = v6;
    }
    v7 = lpHandles[0];
    while ( 1 )
    {
      v8 = _Mtx_lock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
      if ( v8 )
        std::_Throw_C_error(v8);
      v10 = qword_18098F188;
      wil::details::ResetEvent(StartupAppMonitor::s_showNotificationMapUpdateEvent, v9);
      _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
      if ( !v10 && !WaitForMultipleObjects(v6 - v7, v7, 0, 0xFFFFFFFF) )
        break;
      if ( (unsigned __int8)wil::handle_wait(*v4, (void *)0x2710) )
        break;
      std::chrono::steady_clock::now(&v83);
      v84[2] = &StartupAppMonitor::s_showNotificationMapMutex;
      v12 = _Mtx_lock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
      if ( v12 )
        std::_Throw_C_error(v12);
      v74[0] = 0LL;
      v74[1] = 0LL;
      std::list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>::_Alloc_sentinel_and_proxy(v74);
      v13 = *(_QWORD *)StartupAppMonitor::s_showNotificationMap;
      v70 = *(wil::details **)StartupAppMonitor::s_showNotificationMap;
      while ( !*(_BYTE *)(v13 + 25) )
      {
        v14 = v13 + 32;
        std::wstring::wstring(v105, v13 + 32);
        STARTUPAPPINFO::STARTUPAPPINFO((STARTUPAPPINFO *)v106, (const struct STARTUPAPPINFO *)(v14 + 32));
        STARTUPAPPINFO::STARTUPAPPINFO((STARTUPAPPINFO *)&v85, (const struct STARTUPAPPINFO *)v106);
        if ( v83 - v95 >= 10000000000LL )
        {
          v15 = (const WCHAR *)lpValueName;
          if ( v92 >= 8 )
            v15 = lpValueName[0];
          Value = RegQueryValueExW(hKey, v15, 0LL, 0LL, 0LL, 0LL);
          if ( Value == 2 )
          {
            if ( (unsigned int)(v94 - 3) <= 1 )
            {
              v43 = v93;
              if ( v93[3] >= 8uLL )
                v43 = (_QWORD *)v93[0];
              v84[0] = v43;
              v84[1] = (void *)v93[2];
              std::wstring::wstring(&v103, v84);
              v2 |= 3u;
              v72 = v2;
              if ( std::filesystem::exists((std::filesystem *)&v103, v44) )
              {
                std::wstring::wstring(lpData, (__int64)&v103);
                v2 |= 4u;
                v72 = v2;
                StartupNotification::GetFileDescription(v100, lpData);
                std::wstring::_Tidy_deallocate((__int64)lpData);
                if ( v101 )
                {
                  *(_DWORD *)Data = v94;
                  v45 = (const WCHAR *)lpValueName;
                  if ( v92 >= 8 )
                    v45 = lpValueName[0];
                  v46 = RegSetValueExW(hKey, v45, 0, 4u, Data, 4u);
                  if ( v46 )
                    wil::details::in1diag3::Throw_Win32(
                      retaddr,
                      251LL,
                      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                      (const char *)v46,
                      phkResultc);
                  std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)v74, (__int64)v74[0], (__int64)v89);
                  v47 = (const unsigned __int16 *)v89;
                  if ( v90 >= 8 )
                    v47 = v89[0];
                  v48 = (const unsigned __int16 *)v96;
                  if ( v97 >= 8 )
                    v48 = v96[0];
                  if ( StartupAppMonitor::IsStartupAppEnabled(v85, v48, v47) )
                  {
                    v50 = (const unsigned __int16 *)lpValueName;
                    if ( v92 >= 8 )
                      v50 = lpValueName[0];
                    v51 = (const unsigned __int16 *)v100;
                    if ( v102 >= 8 )
                      v51 = v100[0];
                    StartupNotification::ShowStartupAppNotification(v51, v50, v49);
                  }
                }
                std::wstring::_Tidy_deallocate((__int64)v100);
              }
              else
              {
                std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)v74, (__int64)v74[0], (__int64)v89);
              }
              std::wstring::_Tidy_deallocate((__int64)&v103);
            }
            else
            {
              v75 = 0LL;
              v17 = lpSubKey;
              if ( v88 >= 8 )
                v17 = (LPCWSTR *)lpSubKey[0];
              if ( v87 >= 0x39 )
              {
                for ( i = (char *)v17; ; i = v21 + 2 )
                {
                  v19 = ((char *)v17 + 2 * v87 - 112 - i) >> 1;
                  v20 = 0LL;
                  if ( v19 )
                  {
                    while ( *(_WORD *)i != 83 )
                    {
                      if ( v19 == 1 )
                        goto LABEL_36;
                      --v19;
                      i += 2;
                    }
                    v20 = i;
                  }
LABEL_36:
                  v21 = v20;
                  if ( !v20 )
                    break;
                  v22 = 57LL;
                  v23 = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run";
                  if ( *(_WORD *)v21 >= 0x53u )
                  {
                    v24 = *(_WORD *)v21 <= 0x53u;
                    while ( v24 )
                    {
                      if ( v22 == 1 )
                      {
                        v26 = (v21 - (char *)v17) >> 1;
                        goto LABEL_45;
                      }
                      --v22;
                      v25 = *(const wchar_t *)((char *)++v23
                                             + v21
                                             - (char *)L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run");
                      v24 = v25 <= *v23;
                      if ( v25 < *v23 )
                        break;
                    }
                  }
                }
              }
              v26 = -1LL;
LABEL_45:
              v75 = 0LL;
              v27 = (const WCHAR *)lpSubKey;
              if ( v88 >= 8 )
                v27 = lpSubKey[0];
              v28 = RegCreateKeyExW(v85, v27, 0, 0LL, 0, v26 != 0 ? 281 : 537, 0LL, &v75, 0LL);
              if ( v28 )
                wil::details::in1diag3::Throw_Win32(
                  retaddr,
                  271LL,
                  (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                  (const char *)v28,
                  phkResulta);
              cbData = 0;
              v29 = (const WCHAR *)v89;
              if ( v90 >= 8 )
                v29 = v89[0];
              v30 = RegQueryValueExW(v75, v29, 0LL, 0LL, 0LL, &cbData);
              if ( v30 )
              {
                if ( v30 == 2 )
                  std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)v74, (__int64)v74[0], (__int64)v89);
              }
              else
              {
                Type = 0;
                std::wstring::wstring((__int64)lpData, (unsigned __int64)cbData >> 1, 0);
                v31 = (BYTE *)lpData;
                if ( *((_QWORD *)&v99 + 1) >= 8uLL )
                  v31 = lpData[0];
                v32 = (const WCHAR *)v89;
                if ( v90 >= 8 )
                  v32 = v89[0];
                if ( !RegQueryValueExW(v75, v32, 0LL, &Type, v31, &cbData) && Type - 1 <= 1 )
                {
                  if ( Type == 2 )
                  {
                    v33 = lpData;
                    if ( *((_QWORD *)&v99 + 1) >= 8uLL )
                      v33 = (LPBYTE *)lpData[0];
                    wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)&v103, (__int64)v33);
                    v34 = *(_OWORD *)lpData;
                    v35 = v99;
                    *(_OWORD *)lpData = v103;
                    v99 = v104;
                    v103 = v34;
                    v104 = v35;
                    std::wstring::_Tidy_deallocate((__int64)&v103);
                  }
                  StartupNotification::GetFileDescription(v100, lpData);
                  if ( v101 )
                  {
                    *(_DWORD *)Data = v94;
                    v36 = (const WCHAR *)lpValueName;
                    if ( v92 >= 8 )
                      v36 = lpValueName[0];
                    v37 = RegSetValueExW(hKey, v36, 0, 4u, Data, 4u);
                    if ( v37 )
                      wil::details::in1diag3::Throw_Win32(
                        retaddr,
                        297LL,
                        (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                        (const char *)v37,
                        phkResultb);
                    std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)v74, (__int64)v74[0], (__int64)v89);
                    v38 = (const unsigned __int16 *)v89;
                    if ( v90 >= 8 )
                      v38 = v89[0];
                    v39 = (const unsigned __int16 *)v96;
                    if ( v97 >= 8 )
                      v39 = v96[0];
                    if ( StartupAppMonitor::IsStartupAppEnabled(v85, v39, v38) )
                    {
                      v41 = (const unsigned __int16 *)lpValueName;
                      if ( v92 >= 8 )
                        v41 = lpValueName[0];
                      v42 = (const unsigned __int16 *)v100;
                      if ( v102 >= 8 )
                        v42 = v100[0];
                      StartupNotification::ShowStartupAppNotification(v42, v41, v40);
                    }
                  }
                  std::wstring::_Tidy_deallocate((__int64)v100);
                }
                std::wstring::_Tidy_deallocate((__int64)lpData);
              }
              if ( v75 )
                RegCloseKey(v75);
            }
          }
          else if ( !Value )
          {
            std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)v74, (__int64)v74[0], (__int64)v89);
          }
        }
        STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v85);
        STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)v106);
        std::wstring::_Tidy_deallocate((__int64)v105);
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
          (__int64 *)&v70,
          v52,
          v53,
          v54);
        v13 = (__int64)v70;
      }
      v55 = (_QWORD **)v74[0];
      v56 = *(_QWORD **)v74[0];
      v57 = v74[0];
      while ( v56 != v57 )
      {
        std::wstring::wstring(v100, (__int64)(v56 + 2));
        std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Eqrange<std::wstring>(
          v58,
          (__int64 *)&v81,
          (char *)v100);
        v63 = v81;
        v70 = v81;
        while ( v63 != v82 )
        {
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
            (__int64 *)&v70,
            v59,
            v61,
            v62);
          v63 = v70;
        }
        std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Erase_unchecked(
          v60,
          v81,
          v82);
        std::wstring::_Tidy_deallocate((__int64)v100);
        v56 = (_QWORD *)*v56;
        v55 = (_QWORD **)v74[0];
      }
      *v55[1] = 0LL;
      v64 = *v55;
      if ( *v55 )
      {
        do
        {
          v65 = (_QWORD *)*v64;
          std::wstring::_Tidy_deallocate((__int64)(v64 + 2));
          std::_Deallocate<16,0>(v64, 0x30uLL);
          v64 = v65;
        }
        while ( v65 );
      }
      std::_Deallocate<16,0>(v74[0], 0x30uLL);
      _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
      v4 = v80;
    }
    if ( v7 )
      std::_Deallocate<16,0>(v7, ((char *)v79 - (char *)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( hKey )
      RegCloseKey(hKey);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x147,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
      v11);
  }
}
