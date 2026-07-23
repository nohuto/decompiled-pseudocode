/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1406B825C
 * Callers:
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8204 (PsTestProtectedProcessIncompatibility.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B828C (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(char a1, PS_PROTECTION a2, PS_PROTECTION a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 )
    return RtlTestProtectedAccess(a2, a3) == 0;
  return v3;
}
