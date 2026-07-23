/*
 * XREFs of CarReportRuleViolation @ 0x140603FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406038FC @ 0x1406038FC (sub_1406038FC.c)
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 */

__int64 __fastcall CarReportRuleViolation(__int64 a1)
{
  __int64 *v1; // rax
  int v2; // edx
  int v3; // r10d

  v1 = sub_1406038FC(a1, a1);
  if ( v1 )
    return CarReportRuleViolationForTriage(*(_DWORD *)v1, v3 | (unsigned int)((v2 << 16) + 0x10000));
  else
    return 3221226021LL;
}
