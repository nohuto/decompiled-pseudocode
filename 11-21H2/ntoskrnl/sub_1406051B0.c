/*
 * XREFs of sub_1406051B0 @ 0x1406051B0
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140605160 @ 0x140605160 (sub_140605160.c)
 */

void __fastcall __noreturn sub_1406051B0(ULONG BugCheckCode, ULONG_PTR BugCheckParameter1, ULONG_PTR *a3)
{
  ULONG_PTR v4; // rdi
  const char *v5; // r8

  v4 = (unsigned int)BugCheckParameter1;
  v5 = (const char *)a3[3];
  if ( v5 )
    sub_140605160(
      "Driver Verifier: Bugcheck initiated with Error Code: 0x%X Error Message: '%s'\n",
      BugCheckParameter1,
      v5);
  KeBugCheckEx(BugCheckCode, v4, *a3, a3[1], a3[2]);
}
