/*
 * XREFs of WmipInitializeSecurity @ 0x140B39160
 * Callers:
 *     WmipDriverEntry @ 0x140B38E50 (WmipDriverEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1407821E0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF390 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF700 (RtlAddAccessAllowedAce.c)
 *     ObCreateObjectType @ 0x14081F4D0 (ObCreateObjectType.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 WmipInitializeSecurity()
{
  ULONG v0; // ebx
  ACL *Pool2; // rax
  ACL *v2; // rdi
  NTSTATUS Acl; // ebx
  PSID v4; // rsi
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v7[16]; // [rsp+38h] [rbp-29h] BYREF

  DestinationString = 0LL;
  v0 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeAliasUsersSid + 1)
      + *((unsigned __int8 *)SeExports->SeLocalServiceSid + 1)
      + *((unsigned __int8 *)SeExports->SeNetworkServiceSid + 1))
     + 116;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v0, 0x70696D57u);
  v2 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Acl = RtlCreateAcl(Pool2, v0, 2u);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeLocalSystemSid);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x800u, SeAliasUsersSid);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x11FFFFFu, SeAliasAdminsSid);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeLocalServiceSid);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeNetworkServiceSid);
  if ( Acl < 0 )
    goto LABEL_14;
  WmipDefaultAccessSd = (__int64)&WmipDefaultAccessSecurityDescriptor;
  RtlCreateSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, 1u);
  Acl = RtlSetDaclSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, 1u, v2, 0);
  if ( Acl < 0 )
    goto LABEL_14;
  v4 = SeAliasAdminsSid;
  Acl = RtlSetOwnerSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, SeAliasAdminsSid, 0);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlSetGroupSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, v4, 0);
  if ( Acl < 0 )
    goto LABEL_14;
  SeCaptureSubjectContext(&WmipSystemSubjectContext);
  memset(v7, 0, 0x78uLL);
  LOWORD(v7[0]) = 120;
  LODWORD(v7[1]) = 256;
  BYTE2(v7[0]) = BYTE2(v7[0]) & 0xE7 | 8;
  HIDWORD(v7[3]) = 2039807;
  v7[11] = WmipSecurityMethod;
  v7[9] = WmipDeleteMethod;
  *(_OWORD *)((char *)&v7[1] + 4) = WmipGenericMapping;
  HIDWORD(v7[4]) = 512;
  HIDWORD(v7[5]) = 168;
  RtlInitUnicodeString(&DestinationString, L"WmiGuid");
  result = ObCreateObjectType(&DestinationString, (__int64)v7, 0LL, (__int64)&WmipGuidObjectType);
  Acl = result;
  if ( (int)result < 0 )
  {
LABEL_14:
    ExFreePoolWithTag(v2, 0);
    WmipDefaultAccessSd = 0LL;
    return (unsigned int)Acl;
  }
  return result;
}
