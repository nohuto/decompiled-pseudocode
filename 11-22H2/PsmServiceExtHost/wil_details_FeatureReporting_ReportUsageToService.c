/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x18002A530
 * Callers:
 *     Feature_IndexerFanBackoff__private_ReportDeviceUsage @ 0x18004BB1C (Feature_IndexerFanBackoff__private_ReportDeviceUsage.c)
 *     wil_details_IsEnabledFallback @ 0x18004BBD0 (wil_details_IsEnabledFallback.c)
 *     Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage @ 0x180051728 (Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x18002A680 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        int a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  char v3; // r9
  unsigned int v4; // ebx
  __int64 v6; // r8
  int v7; // r8d
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v3 = a3;
  v4 = a2 & 1;
  switch ( a3 )
  {
    case 0:
      goto LABEL_13;
    case 1:
      v6 = 4 * (unsigned int)!(a2 & 1);
      break;
    case 2:
      v6 = 4 * (unsigned int)!(a2 & 1) + 1;
      break;
    case 3:
      v6 = 4 * (unsigned int)!(a2 & 1) + 2;
      break;
    case 4:
      v6 = 4 * (unsigned int)!(a2 & 1) + 3;
      break;
    case 5:
      v6 = 2 * (unsigned int)!(a2 & 1) + 8;
      break;
    case 6:
      v6 = 2 * (unsigned int)!(a2 & 1) + 9;
      break;
    default:
      if ( (unsigned __int8)a3 < 0x64u || (unsigned __int8)a3 >= 0x96u )
      {
LABEL_13:
        v6 = 255LL;
      }
      else
      {
        v7 = 100;
        if ( (a2 & 1) == 0 )
          v7 = 150;
        v6 = (unsigned int)(unsigned __int8)(v3 - 100) + v7;
      }
      break;
  }
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     v6);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v4, &v9, 0LL, 0, 1LL);
  }
  return result;
}
