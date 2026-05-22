/*
 * XREFs of ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x180066E1C
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX_NW4Variant_EffectSupport@@W4VariantReportingKind@3@_K@Z @ 0x1800671B8 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@QEAAX.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180066ABC (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall wil::details::ReportVariantUsageToService(
        struct wil_details_FeatureReportingCache *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7,
        unsigned int a8,
        int a9)
{
  _UNKNOWN **result; // rax
  unsigned int v11; // ecx
  int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  switch ( a9 )
  {
    case 0:
      return result;
    case 1:
      v12 = a6 != 0 ? 448 : 384;
      break;
    case 2:
      v12 = a6 != 0 ? 320 : 256;
      break;
    default:
      v11 = 255;
      goto LABEL_8;
  }
  v11 = a7 + v12;
LABEL_8:
  result = (_UNKNOWN **)wil::details::ReportUsageToServiceDirect(
                          a1,
                          0x902C68u,
                          a3,
                          a4,
                          v11,
                          a8,
                          v13,
                          *(_BYTE *)(a5 + 4));
  if ( (_DWORD)result )
  {
    result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v14) = a7;
      return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(9448552LL, a5, 0LL, a6, 0LL, &a9, v14, 1LL);
    }
  }
  return result;
}
