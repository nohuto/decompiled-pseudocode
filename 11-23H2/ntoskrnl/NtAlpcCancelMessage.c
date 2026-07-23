/*
 * XREFs of NtAlpcCancelMessage @ 0x140779260
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x14071C0B8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     AlpcpCancelMessage @ 0x1407793FC (AlpcpCancelMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG MessageContext_high; // edi
  ULONG Sequence; // r15d
  PVOID PortContext_high; // rsi
  NTSTATUS v9; // ebx
  __int64 v10; // r9
  int v11; // edx
  _DWORD *v12; // rdi
  PVOID Object[6]; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (Flags & 4) != 0 )
    {
      if ( ((unsigned __int8)MessageContext & 3) == 0 )
      {
        MessageContext_high = HIDWORD(MessageContext->MessageContext);
        Sequence = MessageContext->Sequence;
        PortContext_high = (PVOID)HIDWORD(MessageContext->PortContext);
        goto LABEL_9;
      }
    }
    else if ( ((unsigned __int8)MessageContext & 3) == 0 )
    {
      MessageContext_high = MessageContext->MessageId;
      Sequence = MessageContext->CallbackId;
      PortContext_high = MessageContext->MessageContext;
LABEL_9:
      Object[1] = PortContext_high;
      goto LABEL_10;
    }
    ExRaiseDatatypeMisalignment();
  }
  MessageContext_high = MessageContext->MessageId;
  Sequence = MessageContext->CallbackId;
  PortContext_high = MessageContext->MessageContext;
LABEL_10:
  if ( !MessageContext_high )
  {
    v9 = -1073741559;
    goto LABEL_17;
  }
  Object[0] = 0LL;
  v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, Object, 0LL);
  if ( v9 >= 0 )
  {
    v11 = MessageContext_high;
    v12 = Object[0];
    v9 = AlpcpLookupMessage((__int64)Object[0], v11, Sequence, v10, &v15);
    if ( v9 >= 0 )
    {
      if ( (Flags & 8) == 0 )
        goto LABEL_14;
      if ( (v12[104] & 6) == 4 )
      {
        if ( PortContext_high == *(PVOID *)(v15 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(v15 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(v15);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage(v12, v15, Flags);
          }
          goto LABEL_16;
        }
      }
      else if ( PortContext_high == *(PVOID *)(v15 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(v15);
      v9 = -1073740007;
    }
LABEL_16:
    ObfDereferenceObject(v12);
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
