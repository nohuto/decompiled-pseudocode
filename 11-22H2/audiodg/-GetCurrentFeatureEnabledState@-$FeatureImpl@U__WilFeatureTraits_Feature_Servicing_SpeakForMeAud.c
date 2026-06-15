/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x14002A7D8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14002A6D4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  char v7; // r8
  int v8; // edx
  int v9; // eax
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v4 = v2(53104070LL, 3LL);
  }
  else
  {
    v4 = 0;
  }
  *a2 = 0LL;
  v5 = 8 * (v4 & 0x80 | (4 * (v4 & 0x40 | (4 * (v4 & 3)))));
  if ( (v4 & 0xFFFFFF3F) != 0 )
  {
    v6 = 0;
    if ( (v4 & 0xFFFFFF3F) == 2 )
      v6 = 64;
    v5 |= v6;
  }
  v7 = 0;
  v8 = 1;
  if ( (v5 & 0xC00) == 0xC00 )
  {
    v9 = v5 & 0x40;
LABEL_12:
    v7 = 1;
    goto LABEL_13;
  }
  v9 = v5 & 0x40;
  if ( (v5 & 0x40) != 0 )
    goto LABEL_12;
LABEL_13:
  if ( !v9 || !v7 )
    v8 = 0;
  result = a2;
  *(_DWORD *)a2 = v8 | v5;
  return result;
}
