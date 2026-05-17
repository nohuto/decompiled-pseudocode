/*
 * XREFs of RtlpSetInstallLanguage @ 0x1800FBAA0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180002418 (RtlStringCchCopyW.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C904 (OpenGlobalizationUserSettingsKey.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtDeleteKey @ 0x1800A0920 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1800A0980 (ZwDeleteValueKey.c)
 *     NtFlushInstallUILanguage @ 0x1800A0BA0 (NtFlushInstallUILanguage.c)
 *     NtIsUILanguageComitted @ 0x1800A0F20 (NtIsUILanguageComitted.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA3AC (RtlUnicodeStringToLcid.c)
 *     RtlpGetCompleteLanguageFallback @ 0x1800FB208 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800FB35C (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpGetInstalledLanguageType @ 0x1800FB530 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpSetInstallLanguage(char a1, const WCHAR *a2)
{
  char v2; // r15
  char v3; // r12
  WCHAR *v4; // rdi
  int ProcessRegistryInfo; // ebx
  __int16 *v6; // rsi
  __int16 *v7; // r14
  __int16 *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r9
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v14; // [rsp+50h] [rbp-B0h] BYREF
  char v15[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v16; // [rsp+68h] [rbp-98h] BYREF
  HANDLE v17; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int16 *v19; // [rsp+88h] [rbp-78h] BYREF
  int v20; // [rsp+90h] [rbp-70h]
  HANDLE v21; // [rsp+98h] [rbp-68h]
  UNICODE_STRING *v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+A8h] [rbp-58h]
  __int128 v24; // [rsp+B0h] [rbp-50h]
  WCHAR SourceString[88]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v26[88]; // [rsp+170h] [rbp+70h] BYREF
  _WORD v27[176]; // [rsp+220h] [rbp+120h] BYREF
  _WORD v28[264]; // [rsp+380h] [rbp+280h] BYREF

  Handle = 0LL;
  v2 = 0;
  v17 = 0LL;
  v3 = 0;
  v4 = (WCHAR *)a2;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ProcessRegistryInfo = RtlUnicodeStringToLcid(&DestinationString.Length, (int *)&v13);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    DestinationString.Buffer = SourceString;
    DestinationString.MaximumLength = 172;
    if ( !RtlLCIDToCultureName(v13, (__int64)&DestinationString) )
      return (unsigned int)-1073741811;
    v4 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v13) )
      return (unsigned int)-1073741811;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v16);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v6 = v16;
  if ( !v16 )
    return (unsigned int)-1073741823;
  ProcessRegistryInfo = RtlpGetInstalledLanguageType((__int64)v16, v4, (int *)&v19, &v16);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (_DWORD)v19 == 1 )
    goto LABEL_23;
  if ( (_DWORD)v19 == 2 )
  {
    v8 = v16;
    v2 = 1;
LABEL_22:
    ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v6, v8, 0LL, v28, 0x102u);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    goto LABEL_23;
  }
  if ( (_DWORD)v19 != 4 )
    return (unsigned int)-1073741811;
  v3 = 1;
  memset_thunk_772440563353939046(v26, 0, 0xACuLL);
  RtlStringCchCopyW(v26, 85LL, (__int64)v4);
  v4 = SourceString;
  memset_thunk_772440563353939046(SourceString, 0, 0xACuLL);
  ProcessRegistryInfo = RtlpGetDefaultLanguageBaseOrParent(
                          (__int64)v6,
                          (__int64)v16,
                          &v19,
                          (__int64)SourceString,
                          0x55u,
                          0LL,
                          0LL);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v7 = v19;
  if ( !v19 )
    return (unsigned int)-1073741637;
  ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v6, v16, (__int64)v26, v27, 0xACu);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v2 = 1;
    v8 = v7;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&DestinationString, v4);
  if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v13) )
    return (unsigned int)-1073741811;
  ProcessRegistryInfo = NtFlushInstallUILanguage();
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( v2 )
    {
      RtlpSetPreferredUILanguages(1032LL, v28, v15);
    }
    else
    {
      RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v21 = 0LL;
      v22 = &v14;
      v20 = 48;
      v23 = 64;
      v24 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v14, L"InstallLanguageFallback");
        ZwDeleteValueKey();
        NtClose(Handle);
      }
    }
    if ( v3 )
    {
      RtlpSetPreferredUILanguages(32776LL, v26, v15);
      RtlpSetPreferredUILanguages(36872LL, v27, v15);
    }
    else
    {
      RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      Handle = 0LL;
      v21 = 0LL;
      v22 = &v14;
      v20 = 48;
      v23 = 64;
      v24 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v14, L"PreferredUILanguages");
        ZwDeleteValueKey();
        NtClose(Handle);
        RtlInitUnicodeString(
          &v14,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        Handle = 0LL;
        v21 = 0LL;
        v22 = &v14;
        v20 = 48;
        v23 = 64;
        v24 = 0LL;
        if ( (int)NtOpenKey() >= 0 )
        {
          NtDeleteKey();
          NtClose(Handle);
        }
        if ( (int)OpenGlobalizationUserSettingsKey(0x2000000u, v9, (__int64)&Handle, v10) >= 0 )
        {
          RtlInitUnicodeString(&v14, L"Control Panel\\Desktop\\MuiCached");
          v21 = Handle;
          v20 = 48;
          v22 = &v14;
          v23 = 64;
          v24 = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            RtlInitUnicodeString(&v14, L"MachinePreferredUILanguages");
            ZwDeleteValueKey();
            RtlInitUnicodeString(&v14, L"MachineLanguageConfiguration");
            ZwDeleteValueKey();
            NtClose(v17);
          }
          NtClose(Handle);
        }
      }
    }
  }
  else if ( (unsigned int)NtIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)ProcessRegistryInfo;
}
