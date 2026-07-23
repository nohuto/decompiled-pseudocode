/*
 * XREFs of ExpKeyedEventInitialization @ 0x140B6D860
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140B49FE4 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateKeyedEvent @ 0x14041C790 (ZwCreateKeyedEvent.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1407367A0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF700 (RtlAddAccessAllowedAce.c)
 *     RtlAddMandatoryAce @ 0x1407F3140 (RtlAddMandatoryAce.c)
 *     ObCreateObjectType @ 0x14081F4D0 (ObCreateObjectType.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

int ExpKeyedEventInitialization()
{
  int result; // eax
  ULONG v1; // edi
  ACL *Pool2; // rax
  ACL *v3; // rbx
  NTSTATUS Acl; // edi
  ACL *v5; // rcx
  ULONG v6; // esi
  ACL *v7; // rax
  ACL *v8; // rdi
  NTSTATUS v9; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v13; // [rsp+90h] [rbp-70h]
  _DWORD v14[40]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE KeyedEventHandle; // [rsp+150h] [rbp+50h] BYREF
  PVOID Object; // [rsp+158h] [rbp+58h] BYREF

  DestinationString = 0LL;
  memset(v14, 0, 0x78uLL);
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyedEventHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v13 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"KeyedEvent");
  v14[2] = 0;
  v14[10] = 0;
  v14[11] = 0;
  BYTE2(v14[0]) |= 4u;
  v14[7] = 983043;
  v14[6] = 983043;
  LOWORD(v14[0]) = 120;
  v14[9] = 1;
  v14[3] = 131073;
  v14[4] = 131074;
  v14[5] = 0x20000;
  result = ObCreateObjectType(&DestinationString, (__int64)v14, 0LL, (__int64)&ExpKeyedEventObjectType);
  if ( result < 0 )
    return result;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result < 0 )
    return result;
  v1 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeWorldSid + 1))
     + 68;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v1, 0x6C636144u);
  v3 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  Acl = RtlCreateAcl(Pool2, v1, 2u);
  v5 = v3;
  if ( Acl < 0
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0x20003u, SeWorldSid), v5 = v3, Acl < 0)
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeAliasAdminsSid), v5 = v3, Acl < 0) )
  {
LABEL_20:
    ExFreePoolWithTag(v5, 0);
    return Acl;
  }
  Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeLocalSystemSid);
  if ( Acl < 0 || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0), Acl < 0) )
  {
LABEL_19:
    v5 = v3;
    goto LABEL_20;
  }
  v6 = 4 * *((unsigned __int8 *)SeLowMandatorySid + 1) + 28;
  v7 = (ACL *)ExAllocatePool2(256LL, v6, 0x6C636144u);
  v8 = v7;
  if ( !v7 )
  {
    Acl = -1073741670;
    goto LABEL_19;
  }
  v9 = RtlCreateAcl(v7, v6, 2u);
  if ( v9 < 0
    || (v9 = RtlAddMandatoryAce(v8, 2u, 0, SeLowMandatorySid, 0x11u, 1u), v9 < 0)
    || (v9 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0), v9 < 0) )
  {
    ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\CritSecOutOfMemoryEvent");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.Attributes = 16;
    v9 = ZwCreateKeyedEvent(&KeyedEventHandle, 0xF0003u, &ObjectAttributes, 0);
    ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v8, 0);
    if ( v9 >= 0 )
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(KeyedEventHandle, 0xF0003u, ExpKeyedEventObjectType, 0, &Object, 0LL);
      ExpCritSecOutOfMemoryEvent = (__int64)Object;
      ZwClose(KeyedEventHandle);
    }
  }
  return v9;
}
