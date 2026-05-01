/*
 * XREFs of ??$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z @ 0x1801BB820
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x1801CF600 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_ResumeC.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_publish<int>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  result = (unsigned int)RtlPublishWnfStateData(WNF_EOA_FOCUS_SESSION_SINGLETON_INITIALIZED, 0LL, a2, 4LL) | 0x10000000;
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x361,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)result,
      0);
  return result;
}
