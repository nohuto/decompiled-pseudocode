/*
 * XREFs of sub_140B22DD4 @ 0x140B22DD4
 * Callers:
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 sub_140B22DD4()
{
  ULONG v0; // ebx
  ACL *PoolWithTag; // rax
  ACL *v2; // rdi
  NTSTATUS Acl; // ebx
  PSID v4; // rsi
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v7[16]; // [rsp+38h] [rbp-29h] BYREF

  DestinationString = 0LL;
  v0 = 4
     * (*((unsigned __int8 *)Group + 1)
      + *((unsigned __int8 *)SidToCheck + 1)
      + *((unsigned __int8 *)qword_140D3CB58 + 1)
      + *((unsigned __int8 *)SeExports->SeLocalServiceSid + 1)
      + *((unsigned __int8 *)SeExports->SeNetworkServiceSid + 1))
     + 116;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v0, 0x70696D57u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  Acl = RtlCreateAcl(PoolWithTag, v0, 2u);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, Group);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x800u, qword_140D3CB58);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x11FFFFFu, SidToCheck);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeLocalServiceSid);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeNetworkServiceSid);
  if ( Acl < 0 )
    goto LABEL_14;
  qword_140D06B18 = (__int64)&unk_140D07CB0;
  RtlCreateSecurityDescriptor(&unk_140D07CB0, 1u);
  Acl = RtlSetDaclSecurityDescriptor(&unk_140D07CB0, 1u, v2, 0);
  if ( Acl < 0 )
    goto LABEL_14;
  v4 = SidToCheck;
  Acl = RtlSetOwnerSecurityDescriptor(&unk_140D07CB0, SidToCheck, 0);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlSetGroupSecurityDescriptor(&unk_140D07CB0, v4, 0);
  if ( Acl < 0 )
    goto LABEL_14;
  SeCaptureSubjectContext(&SubjectContext);
  memset(v7, 0, 0x78uLL);
  LOWORD(v7[0]) = 120;
  LODWORD(v7[1]) = 256;
  BYTE2(v7[0]) = BYTE2(v7[0]) & 0xE7 | 8;
  HIDWORD(v7[3]) = 2039807;
  v7[11] = sub_1406BB860;
  v7[9] = sub_1407842F0;
  *(_OWORD *)((char *)&v7[1] + 4) = xmmword_140A38358;
  HIDWORD(v7[4]) = 512;
  HIDWORD(v7[5]) = 168;
  RtlInitUnicodeString(&DestinationString, L"WmiGuid");
  result = ObCreateObjectType(&DestinationString, (__int64)v7, 0LL, (__int64)&qword_140D06B20);
  Acl = result;
  if ( (int)result < 0 )
  {
LABEL_14:
    ExFreePoolWithTag(v2, 0);
    qword_140D06B18 = 0LL;
    return (unsigned int)Acl;
  }
  return result;
}
