/*
 * XREFs of RtlDllShutdownInProgress @ 0x18004FE10
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008E600 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_1801843C8 != 0;
}
