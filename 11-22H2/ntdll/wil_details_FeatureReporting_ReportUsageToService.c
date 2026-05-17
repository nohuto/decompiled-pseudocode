/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1800D7BB4
 * Callers:
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 *     Feature_Servicing_ImageSizeBlankFont__private_IsEnabled @ 0x18009E374 (Feature_Servicing_ImageSizeBlankFont__private_IsEnabled.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D76F0 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800D7C4C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1800D7F9C (wil_details_MapReportingKind.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  int v8; // eax
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v13; // [rsp+30h] [rbp-28h]

  a7 = 3;
  v8 = wil_details_MapReportingKind(3LL, a6);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     v11,
                                                                                                     a2,
                                                                                                     v10,
                                                                                                     v9,
                                                                                                     v8);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v13 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, v13, 1LL);
    }
  }
  return result;
}
