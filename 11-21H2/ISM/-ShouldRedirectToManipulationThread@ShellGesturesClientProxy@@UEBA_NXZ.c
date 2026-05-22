/*
 * XREFs of ?ShouldRedirectToManipulationThread@ShellGesturesClientProxy@@UEBA_NXZ @ 0x18014FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn ShellGesturesClientProxy::ShouldRedirectToManipulationThread(
        ShellGesturesClientProxy *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    273LL,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\shell"
             "gesturesclientproxy.cpp",
    a4);
}
