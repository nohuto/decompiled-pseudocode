/*
 * XREFs of ?GetTaskbarSearchButtonRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x18047FA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __noreturn SearchBoxOnTaskbarSearchAppPositioner::GetTaskbarSearchButtonRect()
{
  int v0; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x2B4,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchboxontaskbarsearchapppositioner.cpp",
    (const char *)0x80004001LL,
    v0);
}
