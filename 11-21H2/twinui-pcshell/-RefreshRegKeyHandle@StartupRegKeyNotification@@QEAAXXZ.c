/*
 * XREFs of ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x180586BEC
 * Callers:
 *     ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18057FDC8 (-ParentRegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKin.c)
 * Callees:
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall StartupRegKeyNotification::RefreshRegKeyHandle(StartupRegKeyNotification *this)
{
  char *v2; // rsi
  unsigned __int64 v3; // rax
  char *v4; // rdx
  char *v5; // r11
  char *i; // rdi
  __int64 v7; // rax
  char *v8; // rcx
  char *v9; // rdi
  __int64 v10; // r9
  const wchar_t *v11; // rcx
  bool v12; // cc
  wchar_t v13; // ax
  __int64 v14; // rdi
  HKEY v15; // rbp
  DWORD LastError; // ebx
  unsigned int v17; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (char *)this + 80;
  v3 = *((_QWORD *)this + 12);
  v4 = (char *)this + 80;
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v4 = *(char **)v2;
  if ( v3 >= 0x39 )
  {
    v5 = &v4[2 * v3 - 112];
    for ( i = v4; ; i = v9 + 2 )
    {
      v7 = (v5 - i) >> 1;
      v8 = 0LL;
      if ( v7 )
      {
        while ( *(_WORD *)i != 83 )
        {
          if ( v7 == 1 )
            goto LABEL_11;
          --v7;
          i += 2;
        }
        v8 = i;
      }
LABEL_11:
      v9 = v8;
      if ( !v8 )
        break;
      v10 = 57LL;
      v11 = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run";
      if ( *(_WORD *)v9 >= 0x53u )
      {
        v12 = *(_WORD *)v9 <= 0x53u;
        while ( v12 )
        {
          if ( v10 == 1 )
          {
            v14 = (v9 - v4) >> 1;
            goto LABEL_20;
          }
          --v10;
          v13 = *(const wchar_t *)((char *)++v11
                                 + v9
                                 - (char *)L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run");
          v12 = v13 <= *v11;
          if ( v13 < *v11 )
            break;
        }
      }
    }
  }
  v14 = -1LL;
LABEL_20:
  v15 = (HKEY)*((_QWORD *)this + 8);
  if ( v15 )
  {
    LastError = GetLastError();
    RegCloseKey(v15);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 8) = 0LL;
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(char **)v2;
  v17 = RegOpenKeyExW(*((HKEY *)this + 9), (LPCWSTR)v2, 0, v14 != 0 ? 281 : 537, (PHKEY)this + 8);
  if ( v17 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      279LL,
      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v17,
      phkResult);
}
