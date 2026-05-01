/*
 * XREFs of ?IsSearchBoxOnTaskbarMode@TaskbarSearchAppPositioner@@UEAA_NAEBUtagRECT@@@Z @ 0x1801A6BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802D62D8 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn TaskbarSearchAppPositioner::IsSearchBoxOnTaskbarMode(
        TaskbarSearchAppPositioner *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = wil::verify_hresult<long>(2147500033LL);
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x160,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\taskbarsearchapppositioner.cpp",
    (const char *)v2,
    v3);
}
