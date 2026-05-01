/*
 * XREFs of ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180033104
 * Callers:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18003300C (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x180041FDC (-HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilCreateVolatileUserRegKey(PSID Sid, REGSAM samDesired, HKEY *a3)
{
  HKEY v5; // rdi
  signed int v6; // ebx
  WCHAR *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  WCHAR *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // r8
  WCHAR v14; // r9
  WCHAR *v15; // rax
  LSTATUS v16; // eax
  HKEY v17; // rcx
  LSTATUS v18; // eax
  HKEY v19; // rcx
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SubKey[256]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  phkResult = 0LL;
  hKey = 0LL;
  UnicodeString.Buffer = SubKey;
  v5 = 0LL;
  v6 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  if ( v6 < 0 )
    goto LABEL_32;
  v7 = SubKey;
  v8 = 254LL;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v8;
  }
  while ( v8 );
  v9 = (254 - v8) & -(__int64)(v8 != 0);
  v6 = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
  {
    v10 = &SubKey[v9];
    v11 = 254 - v9;
    if ( 254 != v9 )
    {
      v12 = 66LL;
      v13 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)v10);
      do
      {
        if ( !v12 )
          break;
        v14 = *(WCHAR *)((char *)v10 + (_QWORD)v13);
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    v6 = v11 == 0 ? 0x80000005 : 0;
    *v15 = 0;
  }
  if ( v6 < 0 )
    goto LABEL_32;
  v16 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, samDesired, 0LL, &hKey, 0LL);
  v6 = v16;
  if ( v16 > 0 )
    v6 = (unsigned __int16)v16 | 0xC0070000;
  if ( v6 < 0 )
  {
LABEL_32:
    v17 = hKey;
  }
  else
  {
    v5 = hKey;
    v17 = 0LL;
    hKey = 0LL;
    v6 = 0;
  }
  if ( v17 )
    RegCloseKey(v17);
  if ( v6 < 0 )
    goto LABEL_31;
  v18 = RegCreateKeyExW(v5, L"Volatile", 0, 0LL, 1u, samDesired, 0LL, &phkResult, 0LL);
  v6 = v18;
  if ( v18 > 0 )
    v6 = (unsigned __int16)v18 | 0xC0070000;
  if ( v6 < 0 )
  {
LABEL_31:
    v19 = phkResult;
  }
  else
  {
    v19 = 0LL;
    *a3 = phkResult;
    v6 = 0;
    phkResult = 0LL;
  }
  if ( v19 )
    RegCloseKey(v19);
  if ( v5 )
    RegCloseKey(v5);
  return (unsigned int)v6;
}
