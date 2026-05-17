/*
 * XREFs of RtlDllShutdownInProgress @ 0x18004FCB0
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008EE00 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

bool RtlDllShutdownInProgress()
{
  return byte_180187488 != 0;
}
