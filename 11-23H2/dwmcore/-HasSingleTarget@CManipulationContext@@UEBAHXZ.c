/*
 * XREFs of ?HasSingleTarget@CManipulationContext@@UEBAHXZ @ 0x180105210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::HasSingleTarget(CManipulationContext *this)
{
  return (*((unsigned __int8 *)this + 28) >> 3) & 1;
}
