/*
 * XREFs of sub_140A349F0 @ 0x140A349F0
 * Callers:
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     ZwCreateDirectoryObject @ 0x14041CC80 (ZwCreateDirectoryObject.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_140A349F0(PHANDLE DirectoryHandle)
{
  NTSTATUS result; // eax
  ULONG v3; // ebx
  ULONG v4; // ebx
  ACL *Pool2; // rax
  ACL *v6; // rdi
  int Acl; // ebx
  _OWORD SecurityDescriptor[2]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v9; // [rsp+58h] [rbp+17h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF

  memset(&ObjectAttributes, 0, 44);
  v9 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v3 = RtlLengthSid(qword_140C5AFA8);
    v4 = RtlLengthSid(Group) + 32 + v3;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v4, 1818452292LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v4, 2u);
      if ( Acl >= 0 )
      {
        Acl = sub_1407B4900(v6, 2u, 0, 131075, (unsigned __int8 *)qword_140C5AFA8, 0);
        if ( Acl >= 0 )
        {
          Acl = sub_1407B4900(v6, 2u, 0, 983055, (unsigned __int8 *)Group, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&stru_140A37F70;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.Attributes = 208;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              Acl = ZwCreateDirectoryObject(DirectoryHandle, 0xF000Fu, &ObjectAttributes);
              if ( Acl == 0x40000000 )
                Acl = 0;
            }
          }
        }
      }
      ExFreePoolWithTag(v6, 0x6C636144u);
      return Acl;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
