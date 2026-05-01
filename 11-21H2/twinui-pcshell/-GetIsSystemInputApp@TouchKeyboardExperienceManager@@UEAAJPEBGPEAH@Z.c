/*
 * XREFs of ?GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z @ 0x1800357F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18009EB10 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetIsSystemInputApp(
        TouchKeyboardExperienceManager *this,
        const unsigned __int16 *a2,
        int *a3)
{
  const WCHAR *v3; // rdi
  const WCHAR *v6; // rcx
  LPCWCH lpString1[2]; // [rsp+30h] [rbp-48h] BYREF
  int cchCount1; // [rsp+40h] [rbp-38h]
  unsigned __int64 v10; // [rsp+48h] [rbp-30h]

  v3 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
    a2);
  TouchKeyboardExperienceManager::GetCurrentInputAppId((char *)this - 144, lpString1);
  v6 = (const WCHAR *)lpString1;
  if ( v10 >= 8 )
    v6 = lpString1[0];
  *a3 = CompareStringOrdinal(v6, cchCount1, v3, -1, 1) == 2;
  std::wstring::_Tidy_deallocate(lpString1);
  return 0LL;
}
