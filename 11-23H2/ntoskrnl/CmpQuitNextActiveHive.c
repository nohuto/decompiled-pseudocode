/*
 * XREFs of CmpQuitNextActiveHive @ 0x140A26FF4
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14061681C (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 205);
}
