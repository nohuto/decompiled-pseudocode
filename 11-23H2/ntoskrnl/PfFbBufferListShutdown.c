/*
 * XREFs of PfFbBufferListShutdown @ 0x140583044
 * Callers:
 *     PfTCleanup @ 0x14097F168 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A340 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
