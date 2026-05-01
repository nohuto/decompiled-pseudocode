/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Variant_AutoGameMode@@W4VariantReportingKind@3@_K@Z @ 0x1800419D8
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x1800418B0 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180012D44 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004172C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportVariantUsage(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5)
{
  int v5; // esi
  __int64 v7; // r8
  __int64 result; // rax
  unsigned int v10; // ebp
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+70h] [rbp+8h] BYREF
  char v18; // [rsp+74h] [rbp+Ch]
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v5 = a3;
  LODWORD(v7) = *(_DWORD *)a1;
  result = *(unsigned int *)(a1 + 4);
  v10 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
               (volatile signed __int64 *)a1,
               (__int64)&a5);
    v7 = *(_QWORD *)result;
    a5 = *(_QWORD *)result;
  }
  v18 = 3;
  v17 = 0;
  v19 = a4;
  if ( a4 )
  {
    v11 = a4 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        v12 = 255;
        goto LABEL_10;
      }
      v13 = v10 + 4;
    }
    else
    {
      v13 = v10 + 6;
    }
    v12 = v5 + (v13 << 6);
LABEL_10:
    result = wil::details::ReportUsageToServiceDirect(
               (volatile signed __int32 *)(a1 + 8),
               0xA8161Eu,
               ((unsigned int)v7 >> 10) & 1,
               ((unsigned int)v7 >> 11) & 1,
               v12,
               v14,
               v15,
               3);
    if ( (_DWORD)result )
    {
      result = (__int64)g_wil_details_pfnFeatureLoggingHook;
      if ( g_wil_details_pfnFeatureLoggingHook )
      {
        LOBYTE(v16) = v5;
        return g_wil_details_pfnFeatureLoggingHook(11015710LL, &v17, 0LL, v10, 0LL, &v19, v16, 1LL);
      }
    }
  }
  return result;
}
