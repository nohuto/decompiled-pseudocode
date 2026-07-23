/*
 * XREFs of sub_14082C74C @ 0x14082C74C
 * Callers:
 *     sub_14082C49C @ 0x14082C49C (sub_14082C49C.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14082C74C(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // esi
  ULONG v5; // esi
  ACL *Pool2; // rax
  ACL *v7; // rbx
  ULONG v8; // edx
  ULONG v10; // ebx
  ULONG v11; // esi
  ACL *v12; // rax
  PVOID Ace; // [rsp+48h] [rbp+10h] BYREF

  Ace = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (dword_140C25418 & 1) != 0 )
  {
    v2 = RtlLengthSid(Group);
    v3 = RtlLengthSid(qword_140C5AFA8) + v2;
    v4 = RtlLengthSid(qword_140C5AE50) + 80 + 2 * v3;
    v5 = RtlLengthSid(SidToCheck) + v4;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v5, 1818452292LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      RtlCreateAcl(Pool2, v5, 2u);
      sub_1407B4900(v7, 2u, 0, -1610612736, (unsigned __int8 *)qword_140C5AFA8, 0);
      sub_1407B4900(v7, 2u, 0, 0x10000000, (unsigned __int8 *)Group, 0);
      sub_1407B4900(v7, 2u, 0, 0x20000000, (unsigned __int8 *)qword_140C5AFA8, 0);
      RtlGetAce(v7, 2u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      sub_1407B4900(v7, 2u, 0, 0x10000000, (unsigned __int8 *)SidToCheck, 0);
      RtlGetAce(v7, 3u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      sub_1407B4900(v7, 2u, 0, 0x10000000, (unsigned __int8 *)Group, 0);
      RtlGetAce(v7, 4u, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      sub_1407B4900(v7, 2u, 0, 0x10000000, (unsigned __int8 *)qword_140C5AE50, 0);
      v8 = 5;
LABEL_4:
      RtlGetAce(v7, v8, &Ace);
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
      return 0LL;
    }
  }
  else
  {
    v10 = RtlLengthSid(qword_140C5AFA8);
    v11 = RtlLengthSid(Group) + 44 + 2 * v10;
    v12 = (ACL *)ExAllocatePool2(256LL, v11, 1818452292LL);
    v7 = v12;
    if ( v12 )
    {
      RtlCreateAcl(v12, v11, 2u);
      sub_1407B4900(v7, 2u, 0, -536870912, (unsigned __int8 *)qword_140C5AFA8, 0);
      sub_1407B4900(v7, 2u, 0, 0x10000000, (unsigned __int8 *)Group, 0);
      sub_1407B4900(v7, 2u, 0, 0x10000000, (unsigned __int8 *)qword_140C5AFA8, 0);
      v8 = 2;
      goto LABEL_4;
    }
  }
  return 3221225495LL;
}
