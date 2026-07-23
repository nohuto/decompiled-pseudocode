/*
 * XREFs of RtlEqualSid @ 0x180010A40
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000AC00 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpOwnerAcesPresent @ 0x18001070C (RtlpOwnerAcesPresent.c)
 *     RtlpCompareKnownAces @ 0x18001096C (RtlpCompareKnownAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18006C714 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlSidDominates @ 0x18007FE80 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x180084CDC (RtlpValidOwnerSubjectContext.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800D6D50 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownObjectAces @ 0x1800F1C30 (RtlpCompareKnownObjectAces.c)
 *     RtlFindAceBySid @ 0x1800F46B4 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x180092B10 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4LL * *((unsigned __int8 *)Sid1 + 1) + 8) == 0;
}
