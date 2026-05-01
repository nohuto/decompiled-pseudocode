/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801877C8
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180164DE0 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATwi.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180187880 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

_DWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCurrentVariantState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  unsigned int FeatureVariant; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _DWORD *result; // rax
  int *v12; // [rsp+28h] [rbp-10h]
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v14 = HIDWORD(a1);
  v13 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant(
                     (wil::details *)0x1C567CD,
                     (unsigned int)a2,
                     (enum FEATURE_CHANGE_TIME)&v15,
                     &v13,
                     a3,
                     v12);
  *a2 = 0;
  v5 = v13;
  v6 = FeatureVariant;
  a2[1] = 0;
  v7 = FeatureVariant & 0x100;
  *a2 &= ~0x100u;
  *a2 = ((v5 != 0 ? 0x100 : 0) | *a2) ^ ((unsigned __int16)(4 * FeatureVariant) ^ ((v5 != 0 ? 0x100 : 0) | (unsigned __int16)*a2)) & 0x200;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    1u,
    0,
    v8);
  v9 = *a2 & 0xFFFF03FF;
  v10 = v6 & 0xFFFFFE7F;
  if ( v10 && (v9 |= (v10 & 0x3F) << 10, v7) )
    a2[1] = v15;
  else
    a2[1] = 1966852;
  result = a2;
  *a2 = v9;
  return result;
}
