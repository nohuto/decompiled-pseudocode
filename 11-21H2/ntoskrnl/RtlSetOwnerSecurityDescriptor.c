/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x14078EDC0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     sub_140743E60 @ 0x140743E60 (sub_140743E60.c)
 *     sub_14078DAB0 @ 0x14078DAB0 (sub_14078DAB0.c)
 *     sub_1407F8298 @ 0x1407F8298 (sub_1407F8298.c)
 *     sub_140813344 @ 0x140813344 (sub_140813344.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     sub_140918670 @ 0x140918670 (sub_140918670.c)
 *     sub_140949950 @ 0x140949950 (sub_140949950.c)
 *     sub_140949AF8 @ 0x140949AF8 (sub_140949AF8.c)
 *     sub_140949D40 @ 0x140949D40 (sub_140949D40.c)
 *     sub_1409BB4D8 @ 0x1409BB4D8 (sub_1409BB4D8.c)
 *     sub_140A04204 @ 0x140A04204 (sub_140A04204.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 *     sub_140B1E75C @ 0x140B1E75C (sub_140B1E75C.c)
 *     sub_140B1ED10 @ 0x140B1ED10 (sub_140B1ED10.c)
 *     sub_140B1EFA0 @ 0x140B1EFA0 (sub_140B1EFA0.c)
 *     sub_140B2114C @ 0x140B2114C (sub_140B2114C.c)
 *     sub_140B22228 @ 0x140B22228 (sub_140B22228.c)
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 *     sub_140B22DD4 @ 0x140B22DD4 (sub_140B22DD4.c)
 *     sub_140B2888C @ 0x140B2888C (sub_140B2888C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Owner,
        BOOLEAN OwnerDefaulted)
{
  __int16 v4; // cx
  PSID v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 < 0 )
    return -1073741703;
  v5 = 0LL;
  if ( Owner )
    v5 = Owner;
  *((_QWORD *)SecurityDescriptor + 1) = v5;
  v6 = v4 & 0xFFFE;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( OwnerDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 1;
  return 0;
}
