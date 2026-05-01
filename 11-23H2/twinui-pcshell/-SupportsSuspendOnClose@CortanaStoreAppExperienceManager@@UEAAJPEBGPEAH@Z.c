/*
 * XREFs of ?SupportsSuspendOnClose@CortanaStoreAppExperienceManager@@UEAAJPEBGPEAH@Z @ 0x18004CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSV@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004CB14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSV@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z @ 0x18004CD28 (-SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::SupportsSuspendOnClose(
        CortanaStoreAppExperienceManager *this,
        const unsigned __int16 *a2,
        int *a3)
{
  const unsigned __int16 *v4; // rdi
  const struct winrt::hstring *v5; // rdx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  *a3 = 0;
  LOBYTE(a2) = 1;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnSV>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSV>::GetImpl'::`2'::impl,
      a2);
    winrt::hstring::hstring((winrt::hstring *)&v9, v4);
    *a3 = ConversationalAgentHelpers::SupportsSuspendOnClose((ConversationalAgentHelpers *)&v9, v5);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x276,
                           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v6);
  }
  return result;
}
