/*
 * XREFs of RtlpGetUserOrMachineUILanguage4NLS @ 0x180111E00
 * Callers:
 *     RtlLcidToLocaleName @ 0x180015D90 (RtlLcidToLocaleName.c)
 *     RtlpMatchUILanguage @ 0x18010B328 (RtlpMatchUILanguage.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x18000BAC0 (LdrpQueryValueKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C6F4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetUserOrMachineUILanguage4NLS(int a1, void *a2, unsigned __int64 *a3)
{
  int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // edi
  int v10; // [rsp+30h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+C8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  LODWORD(v15) = 0;
  v10 = 7;
  v6 = OpenGlobalizationUserSettingsKey(0x2000000u, (__int64)a2, &Handle);
  if ( v6 < 0 )
    goto LABEL_21;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    ObjectAttributes.RootDirectory = Handle;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v6 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v10, 0LL, (ULONG *)&v15);
      if ( v6 >= 0 )
        goto LABEL_10;
    }
    if ( v6 == -2147483643 )
      goto LABEL_10;
    NtClose(KeyHandle);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 < 0 )
    goto LABEL_21;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v6 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v10, 0LL, (ULONG *)&v15);
LABEL_10:
  if ( v6 != -1073741772 && (_DWORD)v15 )
  {
    if ( v6 != -2147483643 )
    {
LABEL_20:
      v6 = -1073741772;
      goto LABEL_21;
    }
    v7 = (unsigned int)(v15 + 1);
    v8 = (unsigned int)v7 >> 1;
    if ( !a2 )
    {
      v6 = 0;
LABEL_15:
      *a3 = v8;
      goto LABEL_21;
    }
    if ( *a3 < v7 >> 1 )
    {
      v6 = -1073741789;
      goto LABEL_15;
    }
    v6 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v10, a2, (ULONG *)&v15);
    if ( v6 >= 0 )
    {
      if ( v10 == 7 )
        goto LABEL_15;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v6;
}
