/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x18006EA54
 * Callers:
 *     InitializeTEBUserLangList @ 0x180049E8C (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x18006E308 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006E750 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F1DC (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18006F324 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18006F850 (RtlpMuiRegFreeLanguageConfigList.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x180110734 (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1801107CC (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x180112B9C (RtlpPopulateLanguageConfigList.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(int a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // r12
  HANDLE v7; // rdi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  __int64 LanguageConfigList; // rax
  char v14[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE v15; // [rsp+28h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE v17; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v19; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v20; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  char v24; // [rsp+C8h] [rbp+48h] BYREF
  char v25; // [rsp+D8h] [rbp+58h] BYREF

  v15 = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    v19 = 48;
    p_DestinationString = &DestinationString;
    v20 = 0LL;
    v22 = 64;
    v23 = 0LL;
    if ( (int)NtOpenKey(&v15, 131097LL, &v19) >= 0 )
    {
      v11 = RtlpLoadPolicyLanguageSpec(v15, a3, &v25, v14);
      if ( v11 >= 0 )
      {
LABEL_13:
        v7 = Handle;
        goto LABEL_14;
      }
      if ( a1 == 8 )
      {
        v24 = 0;
        if ( !(unsigned int)RtlpHasMachineUILock(v15, &v24) && v24 == 1 )
          a1 = 4;
      }
      NtClose(v15);
      v15 = 0LL;
    }
    v9 = OpenGlobalizationUserSettingsKey(0x2000000LL, v8, &Handle);
    v7 = Handle;
    if ( v9 < 0 )
      v7 = 0LL;
    Handle = v7;
    if ( a1 != 8 )
    {
      if ( a1 != 4
        || v7
        && (RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration"),
            v15 = 0LL,
            p_DestinationString = &DestinationString,
            v19 = 48,
            v20 = v7,
            v22 = 64,
            v23 = 0LL,
            (int)NtOpenKey(&v15, 131097LL, &v19) >= 0) )
      {
LABEL_37:
        v11 = RtlpPopulateLanguageConfigList(v15, a2, a3);
        goto LABEL_13;
      }
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
      v20 = 0LL;
LABEL_10:
      v19 = 48;
      p_DestinationString = &DestinationString;
      v15 = 0LL;
      v22 = 64;
      v23 = 0LL;
      v10 = NtOpenKey(&v15, 131097LL, &v19);
      v11 = v10;
      if ( v10 < 0 )
      {
        if ( v10 == -1073741772 )
          v11 = 0;
        goto LABEL_13;
      }
      goto LABEL_37;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      v19 = 48;
      p_DestinationString = &DestinationString;
      v20 = v7;
      v22 = 64;
      v23 = 0LL;
      if ( (int)NtOpenKey(&v17, 131097LL, &v19) >= 0 )
      {
        v11 = RtlpLoadPolicyLanguageSpec(v17, a3, &v25, v14);
        if ( v11 >= 0 )
          goto LABEL_13;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      v20 = Handle;
      goto LABEL_10;
    }
    v11 = 0;
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_14:
  if ( v15 )
  {
    NtClose(v15);
    v7 = Handle;
  }
  if ( v17 )
  {
    NtClose(v17);
    v7 = Handle;
  }
  if ( v7 )
    NtClose(v7);
  if ( v11 >= 0 )
  {
    if ( *a2 )
      return (unsigned int)v11;
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( LanguageConfigList )
      return (unsigned int)v11;
    v11 = -1073741801;
LABEL_44:
    *a2 = v6;
    return (unsigned int)v11;
  }
  if ( a2 && *a2 != v6 )
  {
    if ( *a2 )
      RtlpMuiRegFreeLanguageConfigList();
    goto LABEL_44;
  }
  return (unsigned int)v11;
}
