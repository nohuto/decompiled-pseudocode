/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1406B828C
 * Callers:
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8234 (PsTestProtectedProcessIncompatibility.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B82BC (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(char a1, PS_PROTECTION a2, PS_PROTECTION a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 )
    return RtlTestProtectedAccess(a2, a3) == 0;
  return v3;
}
