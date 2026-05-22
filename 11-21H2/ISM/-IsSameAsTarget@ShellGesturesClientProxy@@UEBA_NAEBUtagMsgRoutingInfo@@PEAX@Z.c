/*
 * XREFs of ?IsSameAsTarget@ShellGesturesClientProxy@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x18014F820
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn ShellGesturesClientProxy::IsSameAsTarget(
        ShellGesturesClientProxy *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    258LL,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\shell"
             "gesturesclientproxy.cpp",
    a4);
}
