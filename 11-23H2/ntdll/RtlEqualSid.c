/*
 * XREFs of RtlEqualSid @ 0x180010830
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000A9E0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpOwnerAcesPresent @ 0x1800104FC (RtlpOwnerAcesPresent.c)
 *     RtlpCompareKnownAces @ 0x18001075C (RtlpCompareKnownAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18006C714 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlSidDominates @ 0x1800804F0 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800854DC (RtlpValidOwnerSubjectContext.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800D66B0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownObjectAces @ 0x1800F3040 (RtlpCompareKnownObjectAces.c)
 *     RtlFindAceBySid @ 0x1800F5AC4 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x180093310 (memcmp.c)
 */

bool __fastcall RtlEqualSid(unsigned __int8 *a1, _WORD *a2)
{
  return *(_WORD *)a1 == *a2 && memcmp(a1, a2, 4LL * a1[1] + 8) == 0;
}
