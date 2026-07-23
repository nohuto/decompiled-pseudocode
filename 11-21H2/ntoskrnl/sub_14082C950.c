/*
 * XREFs of sub_14082C950 @ 0x14082C950
 * Callers:
 *     sub_14082BD64 @ 0x14082BD64 (sub_14082BD64.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14082C950(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int Acl; // edi
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebp
  ACL *v8; // rax
  ACL *v9; // rbx

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(qword_140C5AE48);
    v4 = RtlLengthSid(qword_140C5AFB0) + v3;
    v5 = RtlLengthSid(qword_140C5AFA8) + v4;
    v6 = RtlLengthSid(SidToCheck) + v5;
    v7 = v6 + RtlLengthSid(Group) + 68;
    v8 = (ACL *)sub_1402828F0(256, v7, 0x6C636144u);
    v9 = v8;
    if ( v8 )
    {
      Acl = RtlCreateAcl(v8, v7, 2u);
      if ( Acl < 0
        || (Acl = sub_1407B4900(v9, 2u, 0, 1179649, (unsigned __int8 *)qword_140C5AFA8, 0), Acl < 0)
        || (Acl = sub_1407B4900(v9, 2u, 0, 2031619, (unsigned __int8 *)SidToCheck, 0), Acl < 0)
        || (Acl = sub_1407B4900(v9, 2u, 0, 2031619, (unsigned __int8 *)Group, 0), Acl < 0)
        || (Acl = sub_1407B4900(v9, 2u, 0, 1179649, (unsigned __int8 *)qword_140C5AFB0, 0), Acl < 0)
        || (Acl = sub_1407B4900(v9, 2u, 0, 1179649, (unsigned __int8 *)qword_140C5AE48, 0), Acl < 0)
        || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0), Acl < 0) )
      {
        ExFreePoolWithTag(v9, 0);
      }
      else
      {
        return 0;
      }
    }
  }
  return (unsigned int)Acl;
}
