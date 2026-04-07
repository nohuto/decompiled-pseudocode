/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057FD4
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000E838 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA-ATw.c)
 * Callees:
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180014160 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005808C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKi.c)
 */

_DWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCurrentVariantState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  unsigned int FeatureVariant; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  _DWORD *result; // rax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v12 = HIDWORD(a1);
  v11 = 0;
  FeatureVariant = (unsigned int)wil::details::WilApi_GetFeatureVariant(
                                   (wil::details *)0x1C5780D,
                                   1LL,
                                   (__int64)&v13,
                                   &v11,
                                   a3);
  *a2 = 0;
  v5 = v11;
  v6 = FeatureVariant;
  a2[1] = 0;
  v7 = FeatureVariant & 0x100;
  *a2 &= ~0x100u;
  *a2 = ((v5 != 0 ? 0x100 : 0) | *a2) ^ ((unsigned __int16)(4 * FeatureVariant) ^ ((v5 != 0 ? 0x100 : 0) | (unsigned __int16)*a2)) & 0x200;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_VTest>::GetImpl'::`2'::impl);
  v8 = *a2 & 0xFFFF03FF;
  v9 = v6 & 0xFFFFFE7F;
  if ( v9 && (v8 |= (v9 & 0x3F) << 10, v7) )
    a2[1] = v13;
  else
    a2[1] = 8;
  result = a2;
  *a2 = v8;
  return result;
}
