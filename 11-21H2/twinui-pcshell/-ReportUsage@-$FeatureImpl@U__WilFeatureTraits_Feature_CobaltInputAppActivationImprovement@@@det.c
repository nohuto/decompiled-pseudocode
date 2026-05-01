/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0
 * Callers:
 *     ?GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z @ 0x1800357F0 (-GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z.c)
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180064E40 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18008D1B0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800B9E58 (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800BDAC0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C02D0 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180181988 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18022E232 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18022F360 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18022F548 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18045CF64 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18045D1B0 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x18045EA6C (_anonymous_namespace_--GetRelaunchPolicyFromActivationResult.c)
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180461D50 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x180462760 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1804641A8 (-RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1804696A8 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x180473180 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180475584 (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1804793DC (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BB848 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivation.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           26575666LL,
           ((unsigned int)v4 >> 8) & 1,
           ((unsigned int)v4 >> 9) & 1,
           &v9,
           v6,
           3);
}
