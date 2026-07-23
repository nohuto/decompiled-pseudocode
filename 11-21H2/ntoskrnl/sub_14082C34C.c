/*
 * XREFs of sub_14082C34C @ 0x14082C34C
 * Callers:
 *     sub_14082C020 @ 0x14082C020 (sub_14082C020.c)
 *     sub_14082C1E4 @ 0x14082C1E4 (sub_14082C1E4.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14082C34C(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int Acl; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *Pool2; // rax
  ACL *v7; // rdi

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(qword_140C5AFA8);
    v4 = RtlLengthSid(SidToCheck) + v3;
    v5 = RtlLengthSid(Group) + 44 + v4;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v5, 1818452292LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v5, 2u);
      if ( Acl < 0
        || (Acl = sub_1407B4900(v7, 2u, 0, 131075, (unsigned __int8 *)qword_140C5AFA8, 0), Acl < 0)
        || (Acl = sub_1407B4900(v7, 2u, 0, 983055, (unsigned __int8 *)SidToCheck, 0), Acl < 0)
        || (Acl = sub_1407B4900(v7, 2u, 0, 983055, (unsigned __int8 *)Group, 0), Acl < 0)
        || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0), Acl < 0) )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Acl;
}
