/*
 * XREFs of RtlSubAuthoritySid @ 0x1402EF430
 * Callers:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     sub_140660EF4 @ 0x140660EF4 (sub_140660EF4.c)
 *     sub_1406775C8 @ 0x1406775C8 (sub_1406775C8.c)
 *     sub_140696944 @ 0x140696944 (sub_140696944.c)
 *     sub_1406C0B60 @ 0x1406C0B60 (sub_1406C0B60.c)
 *     sub_1406C9990 @ 0x1406C9990 (sub_1406C9990.c)
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x14079FAF0 (RtlIsElevatedRid.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_140801A80 @ 0x140801A80 (sub_140801A80.c)
 *     sub_140831E08 @ 0x140831E08 (sub_140831E08.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     sub_140848298 @ 0x140848298 (sub_140848298.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     sub_140949890 @ 0x140949890 (sub_140949890.c)
 *     RtlGetAppContainerParent @ 0x1409B8FF0 (RtlGetAppContainerParent.c)
 *     sub_1409B9218 @ 0x1409B9218 (sub_1409B9218.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 *     sub_1409CC77C @ 0x1409CC77C (sub_1409CC77C.c)
 *     sub_1409D6F7C @ 0x1409D6F7C (sub_1409D6F7C.c)
 *     sub_1409FC784 @ 0x1409FC784 (sub_1409FC784.c)
 *     sub_140A04204 @ 0x140A04204 (sub_140A04204.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
