/*
 * XREFs of USBType1AsyncEndpointPoll @ 0x1C0003FB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001AF80 (memset.c)
 *     USBHwAbortOrResetPipe @ 0x1C00389C4 (USBHwAbortOrResetPipe.c)
 */

void __fastcall USBType1AsyncEndpointPoll(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  KSPIN_LOCK *v5; // rsi
  ULONG_PTR v6; // r15
  struct _DEVICE_OBJECT *v7; // r13
  IRP *v8; // r12
  KIRQL v9; // al
  KIRQL v10; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v12; // rax
  KIRQL v13; // dl
  __int64 v14; // r9
  __int64 i; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  KIRQL v18; // al
  KIRQL v19; // di

  v2 = (_QWORD *)Context[2];
  v4 = v2[19];
  v5 = v2 + 14;
  v6 = *(_QWORD *)(v4 + 864);
  v7 = *(struct _DEVICE_OBJECT **)(v2[2] + 40LL);
  v8 = *(IRP **)(v4 + 872);
  v9 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  v10 = v9;
  if ( *(_BYTE *)(v4 + 100) )
  {
    *(_BYTE *)(v4 + 917) = 1;
    KeReleaseSpinLock(v2 + 14, v9);
    if ( (int)USBHwAbortOrResetPipe(v7) < 0 )
    {
      v14 = v2[19];
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= *(_DWORD *)(v14 + 56) )
          goto LABEL_12;
        v16 = *(_QWORD *)(v14 + 72) + 24 * i;
        if ( *(_BYTE *)(v16 + 2) == *(_BYTE *)(*(_QWORD *)(v2[18] + 176LL) + 2LL) )
          break;
      }
      v17 = *(_QWORD *)(v16 + 8);
      if ( !v17 || (*(_QWORD *)(v4 + 888) = v17, (int)USBHwAbortOrResetPipe(v7) < 0) )
      {
LABEL_12:
        v18 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
        *(_BYTE *)(v4 + 917) = 0;
        v19 = v18;
        KeSetEvent((PRKEVENT)(v4 + 920), 0, 0);
        *(_BYTE *)(v4 + 916) = 0;
        KeSetEvent((PRKEVENT)(v4 + 944), 0, 0);
        v13 = v19;
        goto LABEL_5;
      }
    }
    memset((void *)(v6 + 4), 0, 0xA0uLL);
    *(_DWORD *)v6 = 655524;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v4 + 888);
    *(_DWORD *)(v6 + 32) = 1;
    *(_DWORD *)(v6 + 128) = *(_DWORD *)(v4 + 896);
    *(_QWORD *)(v6 + 40) = v4 + 976;
    *(_DWORD *)(v6 + 132) = 1;
    *(_DWORD *)(v6 + 140) = 0;
    *(_DWORD *)(v6 + 36) = 3;
    IoInitializeIrp(v8, 72 * v7->StackSize + 208, v7->StackSize);
    CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = v6;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v12 = v8->Tail.Overlay.CurrentStackLocation;
    v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&USBType1AsyncEndpointPollCallback;
    v12[-1].Context = Context;
    v12[-1].Control = -32;
    IofCallDriver(v7, v8);
  }
  else
  {
    *(_BYTE *)(v4 + 916) = 0;
    KeSetEvent((PRKEVENT)(v4 + 944), 0, 0);
    v13 = v10;
LABEL_5:
    KeReleaseSpinLock(v5, v13);
  }
}
