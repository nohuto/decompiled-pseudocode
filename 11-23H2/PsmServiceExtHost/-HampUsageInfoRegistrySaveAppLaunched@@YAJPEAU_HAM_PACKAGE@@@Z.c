/*
 * XREFs of ?HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18001B490
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18001CB90 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z @ 0x1800420B0 (-HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180070488 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall HampUsageInfoRegistrySaveAppLaunched(const WCHAR *a1)
{
  HKEY v2; // rdi
  int v3; // ebx
  WCHAR *v4; // rax
  __int64 v5; // rcx
  WCHAR *v6; // rax
  __int64 v7; // r8
  char *v8; // r9
  WCHAR v9; // dx
  LSTATUS v10; // eax
  LSTATUS v11; // eax
  LSTATUS Value; // eax
  __int64 v14; // rcx
  BYTE Data[8]; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp-A0h] BYREF
  DWORD cbData[2]; // [rsp+68h] [rbp-98h] BYREF
  char *v19; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SubKey[288]; // [rsp+90h] [rbp-70h] BYREF

  phkResult = 0LL;
  *(_QWORD *)&UnicodeString.Length = 37486592LL;
  hKey = 0LL;
  UnicodeString.Buffer = SubKey;
  v2 = 0LL;
  v3 = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)(a1 + 114), 0);
  if ( v3 < 0 )
    goto LABEL_28;
  v4 = SubKey;
  v5 = 286LL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v5 )
    {
      v3 = -1073741811;
      goto LABEL_28;
    }
  }
  v3 = 0;
  v6 = &SubKey[286 - v5];
  v7 = 98LL;
  v8 = (char *)((char *)L"\\SOFTWARE\\Classes\\Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\SystemAppData"
              - (char *)v6);
  while ( v7 )
  {
    v9 = *(WCHAR *)((char *)v6 + (_QWORD)v8);
    if ( !v9 )
      break;
    *v6 = v9;
    --v7;
    ++v6;
    if ( !--v5 )
    {
      --v6;
      v3 = -2147483643;
      break;
    }
  }
  *v6 = 0;
  if ( v3 < 0 )
    goto LABEL_28;
  v10 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 4u, 0LL, &hKey, 0LL);
  v3 = v10;
  if ( v10 > 0 )
    v3 = (unsigned __int16)v10 | 0xC0070000;
  if ( v3 < 0 )
  {
LABEL_28:
    if ( hKey )
      RegCloseKey(hKey);
LABEL_32:
    if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
    {
      cbData[1] = v3;
      v19 = (char *)(a1 + 48);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v14,
        &unk_1800C009E);
    }
    goto LABEL_22;
  }
  v2 = hKey;
  hKey = 0LL;
  v11 = RegCreateKeyExW(v2, a1 + 48, 0, 0LL, 0, 0x2001Fu, 0LL, &phkResult, 0LL);
  v3 = v11;
  if ( v11 > 0 )
    v3 = (unsigned __int16)v11 | 0xC0070000;
  if ( v3 < 0 )
    goto LABEL_32;
  cbData[0] = 4;
  Value = RegQueryValueExW(phkResult, L"WasEverActivated", 0LL, 0LL, Data, cbData);
  v3 = Value;
  if ( Value > 0 )
    v3 = (unsigned __int16)Value | 0xC0070000;
  if ( v3 < 0 || *(_DWORD *)Data != 1 )
  {
    *(_DWORD *)Data = 1;
    v3 = HampSystemSetValue(phkResult, L"WasEverActivated", 4u, Data, 4u);
    if ( v3 >= 0 )
    {
      v3 = 0;
      goto LABEL_22;
    }
    goto LABEL_32;
  }
LABEL_22:
  if ( v2 )
    RegCloseKey(v2);
  if ( phkResult )
    RegCloseKey(phkResult);
  return (unsigned int)v3;
}
