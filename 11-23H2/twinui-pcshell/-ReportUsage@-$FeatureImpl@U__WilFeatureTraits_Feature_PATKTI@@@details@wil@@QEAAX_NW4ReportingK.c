/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D3D44
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800D1F90 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D3E5C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@AE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil_details_MapReportingKind @ 0x1803A51C4 (wil_details_MapReportingKind.c)
 */

__int64 (__fastcall *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // r10d
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  __int64 v9; // [rsp+30h] [rbp-48h]
  int v10; // [rsp+30h] [rbp-48h]
  _BYTE v11[40]; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+80h] [rbp+8h] BYREF
  char v13; // [rsp+84h] [rbp+Ch]
  int v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h]

  v15 = a4;
  LOBYTE(v14) = a3;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
    v15 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::GetCachedFeatureEnabledState(a1, v11);
  v13 = 2;
  v12 = 0;
  v14 = 3;
  v6 = wil_details_MapReportingKind(3LL, v5);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                                                                     (struct wil_details_FeatureReportingCache *)(a1 + 8),
                                                                                                     0x234B251u,
                                                                                                     (v7 >> 10) & 1,
                                                                                                     (v7 >> 11) & 1,
                                                                                                     v6,
                                                                                                     0,
                                                                                                     v9,
                                                                                                     2u);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v10) = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(37007953LL, &v12, 0LL, v5, &v14, 0LL, v10, 1LL);
    }
  }
  return result;
}
