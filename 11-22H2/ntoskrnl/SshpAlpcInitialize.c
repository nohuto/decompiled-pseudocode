/*
 * XREFs of SshpAlpcInitialize @ 0x140B680A4
 * Callers:
 *     SshInitialize @ 0x140B51AA0 (SshInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KiInitializeTimer2 @ 0x14031E33C (KiInitializeTimer2.c)
 *     ExRegisterCallback @ 0x140367250 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x14041B600 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x14041B840 (ZwAlpcSetInformation.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736B20 (RtlCreateAcl.c)
 *     ExCreateCallback @ 0x1407DC8B0 (ExCreateCallback.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF9B0 (RtlAddAccessAllowedAce.c)
 *     CmSiRWLockInitialize @ 0x1408106D0 (CmSiRWLockInitialize.c)
 *     SshpAlpcMessageCallback @ 0x14084D6A0 (SshpAlpcMessageCallback.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 SshpAlpcInitialize()
{
  unsigned int v0; // edi
  char *v1; // rbx
  __int64 v2; // rsi
  ULONG v3; // ebx
  ACL *Pool2; // rax
  ACL *v5; // rsi
  NTSTATUS Acl; // ebx
  NTSTATUS Callback; // eax
  PCALLBACK_OBJECT v8; // rdi
  PCALLBACK_OBJECT ObjectAttributes[7]; // [rsp+28h] [rbp-89h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-11h]
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  PortInformation = 0LL;
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  memset(ObjectAttributes, 0, 52);
  DestinationString = 0LL;
  v14 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  CmSiRWLockInitialize(&stru_140C38568);
  v0 = 0;
  v1 = (char *)&unk_140C38582;
  v2 = 0LL;
  do
  {
    *(_DWORD *)(v1 - 10) = 0;
    *(v1 - 6) = 0;
    *(_QWORD *)(v1 + 174) = v1 + 166;
    *(_QWORD *)(v1 + 166) = v1 + 166;
    *(_WORD *)v1 = 0;
    KiInitializeTimer2((unsigned __int64)(v1 - 2), (__int64)SshpAlpcOpenGracePeriodTimerCallback, v2, 8);
    *(_QWORD *)(v1 + 134) = 0LL;
    *(_QWORD *)(v1 + 150) = SshpAlpcOpenGracePeriodWorker;
    *(_QWORD *)(v1 + 158) = v2;
    if ( v0 == 1 )
      ++*(_DWORD *)(v1 - 10);
    ++v0;
    ++v2;
    v1 += 192;
  }
  while ( v0 < 2 );
  v3 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v3, 0x70687373u);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v3);
    Acl = RtlCreateAcl(v5, v3, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v5, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\SleepstudyControlPort");
            ObjectAttributes[2] = 0LL;
            ObjectAttributes[6] = 0LL;
            ObjectAttributes[3] = (PCALLBACK_OBJECT)&DestinationString;
            PortAttributes.MaxMessageLength = 64LL;
            ObjectAttributes[5] = (PCALLBACK_OBJECT)SecurityDescriptor;
            PortAttributes.Flags = 0x100000;
            LODWORD(ObjectAttributes[1]) = 48;
            LODWORD(ObjectAttributes[4]) = 512;
            Acl = ZwAlpcCreatePort(&SshpAlpcContext, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], &PortAttributes);
            if ( Acl >= 0 )
            {
              ObjectAttributes[2] = 0LL;
              ObjectAttributes[3] = 0LL;
              LODWORD(ObjectAttributes[1]) = 48;
              LODWORD(ObjectAttributes[4]) = 512;
              *(_OWORD *)&ObjectAttributes[5] = 0LL;
              Callback = ExCreateCallback(ObjectAttributes, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 1u, 0);
              v8 = ObjectAttributes[0];
              Acl = Callback;
              if ( Callback >= 0 )
              {
                if ( ExRegisterCallback(ObjectAttributes[0], (PCALLBACK_FUNCTION)SshpAlpcMessageCallback, 0LL) )
                {
                  PortInformation = (unsigned __int64)v8;
                  Acl = ZwAlpcSetInformation(SshpAlpcContext, AlpcRegisterCallbackInformation, &PortInformation, 0x10u);
                  if ( Acl >= 0 )
                  {
                    SshpAlpcMessageCallback(0LL, 0LL, 0LL);
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
              if ( v8 )
                ObfDereferenceObjectWithTag(v8, 0x746C6644u);
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v5, 0x70687373u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
