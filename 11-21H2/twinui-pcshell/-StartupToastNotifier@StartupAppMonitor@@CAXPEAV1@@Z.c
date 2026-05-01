/*
 * XREFs of ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180580BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180062538 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1801710A8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x180239440 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x180239484 (-_Alloc_sentinel_and_proxy@-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18042F274 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180464774 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180575AD0 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18057DD48 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     ??$_Emplace_reallocate@PEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAAPEAPEAXQEAPEAX$$QEAPEAX@Z @ 0x18057DEC4 (--$_Emplace_reallocate@PEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAAPEAPEAXQEAPEAX$$QEAPEA.c)
 *     ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18057E000 (--$_Eqrange@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trai.c)
 *     ??0STARTUPAPPINFO@@QEAA@AEBU0@@Z @ 0x18057E6C0 (--0STARTUPAPPINFO@@QEAA@AEBU0@@Z.c)
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x18057FCB4 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x180581A20 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1805824B4 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1805863A4 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180586ECC (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall StartupAppMonitor::StartupToastNotifier(struct StartupAppMonitor *a1)
{
  struct StartupAppMonitor *v1; // rdi
  int v2; // r15d
  unsigned int v3; // eax
  HANDLE *v4; // r14
  HANDLE *v5; // r14
  HANDLE *v6; // r12
  int v7; // eax
  void *v8; // rdx
  __int64 v9; // rbx
  const char *v10; // r9
  const char *v11; // r9
  int v12; // eax
  wil::details *v13; // rax
  char *v14; // rbx
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
  _QWORD *v43; // rdx
  const struct std::filesystem::path *v44; // rdx
  const WCHAR *v45; // rdx
  unsigned int v46; // eax
  const unsigned __int16 *v47; // r8
  const unsigned __int16 *v48; // rdx
  bool v49; // r8
  const unsigned __int16 *v50; // rdx
  const unsigned __int16 *v51; // rcx
  _QWORD **v52; // rcx
  _QWORD *v53; // rbx
  _QWORD *v54; // rdi
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rdi
  _QWORD *v59; // rbx
  unsigned int phkResult; // [rsp+20h] [rbp-2F8h]
  unsigned int phkResulta; // [rsp+20h] [rbp-2F8h]
  unsigned int phkResultb; // [rsp+20h] [rbp-2F8h]
  unsigned int phkResultc; // [rsp+20h] [rbp-2F8h]
  wil::details *v64; // [rsp+50h] [rbp-2C8h] BYREF
  DWORD cbData; // [rsp+58h] [rbp-2C0h] BYREF
  int v66; // [rsp+5Ch] [rbp-2BCh]
  BYTE Data[8]; // [rsp+60h] [rbp-2B8h] BYREF
  void *v68[2]; // [rsp+68h] [rbp-2B0h] BYREF
  HKEY v69; // [rsp+78h] [rbp-2A0h] BYREF
  DWORD Type; // [rsp+80h] [rbp-298h] BYREF
  HKEY hKey; // [rsp+88h] [rbp-290h] BYREF
  HANDLE *lpHandles[2]; // [rsp+90h] [rbp-288h] BYREF
  HANDLE *v73; // [rsp+A0h] [rbp-278h]
  struct StartupAppMonitor *v74; // [rsp+A8h] [rbp-270h]
  wil::details *v75; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v76; // [rsp+B8h] [rbp-260h]
  __int64 v77; // [rsp+C0h] [rbp-258h] BYREF
  struct StartupAppMonitor *v78; // [rsp+C8h] [rbp-250h]
  void *v79; // [rsp+D0h] [rbp-248h]
  HKEY v80; // [rsp+E0h] [rbp-238h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+E8h] [rbp-230h] BYREF
  unsigned __int64 v82; // [rsp+F8h] [rbp-220h]
  unsigned __int64 v83; // [rsp+100h] [rbp-218h]
  LPCWSTR v84[3]; // [rsp+108h] [rbp-210h] BYREF
  unsigned __int64 v85; // [rsp+120h] [rbp-1F8h]
  LPCWSTR lpValueName[3]; // [rsp+128h] [rbp-1F0h] BYREF
  unsigned __int64 v87; // [rsp+140h] [rbp-1D8h]
  _QWORD v88[4]; // [rsp+148h] [rbp-1D0h] BYREF
  int v89; // [rsp+168h] [rbp-1B0h]
  __int64 v90; // [rsp+170h] [rbp-1A8h]
  unsigned __int16 *v91[3]; // [rsp+178h] [rbp-1A0h] BYREF
  unsigned __int64 v92; // [rsp+190h] [rbp-188h]
  LPBYTE lpData[2]; // [rsp+1A0h] [rbp-178h] BYREF
  __int128 v94; // [rsp+1B0h] [rbp-168h]
  unsigned __int16 *v95[2]; // [rsp+1C0h] [rbp-158h] BYREF
  __int64 v96; // [rsp+1D0h] [rbp-148h]
  unsigned __int64 v97; // [rsp+1D8h] [rbp-140h]
  __int128 v98; // [rsp+1E0h] [rbp-138h] BYREF
  __int128 v99; // [rsp+1F0h] [rbp-128h]
  _BYTE v100[32]; // [rsp+200h] [rbp-118h] BYREF
  _BYTE v101[192]; // [rsp+220h] [rbp-F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+0h]

  v1 = a1;
  v74 = a1;
  v78 = a1;
  v2 = 0;
  v66 = 0;
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
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        195LL,
        (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
        (const char *)v3,
        phkResult);
    *(_OWORD *)lpHandles = 0LL;
    v73 = 0LL;
    v64 = (wil::details *)*((_QWORD *)v1 + 22);
    std::vector<void *>::_Emplace_reallocate<void *>((const void **)lpHandles, 0LL, &v64);
    v64 = StartupAppMonitor::s_showNotificationMapUpdateEvent;
    v4 = lpHandles[1];
    if ( lpHandles[1] == v73 )
    {
      std::vector<void *>::_Emplace_reallocate<void *>((const void **)lpHandles, (_BYTE *)lpHandles[1], &v64);
LABEL_7:
      v5 = lpHandles[1];
    }
    else
    {
      *lpHandles[1] = StartupAppMonitor::s_showNotificationMapUpdateEvent;
      v5 = v4 + 1;
      lpHandles[1] = v5;
    }
    v6 = lpHandles[0];
    try
    {
      while ( 1 )
      {
        v7 = _Mtx_lock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
        if ( v7 )
          std::_Throw_C_error(v7);
        v9 = qword_1807B4AF8;
        wil::details::ResetEvent(StartupAppMonitor::s_showNotificationMapUpdateEvent, v8);
        _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
        if ( !v9 && !WaitForMultipleObjects(v5 - v6, v6, 0, 0xFFFFFFFF) )
          break;
        if ( (unsigned __int8)wil::handle_wait(*((wil **)v1 + 22), (void *)0x2710) )
          break;
        std::chrono::steady_clock::now(&v77);
        v79 = &StartupAppMonitor::s_showNotificationMapMutex;
        v12 = _Mtx_lock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
        if ( v12 )
          std::_Throw_C_error(v12);
        v68[0] = 0LL;
        v68[1] = 0LL;
        std::list<std::wstring>::_Alloc_sentinel_and_proxy(v68);
        v13 = *(wil::details **)StartupAppMonitor::s_showNotificationMap;
        v64 = *(wil::details **)StartupAppMonitor::s_showNotificationMap;
        while ( !*((_BYTE *)v13 + 25) )
        {
          v14 = (char *)v13 + 32;
          std::wstring::wstring((__int64)v100, (__int64)v13 + 32);
          STARTUPAPPINFO::STARTUPAPPINFO((STARTUPAPPINFO *)v101, (const struct STARTUPAPPINFO *)(v14 + 32));
          STARTUPAPPINFO::STARTUPAPPINFO((STARTUPAPPINFO *)&v80, (const struct STARTUPAPPINFO *)v101);
          if ( v77 - v90 >= 10000000000LL )
          {
            v15 = (const WCHAR *)lpValueName;
            if ( v87 >= 8 )
              v15 = lpValueName[0];
            Value = RegQueryValueExW(hKey, v15, 0LL, 0LL, 0LL, 0LL);
            if ( Value == 2 )
            {
              if ( (unsigned int)(v89 - 3) <= 1 )
              {
                v69 = (HKEY)lpData;
                v43 = v88;
                if ( v88[3] >= 8uLL )
                  v43 = (_QWORD *)v88[0];
                *(_QWORD *)&v94 = 0LL;
                *((_QWORD *)&v94 + 1) = 7LL;
                LOWORD(lpData[0]) = 0;
                std::wstring::assign((char *)lpData, v43, v88[2]);
                v2 |= 3u;
                v66 = v2;
                if ( std::filesystem::exists((std::filesystem *)lpData, v44) )
                {
                  std::wstring::wstring((__int64)&v98, (__int64)lpData);
                  v2 |= 4u;
                  v66 = v2;
                  StartupNotification::GetFileDescription(v95, &v98);
                  std::wstring::_Tidy_deallocate((__int64)&v98);
                  if ( v96 )
                  {
                    *(_DWORD *)Data = v89;
                    v45 = (const WCHAR *)lpValueName;
                    if ( v87 >= 8 )
                      v45 = lpValueName[0];
                    v46 = RegSetValueExW(hKey, v45, 0, 4u, Data, 4u);
                    if ( v46 )
                      wil::details::in1diag3::_Throw_Win32(
                        retaddr,
                        251LL,
                        (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                        (const char *)v46,
                        phkResultc);
                    std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)v68, (__int64)v68[0], (__int64)v84);
                    v47 = (const unsigned __int16 *)v84;
                    if ( v85 >= 8 )
                      v47 = v84[0];
                    v48 = (const unsigned __int16 *)v91;
                    if ( v92 >= 8 )
                      v48 = v91[0];
                    if ( StartupAppMonitor::IsStartupAppEnabled(v80, v48, v47) )
                    {
                      v50 = (const unsigned __int16 *)lpValueName;
                      if ( v87 >= 8 )
                        v50 = lpValueName[0];
                      v51 = (const unsigned __int16 *)v95;
                      if ( v97 >= 8 )
                        v51 = v95[0];
                      StartupNotification::ShowStartupAppNotification(v51, v50, v49);
                    }
                  }
                  std::wstring::_Tidy_deallocate((__int64)v95);
                }
                else
                {
                  std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)v68, (__int64)v68[0], (__int64)v84);
                }
                std::wstring::_Tidy_deallocate((__int64)lpData);
              }
              else
              {
                v69 = 0LL;
                v17 = lpSubKey;
                if ( v83 >= 8 )
                  v17 = (LPCWSTR *)lpSubKey[0];
                if ( v82 >= 0x39 )
                {
                  for ( i = (char *)v17; ; i = v21 + 2 )
                  {
                    v19 = ((char *)v17 + 2 * v82 - 112 - i) >> 1;
                    v20 = 0LL;
                    if ( v19 )
                    {
                      while ( *(_WORD *)i != 83 )
                      {
                        if ( v19 == 1 )
                          goto LABEL_37;
                        --v19;
                        i += 2;
                      }
                      v20 = i;
                    }
LABEL_37:
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
                          goto LABEL_46;
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
LABEL_46:
                v69 = 0LL;
                v27 = (const WCHAR *)lpSubKey;
                if ( v83 >= 8 )
                  v27 = lpSubKey[0];
                v28 = RegCreateKeyExW(v80, v27, 0, 0LL, 0, v26 != 0 ? 281 : 537, 0LL, &v69, 0LL);
                if ( v28 )
                  wil::details::in1diag3::_Throw_Win32(
                    retaddr,
                    271LL,
                    (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                    (const char *)v28,
                    phkResulta);
                cbData = 0;
                v29 = (const WCHAR *)v84;
                if ( v85 >= 8 )
                  v29 = v84[0];
                v30 = RegQueryValueExW(v69, v29, 0LL, 0LL, 0LL, &cbData);
                if ( v30 )
                {
                  if ( v30 == 2 )
                    std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)v68, (__int64)v68[0], (__int64)v84);
                }
                else
                {
                  Type = 0;
                  std::wstring::wstring((__int64)lpData, (unsigned __int64)cbData >> 1);
                  v31 = (BYTE *)lpData;
                  if ( *((_QWORD *)&v94 + 1) >= 8uLL )
                    v31 = lpData[0];
                  v32 = (const WCHAR *)v84;
                  if ( v85 >= 8 )
                    v32 = v84[0];
                  if ( !RegQueryValueExW(v69, v32, 0LL, &Type, v31, &cbData) && Type - 1 <= 1 )
                  {
                    if ( Type == 2 )
                    {
                      v33 = lpData;
                      if ( *((_QWORD *)&v94 + 1) >= 8uLL )
                        v33 = (LPBYTE *)lpData[0];
                      wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)&v98, (__int64)v33);
                      v34 = *(_OWORD *)lpData;
                      v35 = v94;
                      *(_OWORD *)lpData = v98;
                      v94 = v99;
                      v98 = v34;
                      v99 = v35;
                      std::wstring::_Tidy_deallocate((__int64)&v98);
                    }
                    StartupNotification::GetFileDescription(v95, lpData);
                    if ( v96 )
                    {
                      *(_DWORD *)Data = v89;
                      v36 = (const WCHAR *)lpValueName;
                      if ( v87 >= 8 )
                        v36 = lpValueName[0];
                      v37 = RegSetValueExW(hKey, v36, 0, 4u, Data, 4u);
                      if ( v37 )
                        wil::details::in1diag3::_Throw_Win32(
                          retaddr,
                          297LL,
                          (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                          (const char *)v37,
                          phkResultb);
                      std::list<std::wstring>::_Emplace<std::wstring const &>(
                        (__int64)v68,
                        (__int64)v68[0],
                        (__int64)v84);
                      v38 = (const unsigned __int16 *)v84;
                      if ( v85 >= 8 )
                        v38 = v84[0];
                      v39 = (const unsigned __int16 *)v91;
                      if ( v92 >= 8 )
                        v39 = v91[0];
                      if ( StartupAppMonitor::IsStartupAppEnabled(v80, v39, v38) )
                      {
                        v41 = (const unsigned __int16 *)lpValueName;
                        if ( v87 >= 8 )
                          v41 = lpValueName[0];
                        v42 = (const unsigned __int16 *)v95;
                        if ( v97 >= 8 )
                          v42 = v95[0];
                        StartupNotification::ShowStartupAppNotification(v42, v41, v40);
                      }
                    }
                    std::wstring::_Tidy_deallocate((__int64)v95);
                  }
                  std::wstring::_Tidy_deallocate((__int64)lpData);
                }
                wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v69);
              }
            }
            else if ( !Value )
            {
              std::list<std::wstring>::_Emplace<std::wstring const &>((__int64)v68, (__int64)v68[0], (__int64)v84);
            }
          }
          STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v80);
          STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)v101);
          std::wstring::_Tidy_deallocate((__int64)v100);
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>,std::_Iterator_base0>::operator++(&v64);
          v13 = v64;
        }
        v52 = (_QWORD **)v68[0];
        v53 = *(_QWORD **)v68[0];
        v54 = v68[0];
        while ( v53 != v54 )
        {
          std::wstring::wstring((__int64)v95, (__int64)(v53 + 2));
          std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Eqrange<std::wstring>(
            v55,
            (__int64 *)&v75,
            v95);
          v57 = (__int64)v75;
          v64 = v75;
          while ( v57 != v76 )
          {
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>,std::_Iterator_base0>::operator++(&v64);
            v57 = (__int64)v64;
          }
          std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Erase_unchecked(
            v56,
            v75,
            v76);
          std::wstring::_Tidy_deallocate((__int64)v95);
          v53 = (_QWORD *)*v53;
          v52 = (_QWORD **)v68[0];
        }
        *v52[1] = 0LL;
        v58 = *v52;
        if ( *v52 )
        {
          do
          {
            v59 = (_QWORD *)*v58;
            std::wstring::_Tidy_deallocate((__int64)(v58 + 2));
            std::_Deallocate<16,0>(v58, 0x30uLL);
            v58 = v59;
          }
          while ( v59 );
        }
        std::_Deallocate<16,0>(v68[0], 0x30uLL);
        _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
        v1 = v74;
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x145,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
        v10);
      v2 = v66;
      v1 = v78;
      v74 = v78;
      goto LABEL_7;
    }
    if ( v6 )
      std::_Deallocate<16,0>(v6, ((char *)v73 - (char *)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
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
