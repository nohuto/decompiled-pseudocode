/*
 * XREFs of ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x18020B9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::CanSkipChildren(CInteraction *this)
{
  return CInteractionProcessor::CanSkipChildren((CInteraction *)((char *)this + 288));
}
