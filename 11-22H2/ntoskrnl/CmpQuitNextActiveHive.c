/*
 * XREFs of CmpQuitNextActiveHive @ 0x140A26DF4
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14061633C (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 205);
}
