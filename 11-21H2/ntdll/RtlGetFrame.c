/*
 * XREFs of RtlGetFrame @ 0x1800D9690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_TEB_ACTIVE_FRAME *RtlGetFrame()
{
  return NtCurrentTeb()->ActiveFrame;
}
