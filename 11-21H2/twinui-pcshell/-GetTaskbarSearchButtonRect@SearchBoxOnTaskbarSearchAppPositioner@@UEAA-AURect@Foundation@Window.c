/*
 * XREFs of ?GetTaskbarSearchButtonRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A6070
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802D62D8 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __noreturn SearchBoxOnTaskbarSearchAppPositioner::GetTaskbarSearchButtonRect()
{
  unsigned int v0; // eax
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = wil::verify_hresult<long>(2147500033LL);
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x261,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchboxontaskbarsearchapppositioner.cpp",
    (const char *)v0,
    v1);
}
