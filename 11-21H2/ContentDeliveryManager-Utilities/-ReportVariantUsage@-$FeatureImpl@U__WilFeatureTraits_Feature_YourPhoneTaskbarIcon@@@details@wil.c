/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x180044148
 * Callers:
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x180048544 (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@detai.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180035030 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180043F20 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportVariantUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int64 a5)
{
  int v5; // esi
  unsigned int v6; // r8d
  int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ebx
  unsigned int v13; // edx
  int v14; // edx
  _BYTE v15[56]; // [rsp+50h] [rbp-38h] BYREF
  int v16; // [rsp+90h] [rbp+8h] BYREF
  char v17; // [rsp+94h] [rbp+Ch]
  int v18; // [rsp+98h] [rbp+10h] BYREF

  v5 = a3;
  v6 = *a1;
  HIDWORD(a5) = a1[1];
  v9 = a2;
  LODWORD(a5) = v6;
  if ( (v6 & 2) != 0 )
  {
    v10 = a5;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
                       (volatile signed __int64 *)a1,
                       (__int64)v15);
    a5 = v10;
    v6 = v10;
  }
  if ( (_BYTE)v5 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  v16 = 2;
  v17 = 3;
  v18 = a4;
  if ( !a4 )
    return;
  v12 = a4 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      v13 = 255;
      goto LABEL_14;
    }
    v14 = v9 + 4;
  }
  else
  {
    v14 = v9 + 6;
  }
  v13 = v5 + (v14 << 6);
LABEL_14:
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(
                       (struct wil_details_FeatureReportingCache *)(a1 + 2),
                       0xF81202u,
                       (v6 >> 8) & 1,
                       (v6 >> 9) & 1,
                       v13,
                       v11) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xF81202u,
        (const struct FEATURE_LOGGED_TRAITS *)&v16,
        0LL,
        v9,
        0LL,
        (const enum wil_VariantReportingKind *)&v18,
        v5,
        1uLL);
  }
}
