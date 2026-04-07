/*
 * XREFs of ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FEEE0
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800FE244 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800F05E0 (--$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_NullAlloc(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = -2147024882;
  wil::details::ReportFailure_Hr<0>(
    (__int64)this,
    272LL,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
    (__int64)a4,
    v4,
    retaddr,
    v5);
}
