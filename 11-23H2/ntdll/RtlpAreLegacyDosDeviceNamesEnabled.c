/*
 * XREFs of RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D7050
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x18001CC20 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     Feature_TreatDosDevicePathsAsNormalFiles__private_ReportDeviceUsage @ 0x18009E7C8 (Feature_TreatDosDevicePathsAsNormalFiles__private_ReportDeviceUsage.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x1800D716C (RtlpInitializeLegacyDosDevicePathState.c)
 */

bool RtlpAreLegacyDosDeviceNamesEnabled()
{
  int v1; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+37h] BYREF
  int v6; // [rsp+74h] [rbp+3Bh]
  int v7; // [rsp+78h] [rbp+3Fh]
  unsigned int v8; // [rsp+7Ch] [rbp+43h]

  if ( (NtCurrentPeb()->AppCompatFlags.QuadPart & 0x400000000LL) != 0 )
    return 1;
  v1 = dword_180188458;
  if ( !dword_180188458 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"|~";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
      && NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_1801345D0,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v6 == 4
      && v7 == 4 )
    {
      RtlpInitializeLegacyDosDevicePathState(v8);
    }
    if ( KeyHandle )
      NtClose(KeyHandle);
    v1 = dword_180188458;
    if ( !dword_180188458 )
    {
      Feature_TreatDosDevicePathsAsNormalFiles__private_ReportDeviceUsage();
      v1 = 2;
      dword_180188458 = 2;
    }
  }
  return v1 == 1;
}
