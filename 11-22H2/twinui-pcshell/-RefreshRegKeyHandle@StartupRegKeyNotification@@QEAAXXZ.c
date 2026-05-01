/*
 * XREFs of ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x180644984
 * Callers:
 *     ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18063ECFC (-ParentRegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKin.c)
 * Callees:
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall StartupRegKeyNotification::RefreshRegKeyHandle(StartupRegKeyNotification *this)
{
  char *v1; // rsi
  char *v3; // rdx
  unsigned __int64 v4; // rax
  char *v5; // rdi
  char *v6; // r11
  char *v7; // rcx
  __int64 v8; // rax
  char *v9; // rdi
  unsigned __int16 v10; // ax
  __int64 v11; // r9
  const wchar_t *v12; // rcx
  bool v13; // cc
  wchar_t v14; // ax
  __int64 v15; // rdi
  HKEY v16; // rbp
  DWORD LastError; // ebx
  unsigned int v18; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (char *)this + 80;
  v3 = (char *)this + 80;
  v4 = *((_QWORD *)this + 12);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v3 = *(char **)v1;
  if ( v4 >= 0x39 )
  {
    v5 = v3;
    v6 = &v3[2 * v4 - 112];
    while ( 1 )
    {
      v7 = 0LL;
      v8 = (v6 - v5) >> 1;
      if ( v8 )
      {
        while ( *(_WORD *)v5 != 83 )
        {
          if ( v8 == 1 )
            goto LABEL_11;
          --v8;
          v5 += 2;
        }
        v7 = v5;
      }
LABEL_11:
      v9 = v7;
      if ( !v7 )
        break;
      v10 = *(_WORD *)v7;
      v11 = 57LL;
      v12 = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run";
      if ( v10 >= 0x53u )
      {
        v13 = v10 <= 0x53u;
        while ( v13 )
        {
          if ( v11 == 1 )
          {
            v15 = (v9 - v3) >> 1;
            goto LABEL_20;
          }
          ++v12;
          --v11;
          v14 = *(const wchar_t *)((char *)v12
                                 + v9
                                 - (char *)L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run");
          v13 = v14 <= *v12;
          if ( v14 < *v12 )
            break;
        }
      }
      v5 = v9 + 2;
    }
  }
  v15 = -1LL;
LABEL_20:
  v16 = (HKEY)*((_QWORD *)this + 8);
  if ( v16 )
  {
    LastError = GetLastError();
    RegCloseKey(v16);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 8) = 0LL;
  if ( *((_QWORD *)v1 + 3) >= 8uLL )
    v1 = *(char **)v1;
  v18 = RegOpenKeyExW(*((HKEY *)this + 9), (LPCWSTR)v1, 0, v15 != 0 ? 281 : 537, (PHKEY)this + 8);
  if ( v18 )
    wil::details::in1diag3::Throw_Win32(
      retaddr,
      281LL,
      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v18,
      phkResult);
}
