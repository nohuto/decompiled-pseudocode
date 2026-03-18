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
  int Acl; // ebx
  PCALLBACK_OBJECT v4; // rsi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES CallbackObject_8; // [rsp+30h] [rbp-81h] BYREF
  __int128 v8; // [rsp+60h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-11h]
  _QWORD v12[9]; // [rsp+A8h] [rbp-9h] BYREF

  memset(&CallbackObject_8, 0, 44);
  memset(v12, 0, sizeof(v12));
  v11 = 0LL;
  PopAlpcServerPort = 0LL;
  PopAlpcClientPort = 0LL;
  DestinationString = 0LL;
  PopUmpoAlpcClientConnected = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  PopUmpoPushLock = 0LL;
  CallbackObject = 0LL;
  v8 = 0LL;
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
            v12[2] = 4096LL;
            CallbackObject_8.ObjectName = &DestinationString;
            LODWORD(v12[0]) = 0x100000;
            CallbackObject_8.SecurityDescriptor = SecurityDescriptor;
            CallbackObject_8.Length = 48;
            CallbackObject_8.RootDirectory = 0LL;
            CallbackObject_8.Attributes = 512;
            CallbackObject_8.SecurityQualityOfService = 0LL;
            Acl = ZwAlpcCreatePort((__int64)&PopAlpcServerPort, (__int64)&CallbackObject_8);
            if ( Acl >= 0 )
            {
              CallbackObject_8.Length = 48;
              CallbackObject_8.RootDirectory = 0LL;
              CallbackObject_8.Attributes = 512;
              CallbackObject_8.ObjectName = 0LL;
              *(_OWORD *)&CallbackObject_8.SecurityDescriptor = 0LL;
              Acl = ExCreateCallback(&CallbackObject, &CallbackObject_8, 1u, 0);
              if ( Acl >= 0 )
              {
                v4 = CallbackObject;
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  v8 = (unsigned __int64)v4;
                  Acl = ZwAlpcSetInformation(PopAlpcServerPort, 9LL);
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
