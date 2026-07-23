/*
 * XREFs of RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D768C
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x180047620 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x1800D77B8 (RtlpInitializeLegacyDosDevicePathState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D7B00 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

bool RtlpAreLegacyDosDeviceNamesEnabled()
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx
  ULONG Length; // [rsp+20h] [rbp-29h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp+37h] BYREF
  int v9; // [rsp+84h] [rbp+3Bh]
  int v10; // [rsp+88h] [rbp+3Fh]
  unsigned int v11; // [rsp+8Ch] [rbp+43h]

  if ( (NtCurrentPeb()->AppCompatFlags.QuadPart & 0x400000000LL) != 0 )
    return 1;
  v1 = dword_18017B0E8;
  if ( !dword_18017B0E8 )
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
           (PUNICODE_STRING)&stru_18012D558,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v9 == 4
      && v10 == 4 )
    {
      RtlpInitializeLegacyDosDevicePathState(v11);
    }
    v3 = (int)KeyHandle;
    if ( KeyHandle )
      NtClose(KeyHandle);
    v1 = dword_18017B0E8;
    if ( !dword_18017B0E8 )
    {
      wil_details_FeatureReporting_ReportUsageToService(v3, v2, 0, 0, Length, 1);
      v1 = 2;
      dword_18017B0E8 = 2;
    }
  }
  return v1 == 1;
}
