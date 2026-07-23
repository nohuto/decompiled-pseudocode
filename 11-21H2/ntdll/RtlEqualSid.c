/*
 * XREFs of RtlEqualSid @ 0x180012520
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x18000E418 (RtlpValidOwnerSubjectContext.c)
 *     RtlSidDominates @ 0x18000EE00 (RtlSidDominates.c)
 *     RtlpOwnerAcesPresent @ 0x1800121E8 (RtlpOwnerAcesPresent.c)
 *     RtlpCompareKnownAces @ 0x180012450 (RtlpCompareKnownAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800718B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180076A50 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800D6CE0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownObjectAces @ 0x1800F21E0 (RtlpCompareKnownObjectAces.c)
 *     RtlFindAceBySid @ 0x1800F4974 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x180097B10 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4LL * *((unsigned __int8 *)Sid1 + 1) + 8) == 0;
}
