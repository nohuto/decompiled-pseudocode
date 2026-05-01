/*
 * XREFs of ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1805855A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x180239440 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x18057E5B4 (--0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x1805817BC (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded(HKEY *this, char a2)
{
  bool v4; // zf
  __int64 v5; // rax
  DWORD i; // edi
  BYTE *v7; // rax
  WCHAR *v8; // r8
  LPWSTR *v9; // rdx
  unsigned __int64 v10; // r8
  const WCHAR *v11; // rdx
  const WCHAR *v12; // rdx
  unsigned int v13; // eax
  const WCHAR *v14; // rdx
  unsigned int v15; // eax
  const WCHAR *v16; // rdx
  STARTUPAPPINFO *v17; // rax
  int updated; // eax
  const WCHAR *v19; // rdx
  unsigned int v20; // eax
  unsigned int lpcSubKeys; // [rsp+28h] [rbp-E0h]
  int lpcSubKeysa; // [rsp+28h] [rbp-E0h]
  unsigned int lpcSubKeysb; // [rsp+28h] [rbp-E0h]
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-A0h] BYREF
  DWORD Type; // [rsp+6Ch] [rbp-9Ch] BYREF
  DWORD cchValueName; // [rsp+70h] [rbp-98h] BYREF
  DWORD cbMaxValueLen; // [rsp+74h] [rbp-94h] BYREF
  DWORD cbData; // [rsp+78h] [rbp-90h] BYREF
  BYTE Data[4]; // [rsp+7Ch] [rbp-8Ch] BYREF
  BYTE v30[8]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v31[192]; // [rsp+88h] [rbp-80h] BYREF
  HKEY v32; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v33[32]; // [rsp+150h] [rbp+48h] BYREF
  __int128 v34; // [rsp+170h] [rbp+68h]
  __int128 v35; // [rsp+180h] [rbp+78h]
  __int128 v36; // [rsp+190h] [rbp+88h]
  __int128 v37; // [rsp+1A0h] [rbp+98h]
  __int128 v38; // [rsp+1B0h] [rbp+A8h]
  __int128 v39; // [rsp+1C0h] [rbp+B8h]
  int v40; // [rsp+1D0h] [rbp+C8h]
  __int64 v41; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v42[40]; // [rsp+1E0h] [rbp+D8h] BYREF
  LPWSTR lpValueName[2]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v44; // [rsp+218h] [rbp+110h]
  unsigned __int64 v45; // [rsp+220h] [rbp+118h]
  LPCWSTR Src[2]; // [rsp+228h] [rbp+120h] BYREF
  __int128 v47; // [rsp+238h] [rbp+130h]
  LPBYTE lpData[2]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v49; // [rsp+258h] [rbp+150h]
  unsigned __int64 v50; // [rsp+260h] [rbp+158h]
  __int128 v51; // [rsp+268h] [rbp+160h] BYREF
  __int128 v52; // [rsp+278h] [rbp+170h]
  __int128 v53; // [rsp+288h] [rbp+180h] BYREF
  __int128 v54; // [rsp+298h] [rbp+190h]
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  if ( RegQueryInfoKeyW(this[8], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, &cbMaxValueLen, 0LL, 0LL) >= 0 )
  {
    v4 = cbMaxValueNameLen == -1;
    v5 = cbMaxValueNameLen + 1;
    cbMaxValueNameLen = v5;
    cchValueName = v5;
    v44 = 0LL;
    v45 = 7LL;
    LOWORD(lpValueName[0]) = 0;
    if ( v4 )
    {
      v44 = (unsigned int)v5;
      *((_WORD *)lpValueName + v5) = 0;
    }
    else
    {
      std::wstring::append((wchar_t *)lpValueName, (unsigned int)v5, 0);
    }
    cbData = cbMaxValueLen;
    v49 = 0LL;
    v50 = 7LL;
    LOWORD(lpData[0]) = 0;
    if ( (unsigned __int64)cbMaxValueLen >> 1 )
    {
      std::wstring::append((wchar_t *)lpData, (unsigned __int64)cbMaxValueLen >> 1, 0);
    }
    else
    {
      v49 = 0LL;
      LOWORD(lpData[0]) = 0;
    }
    Type = 0;
    for ( i = 0; ; ++i )
    {
      v7 = (BYTE *)lpData;
      if ( v50 >= 8 )
        v7 = lpData[0];
      v8 = (WCHAR *)lpValueName;
      if ( v45 >= 8 )
        v8 = lpValueName[0];
      if ( RegEnumValueW(this[8], i, v8, &cchValueName, 0LL, &Type, v7, &cbData) )
        break;
      if ( Type - 1 <= 1 )
      {
        std::wstring::wstring(Src, L"StartupTNoti");
        v9 = lpValueName;
        if ( v45 >= 8 )
          v9 = (LPWSTR *)lpValueName[0];
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)v9 + v10) );
        std::wstring::append(Src, v9, v10);
        v11 = (const WCHAR *)lpValueName;
        if ( v45 >= 8 )
          v11 = lpValueName[0];
        if ( !RegQueryValueExW(this[1], v11, 0LL, 0LL, 0LL, 0LL) )
        {
          v12 = (const WCHAR *)lpValueName;
          if ( v45 >= 8 )
            v12 = lpValueName[0];
          v13 = RegDeleteValueW(this[1], v12);
          if ( v13 )
            wil::details::in1diag3::_Log_Win32(
              retaddr,
              (void *)0xB3,
              (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
              (const char *)v13);
          *(_DWORD *)Data = *((_DWORD *)this + 14);
          v14 = (const WCHAR *)Src;
          if ( *((_QWORD *)&v47 + 1) >= 8uLL )
            v14 = Src[0];
          v15 = RegSetValueExW(this[1], v14, 0, 4u, Data, 4u);
          if ( v15 )
            wil::details::in1diag3::_Throw_Win32(
              retaddr,
              182LL,
              (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
              (const char *)v15,
              lpcSubKeys);
        }
        v16 = (const WCHAR *)Src;
        if ( *((_QWORD *)&v47 + 1) >= 8uLL )
          v16 = Src[0];
        if ( RegQueryValueExW(this[1], v16, 0LL, 0LL, 0LL, 0LL) == 2 )
        {
          if ( a2 )
          {
            std::wstring::wstring((__int64)&v53, (__int64)lpValueName);
            std::wstring::wstring((__int64)&v51, (__int64)lpData);
            v32 = this[9];
            std::wstring::wstring((__int64)v33, (__int64)(this + 10));
            v34 = v53;
            v35 = v54;
            *(_QWORD *)&v54 = 0LL;
            *((_QWORD *)&v54 + 1) = 7LL;
            LOWORD(v53) = 0;
            v36 = *(_OWORD *)Src;
            v37 = v47;
            *(_QWORD *)&v47 = 0LL;
            *((_QWORD *)&v47 + 1) = 7LL;
            LOWORD(Src[0]) = 0;
            v38 = v51;
            v39 = v52;
            *(_QWORD *)&v52 = 0LL;
            *((_QWORD *)&v52 + 1) = 7LL;
            LOWORD(v51) = 0;
            v40 = *((_DWORD *)this + 14);
            std::chrono::steady_clock::now(&v41);
            std::wstring::wstring((__int64)v42, (__int64)(this + 3));
            v17 = (STARTUPAPPINFO *)STARTUPAPPINFO::STARTUPAPPINFO((__int64)v31, (__int64)&v32);
            updated = StartupAppMonitor::UpdateNotificationMap(v17);
            if ( updated < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xC2,
                (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
                (const char *)(unsigned int)updated,
                lpcSubKeysa);
            STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v32);
            std::wstring::_Tidy_deallocate((__int64)&v51);
            std::wstring::_Tidy_deallocate((__int64)&v53);
          }
          else
          {
            *(_DWORD *)v30 = *((_DWORD *)this + 14);
            v19 = (const WCHAR *)Src;
            if ( *((_QWORD *)&v47 + 1) >= 8uLL )
              v19 = Src[0];
            v20 = RegSetValueExW(this[1], v19, 0, 4u, v30, 4u);
            if ( v20 )
              wil::details::in1diag3::_Throw_Win32(
                retaddr,
                202LL,
                (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
                (const char *)v20,
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
