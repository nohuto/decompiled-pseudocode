/*
 * XREFs of ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x180643290
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x1802E8832 (--0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x1802E8A2C (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x180640828 (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded(HKEY *this, char a2)
{
  bool v4; // zf
  DWORD i; // edi
  BYTE *v6; // rax
  WCHAR *v7; // r8
  LPWSTR *v8; // rdx
  unsigned __int64 v9; // r8
  const WCHAR *v10; // rdx
  const WCHAR *v11; // rdx
  unsigned int v12; // eax
  const WCHAR *v13; // rdx
  unsigned int v14; // eax
  const WCHAR *v15; // rdx
  STARTUPAPPINFO *v16; // rax
  int updated; // eax
  const WCHAR *v18; // rdx
  unsigned int v19; // eax
  unsigned int lpcSubKeys; // [rsp+28h] [rbp-E0h]
  int lpcSubKeysa; // [rsp+28h] [rbp-E0h]
  unsigned int lpcSubKeysb; // [rsp+28h] [rbp-E0h]
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-A0h] BYREF
  DWORD Type; // [rsp+6Ch] [rbp-9Ch] BYREF
  DWORD cchValueName; // [rsp+70h] [rbp-98h] BYREF
  DWORD cbMaxValueLen; // [rsp+74h] [rbp-94h] BYREF
  DWORD cbData; // [rsp+78h] [rbp-90h] BYREF
  BYTE Data[4]; // [rsp+7Ch] [rbp-8Ch] BYREF
  BYTE v29[8]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v30[192]; // [rsp+88h] [rbp-80h] BYREF
  HKEY v31; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v32[4]; // [rsp+150h] [rbp+48h] BYREF
  __int128 v33; // [rsp+170h] [rbp+68h]
  __int128 v34; // [rsp+180h] [rbp+78h]
  __int128 v35; // [rsp+190h] [rbp+88h]
  __int128 v36; // [rsp+1A0h] [rbp+98h]
  __int128 v37; // [rsp+1B0h] [rbp+A8h]
  __int128 v38; // [rsp+1C0h] [rbp+B8h]
  int v39; // [rsp+1D0h] [rbp+C8h]
  __int64 v40; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v41[5]; // [rsp+1E0h] [rbp+D8h] BYREF
  LPWSTR lpValueName[2]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v43; // [rsp+218h] [rbp+110h]
  unsigned __int64 v44; // [rsp+220h] [rbp+118h]
  LPCWSTR Src[2]; // [rsp+228h] [rbp+120h] BYREF
  __int128 v46; // [rsp+238h] [rbp+130h]
  LPBYTE lpData[2]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v48; // [rsp+258h] [rbp+150h]
  unsigned __int64 v49; // [rsp+260h] [rbp+158h]
  __int128 v50; // [rsp+268h] [rbp+160h] BYREF
  __int128 v51; // [rsp+278h] [rbp+170h]
  __int128 v52; // [rsp+288h] [rbp+180h] BYREF
  __int128 v53; // [rsp+298h] [rbp+190h]
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  if ( RegQueryInfoKeyW(this[8], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, &cbMaxValueLen, 0LL, 0LL) >= 0 )
  {
    v4 = cbMaxValueNameLen++ == -1;
    cchValueName = cbMaxValueNameLen;
    lpValueName[0] = 0LL;
    v43 = 0LL;
    v44 = 7LL;
    if ( v4 )
    {
      v43 = cbMaxValueNameLen;
      *((_WORD *)lpValueName + cbMaxValueNameLen) = 0;
    }
    else
    {
      std::wstring::append((wchar_t *)lpValueName, cbMaxValueNameLen, 0);
    }
    cbData = cbMaxValueLen;
    lpData[0] = 0LL;
    v48 = 0LL;
    v49 = 7LL;
    if ( (unsigned __int64)cbMaxValueLen >> 1 )
    {
      std::wstring::append((wchar_t *)lpData, (unsigned __int64)cbMaxValueLen >> 1, 0);
    }
    else
    {
      v48 = 0LL;
      LOWORD(lpData[0]) = 0;
    }
    Type = 0;
    for ( i = 0; ; ++i )
    {
      v6 = (BYTE *)lpData;
      if ( v49 >= 8 )
        v6 = lpData[0];
      v7 = (WCHAR *)lpValueName;
      if ( v44 >= 8 )
        v7 = lpValueName[0];
      if ( RegEnumValueW(this[8], i, v7, &cchValueName, 0LL, &Type, v6, &cbData) )
        break;
      if ( Type - 1 <= 1 )
      {
        std::wstring::wstring(Src, L"StartupTNoti");
        v8 = lpValueName;
        if ( v44 >= 8 )
          v8 = (LPWSTR *)lpValueName[0];
        v9 = -1LL;
        do
          ++v9;
        while ( *((_WORD *)v8 + v9) );
        std::wstring::append(Src, v8, v9);
        v10 = (const WCHAR *)lpValueName;
        if ( v44 >= 8 )
          v10 = lpValueName[0];
        if ( !RegQueryValueExW(this[1], v10, 0LL, 0LL, 0LL, 0LL) )
        {
          v11 = (const WCHAR *)lpValueName;
          if ( v44 >= 8 )
            v11 = lpValueName[0];
          v12 = RegDeleteValueW(this[1], v11);
          if ( v12 )
            wil::details::in1diag3::_Log_Win32(
              retaddr,
              (void *)0xB5,
              (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
              (const char *)v12);
          *(_DWORD *)Data = *((_DWORD *)this + 14);
          v13 = (const WCHAR *)Src;
          if ( *((_QWORD *)&v46 + 1) >= 8uLL )
            v13 = Src[0];
          v14 = RegSetValueExW(this[1], v13, 0, 4u, Data, 4u);
          if ( v14 )
            wil::details::in1diag3::Throw_Win32(
              retaddr,
              184LL,
              (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
              (const char *)v14,
              lpcSubKeys);
        }
        v15 = (const WCHAR *)Src;
        if ( *((_QWORD *)&v46 + 1) >= 8uLL )
          v15 = Src[0];
        if ( RegQueryValueExW(this[1], v15, 0LL, 0LL, 0LL, 0LL) == 2 )
        {
          if ( a2 )
          {
            std::wstring::wstring(&v52, (__int64)lpValueName);
            std::wstring::wstring(&v50, (__int64)lpData);
            v31 = this[9];
            std::wstring::wstring(v32, (__int64)(this + 10));
            v33 = v52;
            v34 = v53;
            *(_QWORD *)&v53 = 0LL;
            *((_QWORD *)&v53 + 1) = 7LL;
            LOWORD(v52) = 0;
            v35 = *(_OWORD *)Src;
            v36 = v46;
            *(_QWORD *)&v46 = 0LL;
            *((_QWORD *)&v46 + 1) = 7LL;
            LOWORD(Src[0]) = 0;
            v37 = v50;
            v38 = v51;
            *(_QWORD *)&v51 = 0LL;
            *((_QWORD *)&v51 + 1) = 7LL;
            LOWORD(v50) = 0;
            v39 = *((_DWORD *)this + 14);
            std::chrono::steady_clock::now(&v40);
            std::wstring::wstring(v41, (__int64)(this + 3));
            v16 = (STARTUPAPPINFO *)STARTUPAPPINFO::STARTUPAPPINFO((__int64)v30, (__int64)&v31);
            updated = StartupAppMonitor::UpdateNotificationMap(v16);
            if ( updated < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xC4,
                (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
                (const char *)(unsigned int)updated,
                lpcSubKeysa);
            STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v31);
            std::wstring::_Tidy_deallocate((__int64)&v50);
            std::wstring::_Tidy_deallocate((__int64)&v52);
          }
          else
          {
            *(_DWORD *)v29 = *((_DWORD *)this + 14);
            v18 = (const WCHAR *)Src;
            if ( *((_QWORD *)&v46 + 1) >= 8uLL )
              v18 = Src[0];
            v19 = RegSetValueExW(this[1], v18, 0, 4u, v29, 4u);
            if ( v19 )
              wil::details::in1diag3::Throw_Win32(
                retaddr,
                204LL,
                (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
                (const char *)v19,
                lpcSubKeysb);
          }
        }
        std::wstring::_Tidy_deallocate((__int64)Src);
      }
      cchValueName = cbMaxValueNameLen;
      cbData = cbMaxValueLen;
    }
    std::wstring::_Tidy_deallocate((__int64)lpData);
    std::wstring::_Tidy_deallocate((__int64)lpValueName);
  }
}
