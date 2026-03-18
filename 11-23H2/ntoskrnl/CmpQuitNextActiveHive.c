/*
 * XREFs of CmpQuitNextActiveHive @ 0x140A26D44
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1406162CC (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 205);
}
