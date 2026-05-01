/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B898C
 * Callers:
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18006A3D8 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1800B0904 (-RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?UpdateAnimationStateNotificationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800B88D0 (-UpdateAnimationStateNotificationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18045B060 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18045D340 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18045F8A4 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180463910 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180472230 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180473890 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x180476080 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x1804831E0 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B8A14 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAn.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::ReportUsage(
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
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           29650567LL,
           ((unsigned int)v4 >> 8) & 1,
           ((unsigned int)v4 >> 9) & 1,
           &v9,
           v6,
           3);
}
