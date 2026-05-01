/*
 * XREFs of ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x180033350
 * Callers:
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180034DB0 (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180034EA0 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180049998 (__report_rangecheckfailure.c)
 */

__int64 __fastcall HampUtilOpenApplicationHistoryKey(struct _RM_HAM_ACTIVITY_HOST *a1, char a2, HKEY *a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  WCHAR *v8; // rax
  __int64 v9; // rcx
  WCHAR *v10; // rax
  __int64 v11; // r8
  char *v12; // r9
  WCHAR v13; // dx
  LSTATUS v14; // eax
  HKEY v15; // rdi
  int v16; // r14d
  LSTATUS v17; // eax
  LSTATUS v18; // eax
  unsigned int v20; // edx
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  HKEY v23; // [rsp+60h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  WCHAR v26[136]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SubKey[256]; // [rsp+190h] [rbp+90h] BYREF

  phkResult = 0LL;
  v23 = 0LL;
  if ( a1 )
    v6 = (__int64)a1 + 488;
  else
    v6 = 552LL;
  hKey = 0LL;
  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  UnicodeString.Buffer = SubKey;
  v7 = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v6, 0);
  if ( v7 < 0 )
    goto LABEL_38;
  v8 = SubKey;
  v9 = 254LL;
  while ( *v8 )
  {
    ++v8;
    if ( !--v9 )
    {
      v7 = -1073741811;
      goto LABEL_38;
    }
  }
  v7 = 0;
  v10 = &SubKey[254 - v9];
  v11 = 66LL;
  v12 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)v10);
  while ( v11 )
  {
    v13 = *(WCHAR *)((char *)v10 + (_QWORD)v12);
    if ( !v13 )
      break;
    *v10 = v13;
    --v11;
    ++v10;
    if ( !--v9 )
    {
      --v10;
      v7 = -2147483643;
      break;
    }
  }
  *v10 = 0;
  if ( v7 < 0 )
    goto LABEL_38;
  v14 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 4u, 0LL, &hKey, 0LL);
  v7 = v14;
  if ( v14 > 0 )
    v7 = (unsigned __int16)v14 | 0xC0070000;
  if ( v7 < 0 )
  {
LABEL_38:
    if ( hKey )
      RegCloseKey(hKey);
    goto LABEL_27;
  }
  v15 = hKey;
  hKey = 0LL;
  v16 = a2 & 1;
  if ( v16 )
  {
    v17 = RegCreateKeyExW(v15, L"CommitHistory", 0, 0LL, 0, 0x20006u, 0LL, &phkResult, 0LL);
    v7 = v17;
    if ( v17 <= 0 )
      goto LABEL_19;
  }
  else
  {
    v17 = RegOpenKeyExW(v15, L"CommitHistory", 0, 0x20019u, &phkResult);
    v7 = v17;
    if ( v17 <= 0 )
      goto LABEL_19;
  }
  v7 = (unsigned __int16)v17 | 0xC0070000;
LABEL_19:
  if ( v7 >= 0 )
  {
    v21 = 131;
    PsmGetAumidFromKey((char *)a1 + 24, &v21, v26);
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 99) + 616LL) & 0x10000) != 0 )
    {
      v20 = v21;
      v26[v21 - 1] = 35;
      if ( 2 * (unsigned __int64)v20 >= 0x106 )
        _report_rangecheckfailure();
      v26[v20] = 0;
    }
    if ( v16 )
    {
      v18 = RegCreateKeyExW(phkResult, v26, 0, 0LL, 0, 0x20006u, 0LL, &v23, 0LL);
      v7 = v18;
      if ( v18 <= 0 )
        goto LABEL_23;
    }
    else
    {
      v18 = RegOpenKeyExW(phkResult, v26, 0, 0x20019u, &v23);
      v7 = v18;
      if ( v18 <= 0 )
        goto LABEL_23;
    }
    v7 = (unsigned __int16)v18 | 0xC0070000;
LABEL_23:
    if ( v7 >= 0 )
    {
      v7 = 0;
      *a3 = v23;
      v23 = 0LL;
    }
  }
  if ( v15 )
    RegCloseKey(v15);
LABEL_27:
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( v23 )
    RegCloseKey(v23);
  return (unsigned int)v7;
}
