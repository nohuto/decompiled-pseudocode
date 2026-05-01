/*
 * XREFs of ?SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180053E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

int __fastcall CDesktopPositioner::SetViewStateForDesiredAppState(
        CDesktopPositioner *a1,
        struct IApplicationView *a2,
        int a3)
{
  int v3; // r8d
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
    return CDesktopPositioner::_MinimizeView(a1, a2);
  v3 = a3 - 1;
  if ( !v3 )
    return CDesktopPositioner::_RestoreView(a1, a2);
  if ( v3 == 1 )
    return CDesktopPositioner::_CloseView((CDesktopPositioner *)((char *)a1 - 120), a2);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3AC,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)0x8000FFFFLL,
    v5);
  return -2147418113;
}
