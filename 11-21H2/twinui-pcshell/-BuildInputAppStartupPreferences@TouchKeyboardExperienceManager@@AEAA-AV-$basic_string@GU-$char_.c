/*
 * XREFs of ?BuildInputAppStartupPreferences@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18045CC34
 * Callers:
 *     _lambda_5bca6f87553ee4a307de3070de971dc8_::operator() @ 0x1801B0020 (_lambda_5bca6f87553ee4a307de3070de971dc8_--operator().c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BD010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BD824 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TouchKeyboardExperienceManager::BuildInputAppStartupPreferences(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r9

  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  std::wstring::append(a2, L"MultiViewMode", 0xDuLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"Desktop", 7uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"BlankDefaultViewEnabled", 0x17uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"StandardViewsEnabled", 0x14uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"ToolBarEnabled", 0xEuLL);
  std::wstring::append(a2, L" ", 1uLL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    1u,
    v3,
    v4);
  std::wstring::append(a2, L"ModernUX", 8uLL);
  std::wstring::append(a2, L" ", 1uLL);
  std::wstring::append(a2, L"SuggestionUIEnabled", 0x13uLL);
  std::wstring::append(a2, L" ", 1uLL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VoiceTypingModernUXOnDesktop>::GetImpl'::`2'::impl,
    1u,
    3u,
    v5);
  std::wstring::append(a2, L"VoiceTypingUXEnabled", 0x14uLL);
  std::wstring::append(a2, L" ", 1uLL);
  return a2;
}
