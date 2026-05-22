/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18008CF24
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800670D8 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectSupport@@@details@wil@@AE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EffectSupport>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64, int *, int *, __int64); // rax
  int v5; // edx
  int v6; // r9d
  int v7; // r8d
  unsigned int v8; // edx
  int *result; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = HIDWORD(a1);
  v10 = 0;
  v4 = (__int64 (__fastcall *)(__int64, __int64, int *, int *, __int64))g_wil_details_internalGetFeatureVariant;
  if ( g_wil_details_internalGetFeatureVariant
    || (v4 = (__int64 (__fastcall *)(__int64, __int64, int *, int *, __int64))g_wil_details_apiGetFeatureVariant) != 0LL )
  {
    v5 = v4(9448552LL, 3LL, &v12, &v10, a3);
  }
  else
  {
    v5 = 0;
  }
  v6 = v5 & 0x100;
  v7 = (v10 != 0 ? 0x400 : 0) | (16 * (v5 & 0x80));
  *a2 = v7;
  v8 = v5 & 0xFFFFFE7F;
  if ( v8 && (v7 |= (v8 & 0x3F) << 12, v6) )
    a2[1] = v12;
  else
    a2[1] = 0;
  result = a2;
  *a2 = v7;
  return result;
}
