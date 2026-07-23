/*
 * XREFs of SepIdAssignableAsOwner @ 0x1406C7A68
 * Callers:
 *     SepValidOwnerSubjectContext @ 0x1406C7964 (SepValidOwnerSubjectContext.c)
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
