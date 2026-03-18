/*
 * XREFs of CarInitiateBugcheck @ 0x1405D5914
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x1405D4450 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     DifiDbgPrint @ 0x1405D56D4 (DifiDbgPrint.c)
 */

void __fastcall __noreturn CarInitiateBugcheck(ULONG BugCheckCode, ULONG_PTR BugCheckParameter1, ULONG_PTR *a3)
{
  ULONG_PTR v4; // rdi
  const char *v5; // r8

  v4 = (unsigned int)BugCheckParameter1;
  v5 = (const char *)a3[3];
  if ( v5 )
    DifiDbgPrint(
      "Driver Verifier: Bugcheck initiated with Error Code: 0x%X Error Message: '%s'\n",
      BugCheckParameter1,
      v5);
  KeBugCheckEx(BugCheckCode, v4, *a3, a3[1], a3[2]);
}
