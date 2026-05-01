/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18020A2DC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180209CE4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@det.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18011797C (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EEFAC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLabVal@@@details@wil@@QEAAX_NW4Report.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18020C288 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation@@@de.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18020C2C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XInputHidExclusive@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18020C300 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XInputHidExclusive@@@de.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XboxGamepadSupport>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // rdx
  int v9; // eax
  bool v10; // cl
  int v11; // edi
  char v12; // si

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x3432955,
                                        3LL,
                                        a3,
                                        a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v7;
  if ( (_DWORD)v6 )
  {
    v9 = 0;
    if ( (_DWORD)v6 == 2 )
      v9 = 64;
    v8 = v9 | (unsigned int)v7;
  }
  else
  {
    v8 = v7 | 0x40u;
  }
  *(_DWORD *)a2 = v8;
  v10 = 0;
  v11 = 1;
  if ( (v8 & 0xC00) == 0xC00 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v8 & 0x40) == 0 )
      goto LABEL_17;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLabVal>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestLabVal>::GetImpl'::`2'::impl,
    v8,
    3072LL,
    v6);
  v10 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XInputHidExclusive>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_XInputHidExclusive>::GetImpl'::`2'::impl)
     && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_AdminGamepadInjection>::GetImpl'::`2'::impl)
     && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation>::GetImpl'::`2'::impl);
  if ( v12 && !v10 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_17:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v10 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
