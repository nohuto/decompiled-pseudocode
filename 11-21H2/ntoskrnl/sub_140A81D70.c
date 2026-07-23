/*
 * XREFs of sub_140A81D70 @ 0x140A81D70
 * Callers:
 *     sub_1405FE008 @ 0x1405FE008 (sub_1405FE008.c)
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 */

char __fastcall sub_140A81D70(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_140A8ABF8(a1);
  if ( v1 )
    LOBYTE(v1) = *(_BYTE *)(v1 + 48);
  return v1;
}
