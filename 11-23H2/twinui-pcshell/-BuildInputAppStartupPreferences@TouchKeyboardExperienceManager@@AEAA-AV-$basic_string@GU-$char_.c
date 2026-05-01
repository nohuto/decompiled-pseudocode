/*
 * XREFs of ?BuildInputAppStartupPreferences@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18050E82C
 * Callers:
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F0958 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TouchKeyboardExperienceManager::BuildInputAppStartupPreferences(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9

  *a2 = 0LL;
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
  return a2;
}
