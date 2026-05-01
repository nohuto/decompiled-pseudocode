/*
 * XREFs of ?GetRegionViewModelState@@YA?AW4SnapAssistRegionState@Switcher@Experiences@ComposableShell@WindowsInternal@@W41WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x1806026DC
 * Callers:
 *     ?AddRegionToViewModel@XamlSnapAssistViewHost@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@9ABI@@@Z @ 0x18060118C (-AddRegionToViewModel@XamlSnapAssistViewHost@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experience.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetRegionViewModelState(int a1)
{
  int v1; // ecx
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
    return 0LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  if ( v1 != 1 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      592LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)0x80070057LL,
      v3);
  return 2LL;
}
