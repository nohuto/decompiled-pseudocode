/*
 * XREFs of PfFbBufferListShutdown @ 0x140583534
 * Callers:
 *     PfTCleanup @ 0x14097F368 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
