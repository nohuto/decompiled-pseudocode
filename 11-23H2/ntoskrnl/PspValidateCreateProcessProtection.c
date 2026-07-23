/*
 * XREFs of PspValidateCreateProcessProtection @ 0x1406B90F0
 * Callers:
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B82BC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspValidateCreateProcessProtection(
        PS_PROTECTION *a1,
        __int64 a2,
        char a3,
        char a4,
        PS_PROTECTION Source)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( (a4 & 4) != 0
    && a3
    && (*(_DWORD *)(a2 + 4) & 0x800) == 0
    && (dword_140A78E34[3 * ((unsigned __int64)a1[2170].Level >> 4)] & 0x40) != 0
    && !RtlTestProtectedAccess(Source, a1[2170]) )
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
