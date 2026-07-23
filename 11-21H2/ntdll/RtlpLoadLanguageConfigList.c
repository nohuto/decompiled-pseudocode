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
  void *v6; // r12
  HANDLE v7; // rdi
  int v8; // eax
  NTSTATUS v9; // eax
  int PolicyLanguageSpec; // ebx
  __int64 LanguageConfigList; // rax
  void *v13; // rcx
  HANDLE KeyHandle; // [rsp+28h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-50h]
  HANDLE v16; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  KeyHandle = 0LL;
  v16 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = (void *)*a2;
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
        v7 = Handle;
        goto LABEL_14;
      }
      if ( a1 == 8 )
        RtlpHasMachineUILock(KeyHandle);
      NtClose(KeyHandle);
      KeyHandle = 0LL;
    }
    v8 = OpenGlobalizationUserSettingsKey(0x2000000u);
    v7 = Handle;
    if ( v8 < 0 )
      v7 = 0LL;
    Handle = v7;
    if ( a1 != 8 )
    {
      if ( a1 != 4
        || v7
        && (RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration"),
            KeyHandle = 0LL,
            ObjectAttributes.ObjectName = &DestinationString,
            ObjectAttributes.Length = 48,
            ObjectAttributes.RootDirectory = v7,
            ObjectAttributes.Attributes = 64,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0) )
      {
LABEL_35:
        PolicyLanguageSpec = RtlpPopulateLanguageConfigList(KeyHandle, a2, a3);
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
      v9 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      PolicyLanguageSpec = v9;
      if ( v9 < 0 )
      {
        if ( v9 == -1073741772 )
          PolicyLanguageSpec = 0;
        goto LABEL_13;
      }
      goto LABEL_35;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v7;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&v16, 0x20019u, &ObjectAttributes) >= 0 )
      {
        PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(v16);
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
    v7 = Handle;
  }
  if ( v16 )
  {
    NtClose(v16);
    v7 = Handle;
  }
  if ( v7 )
    NtClose(v7);
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
    *a2 = (__int64)v6;
    return (unsigned int)PolicyLanguageSpec;
  }
  if ( a2 )
  {
    v13 = (void *)*a2;
    if ( (void *)*a2 != v6 )
    {
      if ( v13 )
        RtlpMuiRegFreeLanguageConfigList(v13);
      goto LABEL_42;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
