/*
 * XREFs of RtlGetFrame @ 0x180088100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PTEB_ACTIVE_FRAME RtlGetFrame(void)
{
  return NtCurrentTeb()->ActiveFrame;
}
