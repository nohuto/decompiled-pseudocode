/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x140744160
 * Callers:
 *     sub_1405F4CC8 @ 0x1405F4CC8 (sub_1405F4CC8.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     sub_140743E60 @ 0x140743E60 (sub_140743E60.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     sub_14086240C @ 0x14086240C (sub_14086240C.c)
 *     sub_140918670 @ 0x140918670 (sub_140918670.c)
 *     sub_140949AF8 @ 0x140949AF8 (sub_140949AF8.c)
 *     sub_140949D40 @ 0x140949D40 (sub_140949D40.c)
 *     sub_140A04204 @ 0x140A04204 (sub_140A04204.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 *     sub_140B22228 @ 0x140B22228 (sub_140B22228.c)
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 *     sub_140B2888C @ 0x140B2888C (sub_140B2888C.c)
 * Callees:
 *     sub_140744184 @ 0x140744184 (sub_140744184.c)
 */

NTSTATUS __stdcall RtlAbsoluteToSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  if ( *((__int16 *)AbsoluteSecurityDescriptor + 1) < 0 )
    return -1073741593;
  else
    return sub_140744184(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, BufferLength);
}
