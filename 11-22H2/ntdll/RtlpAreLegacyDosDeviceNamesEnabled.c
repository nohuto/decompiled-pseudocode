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
  int v2; // [rsp+84h] [rbp+3Bh]
  int v3; // [rsp+88h] [rbp+3Fh]
  unsigned int v4; // [rsp+8Ch] [rbp+43h]

  if ( (NtCurrentPeb()->AppCompatFlags.QuadPart & 0x400000000LL) != 0 )
    return 1;
  v1 = dword_180185388;
  if ( !dword_180185388 )
  {
    if ( (int)NtOpenKey() >= 0 && (int)NtQueryValueKey() >= 0 && v2 == 4 && v3 == 4 )
      RtlpInitializeLegacyDosDevicePathState(v4);
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
