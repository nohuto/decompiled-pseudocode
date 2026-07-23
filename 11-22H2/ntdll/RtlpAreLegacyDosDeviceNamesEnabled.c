/*
 * XREFs of RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D76F0
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x18001CE00 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x1800D7834 (RtlpInitializeLegacyDosDevicePathState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D7BB4 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

bool RtlpAreLegacyDosDeviceNamesEnabled()
{
  int v1; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp+37h] BYREF
  int v6; // [rsp+84h] [rbp+3Bh]
  int v7; // [rsp+88h] [rbp+3Fh]
  unsigned int v8; // [rsp+8Ch] [rbp+43h]

  if ( (NtCurrentPeb()->AppCompatFlags.QuadPart & 0x400000000LL) != 0 )
    return 1;
  v1 = dword_180185388;
  if ( !dword_180185388 )
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
           (PUNICODE_STRING)&stru_180132560,
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
    v1 = dword_180185388;
    if ( !dword_180185388 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (unsigned int)&Feature_TreatDosDevicePathsAsNormalFiles__private_reporting,
        29933563,
        0,
        0,
        (__int64)&Feature_TreatDosDevicePathsAsNormalFiles_logged_traits,
        1);
      v1 = 2;
      dword_180185388 = 2;
    }
  }
  return v1 == 1;
}
