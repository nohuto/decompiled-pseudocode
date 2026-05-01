/*
 * XREFs of ??$wnf_publish@K@wil@@YAXAEBU_WNF_STATE_NAME@@AEBK@Z @ 0x18050BD28
 * Callers:
 *     ?SaveUserSetting@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHH@Z @ 0x180515DB0 (-SaveUserSetting@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSe.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_publish<unsigned long>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  result = (unsigned int)RtlPublishWnfStateData(WNF_TKBN_DESKTOP_MODE_AUTO_IHM, 0LL, a2, 4LL) | 0x10000000;
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x361,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)result,
      0);
  return result;
}
