/*
 * XREFs of ?UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BD670
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_b940c7e2762977be6525608e36af3ab0__void___cdecl(void)_::operator() @ 0x18045B8E0 (wistd--__function--__func__lambda_b940c7e2762977be6525608e36af3ab0__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BD824 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800BFD00 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateEmojiInputAvailability(
        TouchKeyboardExperienceManager *this,
        __int64 a2)
{
  int MdmPolicyValue; // r14d
  __int64 v4; // rdx
  __int64 v5; // rdx
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
  int v8; // eax
  KeyboardHosting::TabTipAdapter *v9; // rdi
  HSTRING v10; // rbx
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r8
  HSTRING v16; // rbx
  unsigned int v17; // r8d
  __int64 v18; // rax
  int v19; // eax
  const WCHAR *v20; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER v21; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v22; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v24; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    a2);
  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"TouchKeyboardEmojiButtonAvailability");
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    v4);
  v20 = L"TouchKeyboardEmojiEnabled";
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    v5);
  v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
  v7 = v24;
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v21, L"EmojiKeyEnabled", 0x10u, 0xFu);
  v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v22, v7);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9F9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v22 = 0LL;
  if ( MdmPolicyValue == 2 )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v21, L"0", 2u, 1u);
    v16 = v22;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &v20, v17);
    v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, *(HSTRING *)(v18 + 24), v16);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9FF,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 92) + 40LL) + 176LL))(
      *(_QWORD *)(*((_QWORD *)this + 92) + 40LL),
      3LL);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 92) + 40LL) + 176LL))(
      *(_QWORD *)(*((_QWORD *)this + 92) + 40LL),
      4LL);
  }
  else
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v21, L"1", 2u, 1u);
    v10 = v22;
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &v20, v11);
    v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, *(HSTRING *)(v12 + 24), v10);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA05,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    LOBYTE(v14) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 92) + 40LL) + 176LL))(
      *(_QWORD *)(*((_QWORD *)this + 92) + 40LL),
      3LL,
      v14);
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 92) + 40LL) + 176LL))(
      *(_QWORD *)(*((_QWORD *)this + 92) + 40LL),
      4LL,
      v15);
  }
}
