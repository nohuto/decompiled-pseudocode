/*
 * XREFs of sub_140B2B9FC @ 0x140B2B9FC
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x14041C6C0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x14041C900 (ZwAlpcSetInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     sub_1407EFAD0 @ 0x1407EFAD0 (sub_1407EFAD0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B2B9FC()
{
  int v0; // ecx
  ULONG v1; // ebx
  ACL *Pool2; // rax
  ACL *v3; // rdi
  NTSTATUS Acl; // ebx
  PCALLBACK_OBJECT v5; // rsi
  PCALLBACK_OBJECT ObjectAttributes[7]; // [rsp+28h] [rbp-89h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-11h]
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  memset(&PortAttributes, 0, sizeof(PortAttributes));
  ConnectionPortHandle = 0LL;
  PortHandle = 0LL;
  qword_140C1F5F0 = 0LL;
  memset(ObjectAttributes, 0, 52);
  v11 = 0LL;
  byte_140C1F600 = 0;
  DestinationString = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v0 = *((unsigned __int8 *)Group + 1);
  PortInformation = 0LL;
  v1 = 4 * v0 + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v1, 0x6F706D55u);
  v3 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v1, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0x10000000u, Group);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\PowerPort");
            ObjectAttributes[2] = 0LL;
            ObjectAttributes[6] = 0LL;
            ObjectAttributes[3] = (PCALLBACK_OBJECT)&DestinationString;
            PortAttributes.MaxMessageLength = 4096LL;
            ObjectAttributes[5] = (PCALLBACK_OBJECT)SecurityDescriptor;
            PortAttributes.Flags = 0x100000;
            LODWORD(ObjectAttributes[1]) = 48;
            LODWORD(ObjectAttributes[4]) = 512;
            Acl = ZwAlpcCreatePort(&ConnectionPortHandle, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], &PortAttributes);
            if ( Acl >= 0 )
            {
              ObjectAttributes[2] = 0LL;
              ObjectAttributes[3] = 0LL;
              LODWORD(ObjectAttributes[1]) = 48;
              LODWORD(ObjectAttributes[4]) = 512;
              *(_OWORD *)&ObjectAttributes[5] = 0LL;
              Acl = ExCreateCallback(ObjectAttributes, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 1u, 0);
              if ( Acl >= 0 )
              {
                v5 = ObjectAttributes[0];
                if ( ExRegisterCallback(ObjectAttributes[0], (PCALLBACK_FUNCTION)sub_14036A1B0, 0LL) )
                {
                  PortInformation = (unsigned __int64)v5;
                  Acl = ZwAlpcSetInformation(
                          ConnectionPortHandle,
                          AlpcRegisterCallbackInformation,
                          &PortInformation,
                          0x10u);
                  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
                  if ( Acl >= 0 )
                  {
                    sub_1407EFAD0();
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
