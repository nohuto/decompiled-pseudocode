/*
 * XREFs of ?GetFocusTarget@MPCFocusTarget@@UEAAPEAUIFocusInputTarget@@XZ @ 0x18002C050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IFocusInputTarget *__fastcall MPCFocusTarget::GetFocusTarget(MPCFocusTarget *this)
{
  return (struct IFocusInputTarget *)*((_QWORD *)this + 1);
}
