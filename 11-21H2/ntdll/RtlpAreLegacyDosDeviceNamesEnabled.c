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
  int v3; // [rsp+20h] [rbp-29h]
  int v4; // [rsp+84h] [rbp+3Bh]
  int v5; // [rsp+88h] [rbp+3Fh]
  unsigned int v6; // [rsp+8Ch] [rbp+43h]

  if ( (NtCurrentPeb()->AppCompatFlags.QuadPart & 0x400000000LL) != 0 )
    return 1;
  v1 = dword_18017B0E8;
  if ( !dword_18017B0E8 )
  {
    if ( (int)NtOpenKey() >= 0 )
    {
      v3 = 20;
      if ( (int)NtQueryValueKey() >= 0 && v4 == 4 && v5 == 4 )
        RtlpInitializeLegacyDosDevicePathState(v6);
    }
    v1 = dword_18017B0E8;
    if ( !dword_18017B0E8 )
    {
      wil_details_FeatureReporting_ReportUsageToService(0, v2, 0, 0, v3, 1);
      v1 = 2;
      dword_18017B0E8 = 2;
    }
  }
  return v1 == 1;
}
