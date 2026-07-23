/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x14071BAA0
 * Callers:
 *     NtReplyWaitReceivePort @ 0x14071BA80 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x140864AC0 (NtListenPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14071B668 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BC00 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x14071BEEC (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14071BFD8 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpSendMessage @ 0x1407395B0 (AlpcpSendMessage.c)
 */

NTSTATUS __cdecl NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  __int64 v12; // r9
  PVOID v13; // rdi
  int v14; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    AlpcpProbeForWriteMessageHeader(ReceiveMessage, 0LL);
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v13 = Object;
    v17[0] = (__int64)Object;
    LODWORD(v17[6]) = 0;
    if ( ReplyMessage
      && ((*((_DWORD *)Object + 104) & 0x2000) == 0
        ? (LODWORD(v17[6]) = 65541,
           memset(&v17[3], 0, 24),
           LOBYTE(v12) = PreviousMode,
           v14 = AlpcpSendMessage(v17, ReplyMessage, 0LL, v12))
        : (LODWORD(v17[6]) = 4,
           memset(&v17[3], 0, 24),
           v14 = AlpcpReplyLegacySynchronousRequest(v17, (unsigned __int64)ReplyMessage, PreviousMode)),
          v11 = v14,
          v14 < 0) )
    {
      ObfDereferenceObject(v13);
      if ( v11 == -1073740029 )
        v11 = -1073741769;
    }
    else
    {
      v11 = AlpcpReceiveLegacyMessage(v17, ReceiveMessage, Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v17);
      ObfDereferenceObject(v13);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
