/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000734C
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180007280 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@AEAA-AT.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CTUATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800137D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CTUATest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180014160 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EBE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Test63@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

_DWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::GetCurrentVariantState(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  unsigned int FeatureVariant; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  _DWORD *result; // rax
  int *v13; // [rsp+28h] [rbp-10h]
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v15 = HIDWORD(a1);
  v14 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant(
                     (wil::details *)0x1C52B0C,
                     3u,
                     (enum FEATURE_CHANGE_TIME)&v16,
                     &v14,
                     a3,
                     v13);
  *a2 = 0;
  v5 = v14;
  v6 = FeatureVariant;
  a2[1] = 0;
  v7 = FeatureVariant & 0x100;
  *a2 &= ~0x100u;
  *a2 = ((v5 != 0 ? 0x100 : 0) | *a2) ^ ((unsigned __int16)(4 * FeatureVariant) ^ ((v5 != 0 ? 0x100 : 0) | (unsigned __int16)*a2)) & 0x200;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CTUATest>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_CTUATest>::GetImpl'::`2'::impl);
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
    v8,
    0LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Test63>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Test63>::GetImpl'::`2'::impl);
  v9 = *a2;
  v10 = v6 & 0xFFFFFE7F;
  if ( v10 )
  {
    v11 = ((unsigned __int16)v9 ^ (unsigned __int16)((_WORD)v10 << 10)) & 0xFC00 ^ v9;
    if ( v7 )
      a2[1] = v16;
    else
      a2[1] = 0;
  }
  else
  {
    a2[1] = 0;
    v11 = v9 & 0xFFFF03FF | 0x400;
  }
  result = a2;
  *a2 = v11;
  return result;
}
