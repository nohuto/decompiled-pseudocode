/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x180040C3C
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x180040A74 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180012AA8 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180040908 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportVariantUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5)
{
  int v5; // esi
  unsigned int v7; // r8d
  int v9; // ebp
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v12; // ecx
  int v13; // ecx
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+80h] [rbp+8h] BYREF
  char v16; // [rsp+84h] [rbp+Ch]
  int v17; // [rsp+88h] [rbp+10h] BYREF

  v5 = a3;
  v7 = *a1;
  HIDWORD(a5) = a1[1];
  v9 = a2;
  LODWORD(a5) = v7;
  if ( (v7 & 2) != 0 )
  {
    HIDWORD(v10) = HIDWORD(a5);
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
                       (volatile signed __int64 *)a1,
                       (__int64)v14);
    a5 = v10;
    v7 = v10;
  }
  v16 = 3;
  v17 = a4;
  v15 = 0;
  if ( !a4 )
    return;
  v11 = a4 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v12 = 255;
      goto LABEL_11;
    }
    v13 = v9 + 4;
  }
  else
  {
    v13 = v9 + 6;
  }
  v12 = v5 + (v13 << 6);
LABEL_11:
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       a1 + 2,
                       0xA8161Eu,
                       (v7 >> 8) & 1,
                       (v7 >> 9) & 1,
                       v12,
                       HIDWORD(v10) & (unsigned int)-((_BYTE)v5 != 0)) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xA8161Eu,
        (const struct FEATURE_LOGGED_TRAITS *)&v15,
        0LL,
        v9,
        0LL,
        (const enum wil_VariantReportingKind *)&v17,
        v5,
        1uLL);
  }
}
