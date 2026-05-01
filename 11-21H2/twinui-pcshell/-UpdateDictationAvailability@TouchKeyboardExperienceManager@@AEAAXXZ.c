/*
 * XREFs of ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BCC14
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_c2ab84185f0f22aae4f946284935bdbd__void___cdecl(void)_::operator() @ 0x18045B950 (wistd--__function--__func__lambda_c2ab84185f0f22aae4f946284935bdbd__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1800BBB00 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingCorrectionUXTextStylingOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BBB40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingCorrectionUXTextStylingOnDeskt.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingCorrectionUXCandUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BBD28 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingCorrectionUXCandUIOnDesktop@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingEdgeContextMenuOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BBF84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingEdgeContextMenuOnDesktop@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BD010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop@@@details@wi.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1800BD238 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800BFD00 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     IsUserAssignedAccessSingleApp @ 0x18010773C (IsUserAssignedAccessSingleApp.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall TouchKeyboardExperienceManager::UpdateDictationAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2)
{
  int MdmPolicyValue; // ebx
  TouchKeyboardExperienceManager *v4; // rcx
  KeyboardHosting::TabTipAdapter *v5; // rdi
  HSTRING v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  KeyboardHosting::TabTipAdapter *v11; // rdi
  HSTRING v12; // rbx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  signed int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  KeyboardHosting::TabTipAdapter *v19; // rdi
  HSTRING v20; // rbx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  KeyboardHosting::TabTipAdapter *v24; // rdi
  HSTRING v25; // rbx
  int v26; // eax
  KeyboardHosting::TabTipAdapter *v27; // rdi
  HSTRING v28; // rbx
  int v29; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v31; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v32; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v33; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    a2);
  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"TouchKeyboardDictationButtonAvailability");
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 92) + 40LL) + 176LL))(
    *(_QWORD *)(*((_QWORD *)this + 92) + 40LL),
    6LL,
    0LL);
  if ( MdmPolicyValue == 2
    || !MdmPolicyValue
    && ((unsigned int)IsUserAssignedAccessSingleApp(-4LL)
     || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v4))
    || IsPPIEdition() )
  {
    v27 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v32, L"1", 2u, 1u);
    v28 = v33;
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Dictation_Disabled", 0x13u, 0x12u);
    v29 = KeyboardHosting::TabTipAdapter::SetShellPreference(v27, v31, v28);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA41,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v29);
  }
  else
  {
    v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v6 = v31;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v32, L"Dictation_Disabled", 0x13u, 0x12u);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v33, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA45,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 92) + 40LL) + 176LL))(
      *(_QWORD *)(*((_QWORD *)this + 92) + 40LL),
      6LL,
      v8);
  }
  LOBYTE(v10) = 3;
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop>::GetImpl'::`2'::impl,
    v9,
    v10);
  v11 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v33 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v32, L"1", 2u, 1u);
  v12 = v33;
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoiceTyping_InFlowConsent_Enabled",
    0x22u,
    0x21u);
  v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v11, v31, v12);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA4B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceTypingEdgeContextMenuOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VoiceTypingEdgeContextMenuOnDesktop>::GetImpl'::`2'::impl,
    1u,
    v14,
    v15);
  v16 = SHRegSetBOOL(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\Settings", L"VoiceTypingEnabled", 1);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA56,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceTypingCorrectionUXCandUIOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VoiceTypingCorrectionUXCandUIOnDesktop>::GetImpl'::`2'::impl,
    0,
    v17,
    v18);
  v19 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v33 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v32, L"0", 2u, 1u);
  v20 = v33;
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoiceTyping_CorrectionUX_Enabled",
    0x21u,
    0x20u);
  v21 = KeyboardHosting::TabTipAdapter::SetShellPreference(v19, v31, v20);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA6B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v21);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceTypingCorrectionUXTextStylingOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VoiceTypingCorrectionUXTextStylingOnDesktop>::GetImpl'::`2'::impl,
    0,
    v22,
    v23);
  v24 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v33 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v32, L"0", 2u, 1u);
  v25 = v33;
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoiceTyping_CorrectionUXTextStyling_Enabled",
    0x2Cu,
    0x2Bu);
  v26 = KeyboardHosting::TabTipAdapter::SetShellPreference(v24, v31, v25);
  if ( v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA74,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v26);
}
