/*
 * XREFs of ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x18058445C
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1805803E4 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??0StartupNotification@@QEAA@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1805842F0 (--0StartupNotification@@QEAA@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall StartupRegKeyNotification::StartupRegKeyNotification(
        __int64 a1,
        __int64 a2,
        const void **a3,
        int a4,
        __int64 a5)
{
  _QWORD *v9; // rax
  HKEY *v10; // r12
  const WCHAR *v11; // rsi
  const void *v12; // rdx
  unsigned __int64 v13; // rax
  const WCHAR *v14; // rcx
  const WCHAR *v15; // r11
  const WCHAR *i; // rdi
  __int64 v17; // rax
  const WCHAR *v18; // rdx
  const WCHAR *v19; // rdi
  __int64 v20; // r9
  const wchar_t *v21; // rdx
  bool v22; // cc
  wchar_t v23; // ax
  __int64 v24; // rdi
  HKEY v25; // rbp
  DWORD LastError; // ebx
  unsigned int Key; // eax
  unsigned int v29; // [rsp+20h] [rbp-B8h]
  _QWORD v30[6]; // [rsp+60h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v30[4] = a3;
  v30[5] = a5;
  v9 = (_QWORD *)std::wstring::wstring((__int64)v30, a5);
  StartupNotification::StartupNotification(a1, v9);
  *(_QWORD *)a1 = &StartupRegKeyNotification::`vftable';
  v10 = (HKEY *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0LL;
  v11 = (const WCHAR *)(a1 + 80);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_WORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = a2;
  if ( (const void **)(a1 + 80) != a3 )
  {
    v12 = a3;
    if ( (unsigned __int64)a3[3] >= 8 )
      v12 = *a3;
    std::wstring::assign((char *)(a1 + 80), v12, (unsigned __int64)a3[2]);
  }
  *(_DWORD *)(a1 + 56) = a4;
  v13 = *(_QWORD *)(a1 + 96);
  v14 = (const WCHAR *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 104) >= 8uLL )
    v14 = *(const WCHAR **)v11;
  if ( v13 >= 0x39 )
  {
    v15 = &v14[v13 - 56];
    for ( i = v14; ; i = v19 + 1 )
    {
      v17 = v15 - i;
      v18 = 0LL;
      if ( v17 )
      {
        while ( *i != 83 )
        {
          if ( v17 == 1 )
            goto LABEL_15;
          --v17;
          ++i;
        }
        v18 = i;
      }
LABEL_15:
      v19 = v18;
      if ( !v18 )
        break;
      v20 = 57LL;
      v21 = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run";
      if ( *v19 >= 0x53u )
      {
        v22 = *v19 <= 0x53u;
        while ( v22 )
        {
          if ( v20 == 1 )
          {
            v24 = v19 - v14;
            goto LABEL_24;
          }
          --v20;
          v23 = *(const wchar_t *)((char *)++v21
                                 + (char *)v19
                                 - (char *)L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run");
          v22 = v23 <= *v21;
          if ( v23 < *v21 )
            break;
        }
      }
    }
  }
  v24 = -1LL;
LABEL_24:
  v25 = *v10;
  if ( *v10 )
  {
    LastError = GetLastError();
    RegCloseKey(v25);
    SetLastError(LastError);
  }
  *v10 = 0LL;
  if ( *(_QWORD *)(a1 + 104) >= 8uLL )
    v11 = *(const WCHAR **)v11;
  Key = RegCreateKeyExW(*(HKEY *)(a1 + 72), v11, 0, 0LL, 0, v24 != 0 ? 281 : 537, 0LL, (PHKEY)(a1 + 64), 0LL);
  if ( Key )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      137LL,
      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)Key,
      v29);
  std::wstring::_Tidy_deallocate((__int64)a3);
  std::wstring::_Tidy_deallocate(a5);
  return a1;
}
