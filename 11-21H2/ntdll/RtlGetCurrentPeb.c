/*
 * XREFs of RtlGetCurrentPeb @ 0x180109650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PPEB RtlGetCurrentPeb(void)
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}
