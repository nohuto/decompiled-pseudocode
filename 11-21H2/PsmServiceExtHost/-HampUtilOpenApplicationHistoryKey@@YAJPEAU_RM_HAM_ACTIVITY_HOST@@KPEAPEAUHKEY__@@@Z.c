/*
 * XREFs of ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x18000C2B0
 * Callers:
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000A028 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18000A0F8 (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x18000C58C (-HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18004E7C8 (__report_rangecheckfailure.c)
 */

__int64 __fastcall HampUtilOpenApplicationHistoryKey(struct _RM_HAM_ACTIVITY_HOST *a1, char a2, HKEY *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  WCHAR *v8; // rax
  __int64 v9; // r8
  char *v10; // rax
  signed __int64 v11; // r9
  __int16 v12; // cx
  LSTATUS v13; // eax
  HKEY v14; // rdi
  int v15; // esi
  LSTATUS v16; // eax
  LSTATUS v17; // eax
  unsigned int v19; // edx
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  HKEY v21; // [rsp+58h] [rbp-A8h] BYREF
  HKEY v22; // [rsp+60h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  WCHAR v25[136]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SubKey[254]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v27[4]; // [rsp+38Ch] [rbp+28Ch] BYREF

  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  v21 = 0LL;
  v22 = 0LL;
  UnicodeString.Buffer = SubKey;
  hKey = 0LL;
  v6 = RtlConvertSidToUnicodeString(&UnicodeString, (char *)a1 + 488, 0);
  if ( v6 < 0 )
    goto LABEL_34;
  v7 = 254LL;
  v8 = SubKey;
  while ( *v8 )
  {
    ++v8;
    if ( !--v7 )
    {
      v6 = -1073741811;
      goto LABEL_34;
    }
  }
  v9 = 66LL;
  v10 = &v27[-2 * v7];
  v11 = (char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - v10;
  while ( v9 )
  {
    v12 = *(_WORD *)&v10[v11];
    if ( !v12 )
      break;
    *(_WORD *)v10 = v12;
    --v9;
    v10 += 2;
    if ( !--v7 )
    {
      *((_WORD *)v10 - 1) = 0;
      v6 = -2147483643;
      goto LABEL_34;
    }
  }
  *(_WORD *)v10 = 0;
  v13 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 4u, 0LL, &hKey, 0LL);
  v6 = v13;
  if ( v13 > 0 )
    v6 = (unsigned __int16)v13 | 0xC0070000;
  if ( v6 < 0 )
  {
LABEL_34:
    if ( hKey )
      RegCloseKey(hKey);
  }
  else
  {
    v14 = hKey;
    hKey = 0LL;
    v15 = a2 & 1;
    if ( v15 )
    {
      v6 = HampSystemCreateKey(v14, L"CommitHistory", 0, 0x20006u, &v21);
    }
    else
    {
      v16 = RegOpenKeyExW(v14, L"CommitHistory", 0, 0x20019u, &v21);
      v6 = v16;
      if ( v16 > 0 )
        v6 = (unsigned __int16)v16 | 0xC0070000;
    }
    if ( v6 >= 0 )
    {
      v20 = 131;
      PsmGetAumidFromKey((char *)a1 + 24, &v20, v25);
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 99) + 616LL) & 0x10000) != 0 )
      {
        v19 = v20;
        v25[v20 - 1] = 35;
        if ( 2 * (unsigned __int64)v19 >= 0x106 )
          _report_rangecheckfailure();
        v25[v19] = 0;
      }
      if ( v15 )
      {
        v6 = HampSystemCreateKey(v21, v25, 0, 0x20006u, &v22);
      }
      else
      {
        v17 = RegOpenKeyExW(v21, v25, 0, 0x20019u, &v22);
        v6 = v17;
        if ( v17 > 0 )
          v6 = (unsigned __int16)v17 | 0xC0070000;
      }
      if ( v6 >= 0 )
      {
        v6 = 0;
        *a3 = v22;
        v22 = 0LL;
      }
    }
    if ( v14 )
      RegCloseKey(v14);
  }
  if ( v21 )
    RegCloseKey(v21);
  if ( v22 )
    RegCloseKey(v22);
  return (unsigned int)v6;
}
