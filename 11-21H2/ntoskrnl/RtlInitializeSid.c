/*
 * XREFs of RtlInitializeSid @ 0x14078DDC0
 * Callers:
 *     RtlInitializeSidEx @ 0x14025D3B0 (RtlInitializeSidEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_14062C598 @ 0x14062C598 (sub_14062C598.c)
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     sub_140660EF4 @ 0x140660EF4 (sub_140660EF4.c)
 *     sub_1406C0B60 @ 0x1406C0B60 (sub_1406C0B60.c)
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     sub_140801A80 @ 0x140801A80 (sub_140801A80.c)
 *     sub_140831E08 @ 0x140831E08 (sub_140831E08.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     sub_140848298 @ 0x140848298 (sub_140848298.c)
 *     sub_14084DAD4 @ 0x14084DAD4 (sub_14084DAD4.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     sub_140949890 @ 0x140949890 (sub_140949890.c)
 *     RtlGetAppContainerParent @ 0x1409B8FF0 (RtlGetAppContainerParent.c)
 *     sub_1409D6F7C @ 0x1409D6F7C (sub_1409D6F7C.c)
 *     sub_1409FC784 @ 0x1409FC784 (sub_1409FC784.c)
 *     sub_140A04204 @ 0x140A04204 (sub_140A04204.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 *     sub_140B02560 @ 0x140B02560 (sub_140B02560.c)
 *     sub_140B1F3C0 @ 0x140B1F3C0 (sub_140B1F3C0.c)
 *     sub_140B2940C @ 0x140B2940C (sub_140B2940C.c)
 *     sub_140B2DB68 @ 0x140B2DB68 (sub_140B2DB68.c)
 *     sub_140B2DE24 @ 0x140B2DE24 (sub_140B2DE24.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
