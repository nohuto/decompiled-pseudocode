/*
 * XREFs of RtlCreateAcl @ 0x1407244A0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     sub_140257C7C @ 0x140257C7C (sub_140257C7C.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     sub_1403CE4A4 @ 0x1403CE4A4 (sub_1403CE4A4.c)
 *     sub_14041A13C @ 0x14041A13C (sub_14041A13C.c)
 *     sub_14062C598 @ 0x14062C598 (sub_14062C598.c)
 *     sub_14063BB90 @ 0x14063BB90 (sub_14063BB90.c)
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_1406C32B0 @ 0x1406C32B0 (sub_1406C32B0.c)
 *     sub_1406CBD5C @ 0x1406CBD5C (sub_1406CBD5C.c)
 *     sub_1406CC960 @ 0x1406CC960 (sub_1406CC960.c)
 *     sub_1406E7694 @ 0x1406E7694 (sub_1406E7694.c)
 *     sub_140724550 @ 0x140724550 (sub_140724550.c)
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     sub_14074F2EC @ 0x14074F2EC (sub_14074F2EC.c)
 *     sub_14078DAB0 @ 0x14078DAB0 (sub_14078DAB0.c)
 *     sub_1407B468C @ 0x1407B468C (sub_1407B468C.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     sub_1407F385C @ 0x1407F385C (sub_1407F385C.c)
 *     sub_1407F813C @ 0x1407F813C (sub_1407F813C.c)
 *     sub_140801A80 @ 0x140801A80 (sub_140801A80.c)
 *     sub_140813344 @ 0x140813344 (sub_140813344.c)
 *     sub_1408251EC @ 0x1408251EC (sub_1408251EC.c)
 *     sub_14082C34C @ 0x14082C34C (sub_14082C34C.c)
 *     sub_14082C74C @ 0x14082C74C (sub_14082C74C.c)
 *     sub_14082C950 @ 0x14082C950 (sub_14082C950.c)
 *     sub_140831E08 @ 0x140831E08 (sub_140831E08.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_14084ED68 @ 0x14084ED68 (sub_14084ED68.c)
 *     sub_14085075C @ 0x14085075C (sub_14085075C.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     sub_14086240C @ 0x14086240C (sub_14086240C.c)
 *     sub_140918670 @ 0x140918670 (sub_140918670.c)
 *     sub_140949950 @ 0x140949950 (sub_140949950.c)
 *     sub_140949AF8 @ 0x140949AF8 (sub_140949AF8.c)
 *     sub_140949D40 @ 0x140949D40 (sub_140949D40.c)
 *     sub_1409B9860 @ 0x1409B9860 (sub_1409B9860.c)
 *     sub_1409D6F7C @ 0x1409D6F7C (sub_1409D6F7C.c)
 *     sub_140A04204 @ 0x140A04204 (sub_140A04204.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 *     sub_140A349F0 @ 0x140A349F0 (sub_140A349F0.c)
 *     sub_140A820BC @ 0x140A820BC (sub_140A820BC.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140B1E75C @ 0x140B1E75C (sub_140B1E75C.c)
 *     sub_140B1ED10 @ 0x140B1ED10 (sub_140B1ED10.c)
 *     sub_140B1EFA0 @ 0x140B1EFA0 (sub_140B1EFA0.c)
 *     sub_140B2114C @ 0x140B2114C (sub_140B2114C.c)
 *     sub_140B22228 @ 0x140B22228 (sub_140B22228.c)
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 *     sub_140B22DD4 @ 0x140B22DD4 (sub_140B22DD4.c)
 *     sub_140B28514 @ 0x140B28514 (sub_140B28514.c)
 *     sub_140B2888C @ 0x140B2888C (sub_140B2888C.c)
 *     sub_140B2940C @ 0x140B2940C (sub_140B2940C.c)
 *     sub_140B2984C @ 0x140B2984C (sub_140B2984C.c)
 *     sub_140B2A324 @ 0x140B2A324 (sub_140B2A324.c)
 *     sub_140B2B9FC @ 0x140B2B9FC (sub_140B2B9FC.c)
 *     sub_140B4F514 @ 0x140B4F514 (sub_140B4F514.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __stdcall RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  __int16 v3; // bx
  UCHAR v4; // si
  NTSTATUS result; // eax

  v3 = AclLength;
  v4 = AclRevision;
  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  memset(Acl, 0, AclLength);
  result = 0;
  Acl->AclRevision = v4;
  Acl->Sbz1 = 0;
  Acl->AclSize = v3 & 0xFFFC;
  *(_DWORD *)&Acl->AceCount = 0;
  return result;
}
