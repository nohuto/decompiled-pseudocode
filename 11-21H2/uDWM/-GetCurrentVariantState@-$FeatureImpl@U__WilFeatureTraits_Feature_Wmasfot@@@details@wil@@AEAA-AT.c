/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180103A30
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180103864 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_Wmasfot@@@details@wil@@AEAA-ATw.c)
 * Callees:
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180014160 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EBE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

unsigned int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Wmasfot>::GetCurrentVariantState(
        __int64 a1,
        unsigned int *a2,
        int *a3)
{
  unsigned int FeatureVariant; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int *result; // rax
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF

  v14 = HIDWORD(a1);
  v13 = 0;
  FeatureVariant = (unsigned int)wil::details::WilApi_GetFeatureVariant(
                                   (wil::details *)0x1BCA48D,
                                   3LL,
                                   (__int64)&v15,
                                   &v13,
                                   a3);
  *a2 = 0;
  v5 = v13;
  v6 = FeatureVariant;
  a2[1] = 0;
  v7 = FeatureVariant & 0x100;
  *a2 &= ~0x100u;
  v8 = v5 != 0 ? 0x100 : 0;
  *a2 = (v8 | *a2) ^ ((unsigned __int16)(4 * FeatureVariant) ^ ((v5 != 0 ? 0x100 : 0) | (unsigned __int16)*a2)) & 0x200;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Test63>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Test63>::GetImpl'::`2'::impl,
    v8,
    256LL,
    v9);
  v10 = *a2 & 0xFFFF03FF;
  v11 = v6 & 0xFFFFFE7F;
  if ( v11 && (v10 |= (v11 & 0x3F) << 10, v7) )
    a2[1] = v15;
  else
    a2[1] = 0;
  result = a2;
  *a2 = v10;
  return result;
}
