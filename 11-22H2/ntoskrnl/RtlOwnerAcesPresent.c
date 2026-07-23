/*
 * XREFs of RtlOwnerAcesPresent @ 0x140337460
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x140337480 (RtlpOwnerAcesPresent.c)
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0LL, pAcl);
}
