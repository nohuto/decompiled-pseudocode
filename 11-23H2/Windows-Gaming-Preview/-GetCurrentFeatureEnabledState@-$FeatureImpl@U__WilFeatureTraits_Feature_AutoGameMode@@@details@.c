/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180041AE4
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800418F8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@w.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  int FeatureEnabledState; // eax
  unsigned int v4; // r9d
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  _QWORD *result; // rax

  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    FeatureEnabledState = g_wil_details_internalGetFeatureEnabledState(11015710LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      *a2 = 0LL;
      v5 = 0;
      goto LABEL_10;
    }
    FeatureEnabledState = g_wil_details_apiGetFeatureEnabledState(11015710LL, 0LL);
  }
  *a2 = 0LL;
  v4 = FeatureEnabledState & 0xFFFFFF3F;
  v5 = 8 * (FeatureEnabledState & 0x80 | (4 * (FeatureEnabledState & 0x40 | (4 * (FeatureEnabledState & 3)))));
  if ( (FeatureEnabledState & 0xFFFFFF3F) == 0 )
  {
LABEL_10:
    v6 = 64;
    goto LABEL_11;
  }
  v6 = 0;
  if ( v4 == 2 )
    v6 = 64;
LABEL_11:
  v7 = v6 | v5;
  v8 = 1;
  if ( (v7 & 0xC00) != 0xC00 && (v7 & 0x40) == 0 || (v7 & 0x40) == 0 )
    v8 = 0;
  result = a2;
  *(_DWORD *)a2 = v7 | v8;
  return result;
}
