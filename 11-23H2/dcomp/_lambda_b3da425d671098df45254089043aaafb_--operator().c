/*
 * XREFs of _lambda_b3da425d671098df45254089043aaafb_::operator() @ 0x180136540
 * Callers:
 *     ?SetPositionInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@_N@Z @ 0x18013B1E4 (-SetPositionInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVe.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall lambda_b3da425d671098df45254089043aaafb_::operator()(__int64 a1, float a2, float a3, float a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 <= a2 && a2 <= a4 )
    return 0LL;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x14F,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
    (const char *)0x80070057LL,
    (int)"Invalid PositionInertiaDecayRate specified: %.2f. It must be within 0-1.",
    COERCE_CONST_CHAR_(a2));
  return 2147942487LL;
}
