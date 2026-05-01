/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1806804E0
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180052138 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATwi.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114810 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x1803DC6C8 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        int *a3)
{
  int FeatureVariant; // eax
  int v5; // esi
  int v6; // ebx
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = HIDWORD(a1);
  v12 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant((wil::details *)0x1C567CD, 3LL, (__int64)&v14, &v12, a3);
  *(_QWORD *)a2 = 0LL;
  v5 = FeatureVariant & 0x100;
  v6 = FeatureVariant;
  *a2 = (v12 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    1u,
    0,
    v7);
  v8 = *a2;
  v9 = 1966852;
  v10 = v6 & 0xFFFFFE7F;
  if ( v10 )
  {
    *a2 = v8 ^ (v8 ^ (v10 << 12)) & 0x3F000;
    if ( v5 )
      v9 = v14;
  }
  else
  {
    *a2 = v8 & 0xFFFC0FFF;
  }
  a2[1] = v9;
  return a2;
}
