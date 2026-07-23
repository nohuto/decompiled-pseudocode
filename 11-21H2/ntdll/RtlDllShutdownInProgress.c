/*
 * XREFs of RtlDllShutdownInProgress @ 0x18005B310
 * Callers:
 *     RtlResetNtUserPfn @ 0x1800936B0 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_18017A188 != 0;
}
