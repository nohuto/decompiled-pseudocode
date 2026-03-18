/*
 * XREFs of PfFbBufferListShutdown @ 0x1405830D4
 * Callers:
 *     PfTCleanup @ 0x14097F218 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
