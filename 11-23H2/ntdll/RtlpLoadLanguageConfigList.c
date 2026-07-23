/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x18000A780
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x18000A230 (RtlpMuiRegLoadRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180012A18 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x180070350 (RtlpInitializeUserList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18000A970 (RtlpMuiRegCreateLanguageConfigList.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C6F4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008ABF0 (RtlpMuiRegFreeLanguageConfigList.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x180112034 (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1801120CC (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x180114478 (RtlpPopulateLanguageConfigList.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(int a1, __int64 *a2, __int64 a3)
{
  void *v5; // r12
  HANDLE v6; // rdi
  int v7; // eax
  NTSTATUS v8; // eax
  int PolicyLanguageSpec; // ebx
  __int64 LanguageConfigList; // rax
  void *v12; // rcx
  HANDLE KeyHandle; // [rsp+28h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-50h]
  HANDLE v15; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  KeyHandle = 0LL;
  v15 = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a2 && a3 )
  {
    v5 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
      if ( PolicyLanguageSpec >= 0 )
      {
LABEL_13:
        v6 = Handle;
        goto LABEL_14;
      }
      if ( a1 == 8 )
        RtlpHasMachineUILock(KeyHandle);
      NtClose(KeyHandle);
      KeyHandle = 0LL;
    }
    v7 = OpenGlobalizationUserSettingsKey(0x2000000u);
    v6 = Handle;
    if ( v7 < 0 )
      v6 = 0LL;
    Handle = v6;
    if ( a1 != 8 )
    {
      if ( a1 != 4
        || v6
        && (RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration"),
            KeyHandle = 0LL,
            ObjectAttributes.ObjectName = &DestinationString,
            ObjectAttributes.Length = 48,
            ObjectAttributes.RootDirectory = v6,
            ObjectAttributes.Attributes = 64,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0) )
      {
LABEL_35:
        PolicyLanguageSpec = RtlpPopulateLanguageConfigList(KeyHandle);
        goto LABEL_13;
      }
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
      ObjectAttributes.RootDirectory = 0LL;
LABEL_10:
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      KeyHandle = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      PolicyLanguageSpec = v8;
      if ( v8 < 0 )
      {
        if ( v8 == -1073741772 )
          PolicyLanguageSpec = 0;
        goto LABEL_13;
      }
      goto LABEL_35;
    }
    if ( v6 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&v15, 0x20019u, &ObjectAttributes) >= 0 )
      {
        PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(v15);
        if ( PolicyLanguageSpec >= 0 )
          goto LABEL_13;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      ObjectAttributes.RootDirectory = Handle;
      goto LABEL_10;
    }
    PolicyLanguageSpec = 0;
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_14:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    v6 = Handle;
  }
  if ( v15 )
  {
    NtClose(v15);
    v6 = Handle;
  }
  if ( v6 )
    NtClose(v6);
  if ( PolicyLanguageSpec >= 0 )
  {
    if ( *a2 )
      return (unsigned int)PolicyLanguageSpec;
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( LanguageConfigList )
      return (unsigned int)PolicyLanguageSpec;
    PolicyLanguageSpec = -1073741801;
LABEL_42:
    *a2 = (__int64)v5;
    return (unsigned int)PolicyLanguageSpec;
  }
  if ( a2 )
  {
    v12 = (void *)*a2;
    if ( (void *)*a2 != v5 )
    {
      if ( v12 )
        RtlpMuiRegFreeLanguageConfigList(v12);
      goto LABEL_42;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
