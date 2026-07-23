/*
 * XREFs of PopUmpoProcessMessage @ 0x1407A6F88
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D004 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1407A6E58 (PopUmpoProcessMessages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14041B580 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x14041B5A0 (ZwAlpcCancelMessage.c)
 *     ZwAlpcOpenSenderProcess @ 0x14041B780 (ZwAlpcOpenSenderProcess.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     PopUmpoProcessPowerMessage @ 0x1407A7164 (PopUmpoProcessPowerMessage.c)
 *     PopAcquireUmpoPushLock @ 0x1407A822C (PopAcquireUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(PPORT_MESSAGE ConnectionRequest, PALPC_CONTEXT_ATTR MessageContext)
{
  __int16 Type; // r8
  NTSTATUS v4; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rcx
  HANDLE v8; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+90h] [rbp-19h] BYREF

  Type = ConnectionRequest->u2.s2.Type;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( (unsigned __int8)Type == 1 )
    goto LABEL_21;
  if ( (unsigned __int8)Type != 2 && (unsigned __int8)Type != 3 )
  {
    if ( (unsigned __int8)Type == 5 || (unsigned __int8)Type == 6 )
    {
      PopUmpoAlpcClientConnected = 0;
      PopUmpoSyncEventInProgress = 0;
      v7 = PopConnectedUmpoProcess;
      if ( PopConnectedUmpoProcess )
      {
        ObfDereferenceObjectWithTag(PopConnectedUmpoProcess, 0x746C6644u);
        PopConnectedUmpoProcess = 0LL;
      }
      LOBYTE(v7) = 1;
      PopAcquireUmpoPushLock(v7);
      v8 = PopAlpcClientPort;
      PopAlpcClientPort = 0LL;
      ExReleasePushLockEx((__int64 *)&PopUmpoPushLock, 0LL);
      KeLeaveCriticalRegion();
      ZwClose(v8);
      return (unsigned int)-1073740032;
    }
    else
    {
      if ( (unsigned __int8)Type != 10 )
        return 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      memset(&PortAttributes, 0, sizeof(PortAttributes));
      PortAttributes.MaxMessageLength = 4096LL;
      v4 = ZwAlpcAcceptConnectPort(
             &PopAlpcClientPort,
             PopAlpcServerPort,
             0,
             &ObjectAttributes,
             &PortAttributes,
             0LL,
             ConnectionRequest,
             0LL,
             PopUmpoAlpcClientConnected == 0);
      if ( v4 < 0 )
      {
        ZwAlpcAcceptConnectPort(
          &PopAlpcClientPort,
          PopAlpcServerPort,
          0,
          &ObjectAttributes,
          &PortAttributes,
          0LL,
          ConnectionRequest,
          0LL,
          0);
        return (unsigned int)v4;
      }
      PopUmpoAlpcClientConnected = 1;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ProcessHandle = 0LL;
      v4 = ZwAlpcOpenSenderProcess(&ProcessHandle, PopAlpcServerPort, ConnectionRequest, 0, 0x400u, &ObjectAttributes);
      if ( v4 >= 0 && ProcessHandle )
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(ProcessHandle, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        PopConnectedUmpoProcess = Object;
        if ( v6 < 0 )
          PopConnectedUmpoProcess = 0LL;
        ZwClose(ProcessHandle);
        return 0;
      }
    }
    return (unsigned int)v4;
  }
  if ( (Type & 0x2000) != 0 )
  {
LABEL_21:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0, MessageContext);
    return 0;
  }
  v4 = PopUmpoProcessPowerMessage(&ConnectionRequest[1], MessageContext);
  if ( v4 >= 0 )
    return 0;
  return (unsigned int)v4;
}
