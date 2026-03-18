/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140007C28
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x140007B54 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140008630 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  char v8; // r8
  int v9; // edx
  int v10; // eax
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v4 = v2(57566014LL, 3LL);
  }
  else
  {
    v4 = 0;
  }
  *a2 = 0LL;
  v5 = 8 * (v4 & 0x80 | (4 * (v4 & 0x40 | (4 * (v4 & 3)))));
  *(_DWORD *)a2 = v5;
  if ( (v4 & 0xFFFFFF3F) != 0 )
  {
    v6 = 0;
    if ( (v4 & 0xFFFFFF3F) == 2 )
      v6 = 64;
  }
  else
  {
    v6 = 64;
  }
  v7 = v5 | v6;
  v8 = 0;
  v9 = 1;
  if ( (v7 & 0xC00) == 0xC00 )
  {
    v10 = v7 & 0x40;
LABEL_12:
    v8 = 1;
    goto LABEL_13;
  }
  v10 = v7 & 0x40;
  if ( (v7 & 0x40) != 0 )
    goto LABEL_12;
LABEL_13:
  if ( !v10 || !v8 )
    v9 = 0;
  result = a2;
  *(_DWORD *)a2 = v9 | v7;
  return result;
}
