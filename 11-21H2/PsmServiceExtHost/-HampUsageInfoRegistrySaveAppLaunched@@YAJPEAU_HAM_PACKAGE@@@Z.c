/*
 * XREFs of ?HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18000EE70
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010CE0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z @ 0x18003E4B4 (-HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180073178 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall HampUsageInfoRegistrySaveAppLaunched(const WCHAR *a1)
{
  int v2; // ebx
  __int64 v3; // r8
  signed __int64 v4; // r9
  __int64 v5; // rdx
  WCHAR *v6; // rax
  char *v7; // rax
  __int64 v8; // rcx
  LSTATUS v9; // eax
  HKEY v10; // rdi
  LSTATUS v11; // eax
  LSTATUS Value; // eax
  __int64 v14; // rcx
  BYTE Data[8]; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp-A0h] BYREF
  DWORD cbData[2]; // [rsp+68h] [rbp-98h] BYREF
  char *v19; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SubKey[286]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v22[4]; // [rsp+2CCh] [rbp+1CCh] BYREF

  *(_QWORD *)&UnicodeString.Length = 37486592LL;
  UnicodeString.Buffer = SubKey;
  phkResult = 0LL;
  hKey = 0LL;
  v2 = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)(a1 + 114), 0);
  if ( v2 < 0 )
    goto LABEL_29;
  v5 = 286LL;
  v6 = SubKey;
  while ( *v6 )
  {
    ++v6;
    if ( !--v5 )
    {
      v2 = -1073741811;
      goto LABEL_29;
    }
  }
  v7 = &v22[-2 * v5];
  v4 = (char *)L"\\SOFTWARE\\Classes\\Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\SystemAppData"
     - v7;
  v8 = 98LL;
  while ( v8 )
  {
    v3 = *(unsigned __int16 *)&v7[v4];
    if ( !(_WORD)v3 )
      break;
    *(_WORD *)v7 = v3;
    --v8;
    v7 += 2;
    if ( !--v5 )
    {
      *((_WORD *)v7 - 1) = 0;
      v2 = -2147483643;
      goto LABEL_29;
    }
  }
  *(_WORD *)v7 = 0;
  v9 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 4u, 0LL, &hKey, 0LL);
  v2 = v9;
  if ( v9 > 0 )
    v2 = (unsigned __int16)v9 | 0xC0070000;
  if ( v2 < 0 )
  {
LABEL_29:
    if ( hKey )
      RegCloseKey(hKey);
    v10 = 0LL;
LABEL_31:
    if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, v3, v4) )
    {
      cbData[1] = v2;
      v19 = (char *)(a1 + 48);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v14,
        &unk_1800BFED6);
    }
    goto LABEL_21;
  }
  v10 = hKey;
  hKey = 0LL;
  v11 = RegCreateKeyExW(v10, a1 + 48, 0, 0LL, 0, 0x2001Fu, 0LL, &phkResult, 0LL);
  v2 = v11;
  if ( v11 > 0 )
    v2 = (unsigned __int16)v11 | 0xC0070000;
  if ( v2 < 0 )
    goto LABEL_31;
  cbData[0] = 4;
  Value = RegQueryValueExW(phkResult, L"WasEverActivated", 0LL, 0LL, Data, cbData);
  v2 = Value;
  if ( Value > 0 )
    v2 = (unsigned __int16)Value | 0xC0070000;
  if ( v2 < 0 || *(_DWORD *)Data != 1 )
  {
    *(_DWORD *)Data = 1;
    v2 = HampSystemSetValue(phkResult, L"WasEverActivated", 4u, Data, 4u);
    if ( v2 >= 0 )
    {
      v2 = 0;
      goto LABEL_21;
    }
    goto LABEL_31;
  }
LABEL_21:
  if ( v10 )
    RegCloseKey(v10);
  if ( phkResult )
    RegCloseKey(phkResult);
  return (unsigned int)v2;
}
