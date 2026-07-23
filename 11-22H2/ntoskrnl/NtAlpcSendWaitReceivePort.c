/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x14073B0C0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     AlpcpSignal @ 0x1402B6C40 (AlpcpSignal.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     AlpcpTrackPortReferences @ 0x140738494 (AlpcpTrackPortReferences.c)
 *     AlpcpSendMessage @ 0x1407395B0 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessage @ 0x14073B350 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073DAE0 (AlpcpProcessSynchronousRequest.c)
 */

NTSTATUS __cdecl NtAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v13; // edi
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v15; // esi
  int v16; // r9d
  PVOID v17; // rbx
  struct _KTHREAD *v19; // rax
  bool v20; // zf
  int v22; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  v13 = Flags & 0xFFFF0000;
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v17 = Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences((__int64)Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( SendMessageA )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( ReceiveMessage )
        {
          LOBYTE(v22) = PreviousMode;
          v15 = AlpcpProcessSynchronousRequest(
                  (int)v17,
                  v13,
                  (int)SendMessageA,
                  (int)SendMessageAttributes,
                  (__int64)ReceiveMessage,
                  (__int64)BufferLength,
                  ReceiveMessageAttributes,
                  (__int64)Timeout,
                  v22);
        }
        else
        {
          v15 = -1073740027;
        }
      }
      else
      {
        v15 = -1073741584;
      }
    }
    else
    {
      v24[0] = v17;
      LODWORD(v24[6]) = v13;
      if ( !SendMessageA )
      {
LABEL_6:
        if ( ReceiveMessage )
          v15 = AlpcpReceiveMessage(v24, ReceiveMessage, BufferLength, ReceiveMessageAttributes, Timeout);
        if ( _bittestandreset((signed __int32 *)&v24[6], 2u) )
        {
          AlpcpSignal((__int64)v24, 0, 0, v16);
          if ( v24[4] )
            ObfDereferenceObject((PVOID)v24[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v15 = -1073741584;
      }
      else
      {
        LODWORD(v24[6]) = v13 | 4;
        memset(&v24[3], 0, 24);
        v15 = AlpcpSendMessage((__int64)v24, (__m256i *)SendMessageA, SendMessageAttributes, PreviousMode);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    ObfDereferenceObject(v17);
  }
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable++ == -1;
  if ( v20
    && ($C71981A45BEB2B45F82C232A7085991E *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v15;
}
