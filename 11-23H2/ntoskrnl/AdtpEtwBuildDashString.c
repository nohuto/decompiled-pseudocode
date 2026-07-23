/*
 * XREFs of AdtpEtwBuildDashString @ 0x1407EA608
 * Callers:
 *     AdtpPackageParameters @ 0x1403997E4 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x140399D80 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1406702B0 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     <none>
 */

const char *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  const char *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = "-";
  *(_QWORD *)a1 = "-";
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
