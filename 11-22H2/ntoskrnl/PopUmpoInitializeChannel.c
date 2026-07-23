/*
 * XREFs of PopUmpoInitializeChannel @ 0x140B70C0C
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExRegisterCallback @ 0x140367250 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x14041B600 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x14041B840 (ZwAlpcSetInformation.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736B20 (RtlCreateAcl.c)
 *     PopUmpoProcessMessages @ 0x1407A6E58 (PopUmpoProcessMessages.c)
 *     ExCreateCallback @ 0x1407DC8B0 (ExCreateCallback.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF9B0 (RtlAddAccessAllowedAce.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 PopUmpoInitializeChannel()
{
  ULONG v0; // ebx
  ACL *Pool2; // rax
  ACL *v2; // rdi
  NTSTATUS Acl; // ebx
  PCALLBACK_OBJECT v4; // rsi
  PCALLBACK_OBJECT ObjectAttributes[7]; // [rsp+28h] [rbp-89h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v10; // [rsp+A0h] [rbp-11h]
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  memset(&PortAttributes, 0, sizeof(PortAttributes));
  v10 = 0LL;
  PopAlpcServerPort = 0LL;
  PopAlpcClientPort = 0LL;
  DestinationString = 0LL;
  PopUmpoAlpcClientConnected = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  PopUmpoPushLock = 0LL;
  memset(ObjectAttributes, 0, 52);
  PortInformation = 0LL;
  PopUmpoSyncEventInProgress = 0;
  PopConnectedUmpoProcess = 0LL;
  v0 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v0, 0x6F706D55u);
  v2 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v0, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v2, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\PowerPort");
            PortAttributes.MaxMessageLength = 4096LL;
            ObjectAttributes[3] = (PCALLBACK_OBJECT)&DestinationString;
            PortAttributes.Flags = 0x100000;
            ObjectAttributes[5] = (PCALLBACK_OBJECT)SecurityDescriptor;
            LODWORD(ObjectAttributes[1]) = 48;
            ObjectAttributes[2] = 0LL;
            LODWORD(ObjectAttributes[4]) = 512;
            ObjectAttributes[6] = 0LL;
            Acl = ZwAlpcCreatePort(&PopAlpcServerPort, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], &PortAttributes);
            if ( Acl >= 0 )
            {
              LODWORD(ObjectAttributes[1]) = 48;
              ObjectAttributes[2] = 0LL;
              LODWORD(ObjectAttributes[4]) = 512;
              ObjectAttributes[3] = 0LL;
              *(_OWORD *)&ObjectAttributes[5] = 0LL;
              Acl = ExCreateCallback(ObjectAttributes, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 1u, 0);
              if ( Acl >= 0 )
              {
                v4 = ObjectAttributes[0];
                if ( ExRegisterCallback(ObjectAttributes[0], (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  PortInformation = (unsigned __int64)v4;
                  Acl = ZwAlpcSetInformation(
                          PopAlpcServerPort,
                          AlpcRegisterCallbackInformation,
                          &PortInformation,
                          0x10u);
                  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
                  if ( Acl >= 0 )
                  {
                    PopUmpoProcessMessages();
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
    ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
