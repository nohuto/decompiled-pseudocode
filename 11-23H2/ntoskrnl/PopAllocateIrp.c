/*
 * XREFs of PopAllocateIrp @ 0x14028F6C4
 * Callers:
 *     PopRequestPowerIrp @ 0x14028F4C0 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140AA713C (PopNotifyDevice.c)
 * Callees:
 *     IoAllocateIrp @ 0x14022E720 (IoAllocateIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopFxLockDevice @ 0x14028D414 (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x14028F0BC (PopFxAllocatePowerIrp.c)
 *     IoReuseIrp @ 0x140290660 (IoReuseIrp.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6DC0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302D18 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140302E90 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopFxReleaseDevice @ 0x14046319C (PopFxReleaseDevice.c)
 *     VfIrpWatermark @ 0x140ACDC48 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        void *a1,
        __int64 a2,
        UCHAR a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        PIRP *a10,
        __int64 *a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // r12
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r13
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // eax
  unsigned int v21; // r14d
  PIRP v22; // r15
  PVOID v23; // rax
  _QWORD *v24; // rdx
  PIRP v25; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v27; // rax
  __int64 *v28; // rax
  unsigned int v29; // r15d
  unsigned int v30; // r15d
  __int64 v31; // rbx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v36; // eax
  bool v37; // zf
  unsigned int v39; // [rsp+48h] [rbp-41h]
  LONG SpinLock[2]; // [rsp+50h] [rbp-39h] BYREF
  PIRP Irp; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h]
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  char v46; // [rsp+E0h] [rbp+57h]

  BugCheckParameter4 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  Irp = 0LL;
  *(_QWORD *)SpinLock = 0LL;
  v46 = 0;
  *a10 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  LockHandle.LockQueue = 0LL;
  *a11 = 0LL;
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x72496F50u);
  DeviceAttachmentBaseRefWithTag = (_QWORD *)IoGetDeviceAttachmentBaseRefWithTag(a1, 1917415248LL);
  Object = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v18 = DeviceAttachmentBaseRefWithTag[39];
    v19 = *(_QWORD *)(v18 + 40);
    if ( v19 )
    {
      if ( a3 == 2 && a4 == 1 )
      {
        v20 = PopFxAllocatePowerIrp(v19, (__int64)a1, a5, a8, a9, a7, &Irp, SpinLock);
        v21 = v20;
        if ( v20 < 0 && v20 != -1073741130 || v20 == 259 )
        {
          v14 = *(_QWORD **)SpinLock;
          goto LABEL_45;
        }
        if ( v20 >= 0 )
        {
          v15 = *(_QWORD *)(v19 + 80);
          if ( AttachedDeviceReferenceWithTag->StackSize > *(_BYTE *)(*(_QWORD *)(v15 + 16) + 66LL) )
          {
            ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
            ObfReferenceObjectWithTag(*(PVOID *)(v15 + 104), 0x72496F50u);
            AttachedDeviceReferenceWithTag = *(struct _DEVICE_OBJECT **)(v15 + 104);
          }
          v22 = Irp;
          v14 = *(_QWORD **)SpinLock;
LABEL_12:
          IoReuseIrp(v22, -1073741637);
          if ( IovUtilVerifierEnabled )
            VfIrpWatermark(v22, 1LL);
          v22->IoStatus.Information = 0LL;
          v22->Tail.Overlay.ListEntry.Blink = &v22->Tail.Overlay.ListEntry;
          v22->Tail.Overlay.ListEntry.Flink = &v22->Tail.Overlay.ListEntry;
          memset(v14, 0, 0x138uLL);
          v23 = Object;
          v14[4] = AttachedDeviceReferenceWithTag;
          v14[3] = v23;
          *((_BYTE *)v14 + 184) = a3;
          *((_DWORD *)v14 + 47) = a4;
          *((_DWORD *)v14 + 48) = a5;
          v14[2] = v22;
          v14[25] = v15;
          v24 = *(_QWORD **)SpinLock;
          v25 = Irp;
          *(_DWORD *)(*(_QWORD *)SpinLock + 212LL) = _InterlockedIncrement(&PopCurrentIrpSequenceID);
          v24[27] = a8;
          v24[28] = a9;
          v24[29] = a1;
          v24[36] = 0LL;
          v24[33] = PopHandleDevicePowerIrpCompletion;
          v24[34] = v24;
          v24[31] = 0LL;
          CurrentStackLocation = v25->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].Context = v24;
          CurrentStackLocation[-1].DeviceObject = 0LL;
          v27 = --v25->Tail.Overlay.CurrentStackLocation;
          --v25->CurrentLocation;
          v27[-1].MajorFunction = 22;
          v27[-1].MinorFunction = a3;
          v27[-1].DeviceObject = AttachedDeviceReferenceWithTag;
          KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
          PopIrpLockThread = (__int64)KeGetCurrentThread();
          v28 = (__int64 *)qword_140C3D588;
          if ( *(__int64 **)qword_140C3D588 != &PopIrpList )
            __fastfail(3u);
          v31 = *(_QWORD *)SpinLock;
          PopIrpLockThread = 0LL;
          **(_QWORD **)SpinLock = &PopIrpList;
          *(_QWORD *)(v31 + 8) = v28;
          *v28 = v31;
          qword_140C3D588 = v31;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && LockHandle.OldIrql <= 0xFu
              && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v37 = (v36 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v36;
              if ( v37 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v31 = *(_QWORD *)SpinLock;
            }
          }
          __writecr8(OldIrql);
          AttachedDeviceReferenceWithTag = 0LL;
          v14 = 0LL;
          Object = 0LL;
          v21 = 0;
          v46 = 0;
          *a10 = Irp;
          *a11 = v31;
LABEL_45:
          if ( Irp )
            goto LABEL_46;
          goto LABEL_56;
        }
      }
      else
      {
        v21 = -1073741130;
        if ( !a3 )
        {
          v15 = PopFxLockDevice(*(_QWORD *)(v18 + 40), 0);
          if ( v15 )
            v46 = 1;
        }
      }
      Interval.QuadPart = -500000LL;
      v29 = 0;
      while ( 1 )
      {
        if ( v29 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        ++v29;
        *(_QWORD *)SpinLock = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
        v14 = *(_QWORD **)SpinLock;
        if ( *(_QWORD *)SpinLock )
          break;
        if ( !a6 || v29 >= 0xA )
          goto LABEL_45;
      }
      v30 = 0;
      while ( 1 )
      {
        if ( v30 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        v39 = v30 + 1;
        Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize + 1, 0);
        v22 = Irp;
        if ( Irp )
          goto LABEL_12;
        if ( !a6 )
          goto LABEL_46;
        v30 = v39;
        if ( v39 >= 0xA )
          goto LABEL_57;
      }
    }
  }
  v21 = -1073741808;
LABEL_56:
  if ( a6 )
  {
LABEL_57:
    if ( v21 != 259 )
    {
      LOBYTE(BugCheckParameter4) = a4 != 0;
      KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReferenceWithTag, BugCheckParameter4);
    }
  }
LABEL_46:
  if ( v14 )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v14);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x72496F50u);
  if ( v46 )
    PopFxReleaseDevice(v15);
  return v21;
}
