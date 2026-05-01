/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D034
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@QEAA_NXZ @ 0x18004D274 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@detail.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004CD20 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18007935C (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 */

__int64 (__fastcall *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::ReportUsage(
        wil::details *a1,
        __int64 a2,
        char a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v8; // [rsp+30h] [rbp-48h]
  signed __int32 v9[10]; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+80h] [rbp+8h] BYREF
  char v11; // [rsp+84h] [rbp+Ch]
  int v12; // [rsp+90h] [rbp+18h] BYREF
  __int64 v13; // [rsp+98h] [rbp+20h]

  v13 = a4;
  LOBYTE(v12) = a3;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = (unsigned __int8)a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::GetCachedFeatureEnabledState(
                      a1,
                      v9);
    v13 = v4;
  }
  v10 = 0;
  v11 = 2;
  v12 = 3;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                                                                     (char *)a1 + 8,
                                                                                                     a2,
                                                                                                     ((unsigned int)v4 >> 10) & 1,
                                                                                                     ((unsigned int)v4 >> 11) & 1,
                                                                                                     4 * (v6 ^ 1) + 2);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v8 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(39841886LL, &v10, 0LL, v6, &v12, 0LL, v8, 1LL);
    }
  }
  return result;
}
