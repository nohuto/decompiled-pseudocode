/*
 * XREFs of IopCompleteUnloadOrDelete @ 0x140305590
 * Callers:
 *     IopDecrementDeviceObjectRef @ 0x1402B0040 (IopDecrementDeviceObjectRef.c)
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 *     IoDetachDevice @ 0x140366180 (IoDetachDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402B03B0 (IopIncrementDeviceObjectRefCount.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140302CAC (IopGetDeviceAttachmentBase.c)
 *     IopInsertRemoveDevice @ 0x140302F14 (IopInsertRemoveDevice.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CF20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CF40 (PsAttachSiloToCurrentThread.c)
 *     IopDecrementDeviceObjectRefCount @ 0x140369894 (IopDecrementDeviceObjectRefCount.c)
 *     PnpIsAnyDeviceInUse @ 0x1403D45D8 (PnpIsAnyDeviceInUse.c)
 *     Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage @ 0x14040FF68 (Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObDereferenceSecurityDescriptor @ 0x140728C50 (ObDereferenceSecurityDescriptor.c)
 *     IopLoadUnloadDriver @ 0x1407CF120 (IopLoadUnloadDriver.c)
 *     ObMakeTemporaryObject @ 0x1407E0F60 (ObMakeTemporaryObject.c)
 *     PnpChainDereferenceComplete @ 0x1408815E8 (PnpChainDereferenceComplete.c)
 *     VfFastIoCheckState @ 0x140ACB224 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB2FC (VfFastIoSnapState.c)
 */

char __fastcall IopCompleteUnloadOrDelete(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, KIRQL a3)
{
  char v3; // bl
  __int64 v4; // rsi
  char v7; // r13
  char v8; // r12
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // r8d
  int IsAnyDeviceInUse; // ebx
  __int64 v15; // rax
  __int64 v16; // r13
  void (__fastcall *v17)(__int64, ULONG_PTR); // r13
  void *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rbx
  _BYTE WorkItem[80]; // [rsp+30h] [rbp-50h] BYREF
  __int64 DeviceAttachmentBase; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v26; // [rsp+C8h] [rbp+48h]

  v26 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v7 = 0;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL);
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      if ( (v9 & 1) == 0 || (*(_DWORD *)(v4 + 16) & 1) != 0 )
        v8 = 0;
      v15 = *(_QWORD *)(BugCheckParameter2 + 24);
      DeviceAttachmentBase = v15;
      if ( v15 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 80LL);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2, 0);
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        if ( v16 )
        {
          if ( *(_DWORD *)v16 > 0x68u )
          {
            v17 = *(void (__fastcall **)(__int64, ULONG_PTR))(v16 + 104);
            if ( v17 )
            {
              v18 = (MmVerifierData & 0x10) != 0
                 && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(BugCheckParameter2 + 8))
                  ? (void *)VfFastIoSnapState()
                  : 0LL;
              v17(DeviceAttachmentBase, BugCheckParameter2);
              if ( v18 )
                VfFastIoCheckState(v18);
            }
          }
        }
        a3 = KeAcquireQueuedSpinLock(0xAuLL);
        IopDecrementDeviceObjectRefCount(BugCheckParameter2);
        if ( *(_QWORD *)(BugCheckParameter2 + 24) || *(_DWORD *)(BugCheckParameter2 + 4) )
          goto LABEL_26;
      }
      KeReleaseQueuedSpinLock(0xAuLL, a3);
      v19 = *(_QWORD *)(BugCheckParameter2 + 272);
      if ( v19 )
        ObDereferenceSecurityDescriptor(v19, 1LL);
      IopInsertRemoveDevice(*(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter2, 0);
      ObfDereferenceObject((PVOID)BugCheckParameter2);
      v7 = 1;
      if ( !v8 )
        return v7;
      a3 = KeAcquireQueuedSpinLock(0xAuLL);
      if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
      {
        v3 = 1;
LABEL_26:
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        return v3;
      }
    }
    v20 = *(_QWORD *)(v4 + 8);
    v21 = v20;
    if ( v20 )
    {
      while ( !*(_DWORD *)(v21 + 4) && !*(_QWORD *)(v21 + 24) && (*(_DWORD *)(*(_QWORD *)(v21 + 312) + 32LL) & 6) == 0 )
      {
        v21 = *(_QWORD *)(v21 + 16);
        if ( !v21 )
          goto LABEL_34;
      }
      v8 = 0;
    }
LABEL_34:
    v22 = *(_DWORD *)(v4 + 16);
    if ( (v22 & 0x80u) != 0 && v20 )
    {
      v8 = 0;
    }
    else if ( v8 )
    {
      *(_DWORD *)(v4 + 16) = v22 | 1;
    }
    KeReleaseQueuedSpinLock(0xAuLL, a3);
    if ( v8 )
    {
      memset(WorkItem, 0, sizeof(WorkItem));
      WorkItem[34] = 6;
      *(_QWORD *)&WorkItem[48] = &WorkItem[40];
      *(_QWORD *)&WorkItem[40] = &WorkItem[40];
      *(_DWORD *)&WorkItem[36] = 0;
      *(_QWORD *)&WorkItem[56] = v4;
      if ( v26 )
      {
        if ( (unsigned int)Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage() )
        {
          v23 = PsAttachSiloToCurrentThread(0LL);
          IopLoadUnloadDriver(WorkItem);
          PsDetachSiloFromCurrentThread(v23);
        }
        else
        {
          IopLoadUnloadDriver(WorkItem);
        }
      }
      else
      {
        *(_QWORD *)WorkItem = 0LL;
        *(_QWORD *)&WorkItem[16] = IopLoadUnloadDriver;
        *(_QWORD *)&WorkItem[24] = WorkItem;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
        KeWaitForSingleObject(&WorkItem[32], Executive, 0, 0, 0LL);
      }
      ObMakeTemporaryObject((PVOID)v4);
      ObfDereferenceObject((PVOID)v4);
    }
    return v7;
  }
  DeviceAttachmentBase = IopGetDeviceAttachmentBase(BugCheckParameter2);
  v10 = DeviceAttachmentBase;
  IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&DeviceAttachmentBase, v11, 0LL);
  KeReleaseQueuedSpinLock((unsigned int)(v12 + 10), a3);
  if ( IsAnyDeviceInUse != 1 )
    PnpChainDereferenceComplete(v10, v26);
  return 0;
}
