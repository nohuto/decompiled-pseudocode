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
  int v2; // [rsp+74h] [rbp+3Bh]
  int v3; // [rsp+78h] [rbp+3Fh]
  unsigned int v4; // [rsp+7Ch] [rbp+43h]

  if ( (NtCurrentPeb()->AppCompatFlags.QuadPart & 0x400000000LL) != 0 )
    return 1;
  v1 = dword_180188458;
  if ( !dword_180188458 )
  {
    if ( (int)NtOpenKey() >= 0 && (int)NtQueryValueKey() >= 0 && v2 == 4 && v3 == 4 )
      RtlpInitializeLegacyDosDevicePathState(v4);
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
