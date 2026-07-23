/*
 * XREFs of DrvDbGetRegistrarSecurityDescriptor @ 0x14085CD78
 * Callers:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140877098 (DrvDbAcquireDatabaseNodeBaseKey.c)
 * Callees:
 *     RtlAbsoluteToSelfRelativeSD @ 0x14069BD60 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x140711150 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     RtlSetControlSecurityDescriptor @ 0x14085CE60 (RtlSetControlSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void *DrvDbGetRegistrarSecurityDescriptor()
{
  __int64 v0; // rbx
  ULONG v1; // eax
  void *Pool2; // rax
  void *v3; // rdi
  _OWORD SecurityDescriptor[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+40h] [rbp-10h]
  ULONG BufferLength; // [rsp+60h] [rbp+10h] BYREF
  ACL Acl; // [rsp+68h] [rbp+18h] BYREF

  v0 = 0LL;
  Acl = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v6 = 0LL;
  if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
    && RtlCreateAcl(&Acl, 8u, 2u) >= 0
    && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0
    && RtlSetControlSecurityDescriptor(SecurityDescriptor, 0x1000u, 0x1000u) >= 0 )
  {
    v1 = RtlLengthSecurityDescriptor(SecurityDescriptor);
    BufferLength = v1;
    if ( v1 >= 0x28 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, v1, 1111770192LL);
      v3 = Pool2;
      if ( Pool2 )
      {
        if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Pool2, &BufferLength) < 0 )
          ExFreePoolWithTag(v3, 0);
        else
          return v3;
      }
    }
  }
  return (void *)v0;
}
