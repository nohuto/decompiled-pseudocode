/*
 * XREFs of sub_140B2114C @ 0x140B2114C
 * Callers:
 *     sub_140B1F3C0 @ 0x140B1F3C0 (sub_140B1F3C0.c)
 * Callees:
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS sub_140B2114C()
{
  int v0; // r9d
  int v1; // r8d
  ULONG v2; // r13d
  int v3; // ecx
  int v4; // r10d
  ULONG v5; // r14d
  int v6; // edx
  ULONG v7; // edi
  ULONG v8; // r15d
  ULONG v9; // r12d
  ULONG v10; // esi
  ULONG v11; // ebp
  ACL *v12; // rbx
  PSID v13; // rbx

  v0 = *((unsigned __int8 *)SidToCheck + 1);
  v1 = *((unsigned __int8 *)Group + 1);
  v2 = 4 * (v1 + v0) + 48;
  v3 = *((unsigned __int8 *)qword_140C5AFA8 + 1);
  v4 = *((unsigned __int8 *)qword_140D3CAA8 + 1);
  v5 = v2 + 4 * v3 + 20;
  v6 = *((unsigned __int8 *)qword_140D3CAE0 + 1);
  v7 = v5 + 4 * (v4 + 5);
  v8 = 4 * (v0 + v1 + v6 + v3) + 88;
  v9 = 4 * (v0 + v1 + *((unsigned __int8 *)Buf1 + 1)) + 68;
  v10 = v9
      + 4
      * (v4
       + 25
       + *((unsigned __int8 *)qword_140C5AFB0 + 1)
       + v6
       + *((unsigned __int8 *)qword_140D3CC08 + 1)
       + *((unsigned __int8 *)qword_140D3CB20 + 1));
  v11 = 4 * *((unsigned __int8 *)qword_140C1B9B8 + 1) + 28;
  SePublicDefaultDacl = (PACL)ExAllocatePool2(288LL, v5, 0x63416553u);
  Acl = (PACL)ExAllocatePool2(288LL, v7, 0x63416553u);
  qword_140D3CBA0 = (PACL)ExAllocatePool2(288LL, v5, 0x63416553u);
  qword_140D3CB48 = (PACL)ExAllocatePool2(288LL, v7, 0x63416553u);
  SeSystemDefaultDacl = (PACL)ExAllocatePool2(288LL, v2, 0x63416553u);
  qword_140D3CBB8 = (PACL)ExAllocatePool2(288LL, v8, 0x63416553u);
  qword_140D3CBB0 = (PACL)ExAllocatePool2(288LL, v7, 0x63416553u);
  qword_140D3CC50 = (PACL)ExAllocatePool2(288LL, v9, 0x63416553u);
  qword_140D3CAE8 = (PACL)ExAllocatePool2(288LL, v10, 0x63416553u);
  Sacl = (PACL)ExAllocatePool2(288LL, v11, 0x63416553u);
  v12 = Sacl;
  RtlCreateAcl(SePublicDefaultDacl, v5, 2u);
  RtlCreateAcl(Acl, v7, 2u);
  RtlCreateAcl(qword_140D3CBA0, v5, 2u);
  RtlCreateAcl(qword_140D3CB48, v7, 2u);
  RtlCreateAcl(SeSystemDefaultDacl, v2, 2u);
  RtlCreateAcl(qword_140D3CBB8, v8, 2u);
  RtlCreateAcl(qword_140D3CBB0, v7, 2u);
  RtlCreateAcl(qword_140D3CC50, v9, 2u);
  RtlCreateAcl(qword_140D3CAE8, v10, 2u);
  RtlCreateAcl(v12, v11, 2u);
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x20000000u, qword_140C5AFA8);
  RtlAddAccessAllowedAce(Acl, 2u, 0x20000000u, qword_140C5AFA8);
  RtlAddAccessAllowedAce(qword_140D3CBA0, 2u, 0xE0000000, qword_140C5AFA8);
  RtlAddAccessAllowedAce(qword_140D3CB48, 2u, 0xE0000000, qword_140C5AFA8);
  RtlAddAccessAllowedAce(qword_140D3CBB8, 2u, 0x20000000u, qword_140C5AFA8);
  RtlAddAccessAllowedAce(qword_140D3CBB0, 2u, 0x20000u, qword_140C5AFA8);
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x10000000u, Group);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10000000u, Group);
  RtlAddAccessAllowedAce(qword_140D3CBA0, 2u, 0x10000000u, Group);
  RtlAddAccessAllowedAce(qword_140D3CB48, 2u, 0x10000000u, Group);
  RtlAddAccessAllowedAce(SeSystemDefaultDacl, 2u, 0x10000000u, Group);
  RtlAddAccessAllowedAce(qword_140D3CBB8, 2u, 0x10000000u, Group);
  RtlAddAccessAllowedAce(qword_140D3CBB0, 2u, 0x1F0000u, Group);
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x10000000u, SidToCheck);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10000000u, SidToCheck);
  RtlAddAccessAllowedAce(qword_140D3CBA0, 2u, 0x10000000u, SidToCheck);
  RtlAddAccessAllowedAce(qword_140D3CB48, 2u, 0x10000000u, SidToCheck);
  RtlAddAccessAllowedAce(SeSystemDefaultDacl, 2u, 0xA0020000, SidToCheck);
  RtlAddAccessAllowedAce(qword_140D3CBB8, 2u, 0x10000000u, SidToCheck);
  RtlAddAccessAllowedAce(qword_140D3CBB0, 2u, 0x1F0000u, SidToCheck);
  RtlAddAccessAllowedAce(Acl, 2u, 0x20000000u, qword_140D3CAA8);
  RtlAddAccessAllowedAce(qword_140D3CB48, 2u, 0xA0000000, qword_140D3CAA8);
  RtlAddAccessAllowedAce(qword_140D3CBB0, 2u, 0x20000u, qword_140D3CAA8);
  RtlAddAccessAllowedAce(qword_140D3CBB8, 2u, 0x10000000u, qword_140D3CAE0);
  RtlAddAccessAllowedAce(qword_140D3CC50, 2u, 0x1FFFFFu, Group);
  RtlAddAccessAllowedAce(qword_140D3CC50, 2u, 0x1FFFFFu, SidToCheck);
  RtlAddAccessAllowedAce(qword_140D3CC50, 2u, 0, Buf1);
  RtlAddAccessAllowedAce(qword_140D3CAE8, 2u, 0x1FFFFFu, Group);
  RtlAddAccessAllowedAce(qword_140D3CAE8, 2u, 0x1FFFFFu, SidToCheck);
  RtlAddAccessAllowedAce(qword_140D3CAE8, 2u, 0, Buf1);
  RtlAddAccessAllowedAce(qword_140D3CAE8, 2u, 0x1FFFFFu, qword_140D3CAE0);
  RtlAddAccessAllowedAce(qword_140D3CAE8, 2u, 0x1FFFFFu, qword_140D3CB20);
  RtlAddAccessAllowedAce(qword_140D3CAE8, 2u, 0x1FFFFFu, qword_140D3CAA8);
  RtlAddAccessAllowedAce(qword_140D3CAE8, 2u, 0x1FFFFFu, qword_140D3CC08);
  RtlAddAccessAllowedAce(qword_140D3CAE8, 2u, 0x1200A9u, qword_140C5AFB0);
  RtlAddMandatoryAce(Sacl, 2u, 0, qword_140C1B9B8, 0x11u, 2u);
  qword_140D3CCB0 = (__int64)&unk_140D3D4E8;
  RtlCreateSecurityDescriptor(&unk_140D3D4E8, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140D3D4E8, 1u, SePublicDefaultDacl, 0);
  qword_140D3CA48 = (__int64)&unk_140D3D4C0;
  RtlCreateSecurityDescriptor(&unk_140D3D4C0, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140D3D4C0, 1u, Acl, 0);
  qword_140D3CE60 = (__int64)&unk_140D3D588;
  RtlCreateSecurityDescriptor(&unk_140D3D588, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140D3D588, 1u, qword_140D3CBA0, 0);
  qword_140D3CE40 = (__int64)&unk_140D3D498;
  RtlCreateSecurityDescriptor(&unk_140D3D498, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140D3D498, 1u, qword_140D3CB48, 0);
  SeSystemDefaultSd = &unk_140D3D560;
  RtlCreateSecurityDescriptor(&unk_140D3D560, 1u);
  RtlSetDaclSecurityDescriptor(SeSystemDefaultSd, 1u, SeSystemDefaultDacl, 0);
  qword_140D3CE50 = (__int64)&unk_140D3D538;
  RtlCreateSecurityDescriptor(&unk_140D3D538, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140D3D538, 1u, qword_140D3CBB8, 0);
  qword_140D3CD80 = (__int64)&unk_140D3D628;
  RtlCreateSecurityDescriptor(&unk_140D3D628, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140D3D628, 1u, qword_140D3CBB0, 0);
  qword_140D3CC40 = (__int64)&unk_140D3D5D8;
  RtlCreateSecurityDescriptor(&unk_140D3D5D8, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140D3D5D8, 1u, qword_140D3CC50, 0);
  v13 = Group;
  RtlSetOwnerSecurityDescriptor(&unk_140D3D5D8, Group, 0);
  RtlSetGroupSecurityDescriptor(&unk_140D3D5D8, v13, 0);
  qword_140D3CC38 = (__int64)&unk_140D3D5B0;
  RtlCreateSecurityDescriptor(&unk_140D3D5B0, 1u);
  RtlSetDaclSecurityDescriptor(&unk_140D3D5B0, 1u, qword_140D3CAE8, 0);
  RtlSetOwnerSecurityDescriptor(&unk_140D3D5B0, v13, 0);
  RtlSetGroupSecurityDescriptor(&unk_140D3D5B0, v13, 0);
  qword_140D3CE48 = &unk_140D3D510;
  RtlCreateSecurityDescriptor(&unk_140D3D510, 1u);
  qword_140D3CC48 = &unk_140D3D600;
  RtlCreateSecurityDescriptor(&unk_140D3D600, 1u);
  RtlSetSaclSecurityDescriptor(&unk_140D3D600, 1u, Sacl, 0);
  RtlSetOwnerSecurityDescriptor(&unk_140D3D600, v13, 0);
  return RtlSetGroupSecurityDescriptor(&unk_140D3D600, v13, 0);
}
