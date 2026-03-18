/*
 * XREFs of RtlOwnerAcesPresent @ 0x140337600
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x140337620 (RtlpOwnerAcesPresent.c)
 */

__int64 __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  return RtlpOwnerAcesPresent(0LL, a1);
}
