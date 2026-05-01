/*
 * XREFs of ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F15A0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_VTCUXD@@@details@wil@@QEAA_NXZ @ 0x180186E54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_VTCUXD@@@details@wil@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTLR@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180199BDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTLR@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     ?UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18019AB28 (-UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall TouchKeyboardExperienceManager::UpdateDictationAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  KeyboardHosting::TabTipAdapter *v4; // rdi
  HSTRING v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  KeyboardHosting::TabTipAdapter *v8; // rdi
  HSTRING v9; // rbx
  int v10; // eax
  char IsEnabled; // al
  KeyboardHosting::TabTipAdapter *v12; // rdi
  HSTRING v13; // rbx
  int v14; // eax
  KeyboardHosting::TabTipAdapter *v15; // rdi
  HSTRING v16; // rbx
  int v17; // eax
  KeyboardHosting::TabTipAdapter *v18; // rdi
  HSTRING v19; // rbx
  int v20; // eax
  HSTRING v21; // rbx
  int v22; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v24; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v25; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v26; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 73) + 48LL) + 176LL))(
    *(_QWORD *)(*((_QWORD *)this + 73) + 48LL),
    6LL,
    a3);
  v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
  v5 = v24;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"Dictation_Disabled", 0x13u, 0x12u);
  v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v26, v5);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x90C,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      (int)hstringHeader.Reserved.Reserved1);
  TouchKeyboardExperienceManager::UpdateDictationKeyAvailability(this);
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTLR>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VTLR>::GetImpl'::`2'::impl,
    v7);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"1", 2u, 1u);
  v9 = v26;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoiceTyping_LocalRecognizer_Enabled",
    0x24u,
    0x23u);
  v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, v24, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x912,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      (int)hstringHeader.Reserved.Reserved1);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTCUXD>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_VTCUXD>::GetImpl'::`2'::impl);
  v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v26 = 0LL;
  if ( IsEnabled )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"1", 2u, 1u);
    v13 = v26;
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"VoiceTyping_CorrectionUX_Enabled",
      0x21u,
      0x20u);
    v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, v24, v13);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x91B,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14,
        (int)hstringHeader.Reserved.Reserved1);
  }
  else
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"0", 2u, 1u);
    v21 = v26;
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"VoiceTyping_CorrectionUX_Enabled",
      0x21u,
      0x20u);
    v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, v24, v21);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x91F,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v22,
        (int)hstringHeader.Reserved.Reserved1);
  }
  v15 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"0", 2u, 1u);
  v16 = v26;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoiceTyping_CorrectionUXCandidateList_Enabled",
    0x2Eu,
    0x2Du);
  v17 = KeyboardHosting::TabTipAdapter::SetShellPreference(v15, v24, v16);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x928,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v17,
      (int)hstringHeader.Reserved.Reserved1);
  v18 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"0", 2u, 1u);
  v19 = v26;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoiceTyping_CorrectionUXTextStyling_Enabled",
    0x2Cu,
    0x2Bu);
  v20 = KeyboardHosting::TabTipAdapter::SetShellPreference(v18, v24, v19);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x931,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v20,
      (int)hstringHeader.Reserved.Reserved1);
}
