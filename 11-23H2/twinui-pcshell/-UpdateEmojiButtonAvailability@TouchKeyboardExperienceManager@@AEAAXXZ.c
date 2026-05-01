/*
 * XREFs of ?UpdateEmojiButtonAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0810
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_39e4fc6123a48d8558dd82b5da7fc671__void___cdecl(void)_::operator() @ 0x18050D120 (wistd--__function--__func__lambda_39e4fc6123a48d8558dd82b5da7fc671__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800A33AC (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F0958 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateEmojiButtonAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // r14d
  __int64 v3; // rdx
  __int64 v4; // rdx
  KeyboardHosting::TabTipAdapter *v5; // rdi
  HSTRING v6; // rbx
  int v7; // eax
  KeyboardHosting::TabTipAdapter *v8; // rdi
  HSTRING v9; // rbx
  unsigned int v10; // r8d
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  HSTRING v13; // rbx
  unsigned int v14; // r8d
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  const WCHAR *v17; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER v18; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v19; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v21; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue((__int64)L"TouchKeyboardEmojiButtonAvailability");
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    v3);
  v17 = L"TouchKeyboardEmojiEnabled";
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    v4);
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
  v6 = v21;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"EmojiKeyEnabled", 0x10u, 0xFu);
  v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v19, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8DA,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      (int)v17);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v19 = 0LL;
  if ( MdmPolicyValue == 2 )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"0", 2u, 1u);
    v13 = v19;
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v17, v14);
    v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, (HSTRING)v15[1].Reserved.Reserved1, v13);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8DF,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16,
        (int)v17);
  }
  else
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"1", 2u, 1u);
    v9 = v19;
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v17, v10);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, (HSTRING)v11[1].Reserved.Reserved1, v9);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E3,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12,
        (int)v17);
  }
}
