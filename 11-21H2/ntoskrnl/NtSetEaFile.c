/*
 * XREFs of NtSetEaFile @ 0x140939360
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IopProbeAndLockPages_3 @ 0x14055A5BC (IopProbeAndLockPages_3.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopSynchronousApiServiceTail @ 0x1406BF8BC (IopSynchronousApiServiceTail.c)
 *     IoCheckEaBufferValidity @ 0x1406C6310 (IoCheckEaBufferValidity.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

signed int __fastcall NtSetEaFile(void *a1, unsigned __int64 a2, char *a3, ULONG a4)
{
  size_t v4; // rbx
  LONG *p_LockNV; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v10; // rcx
  signed int result; // eax
  struct _FILE_OBJECT *v12; // r14
  bool v13; // di
  struct _KTHREAD *v14; // rax
  volatile __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ebx
  struct _KEVENT *Pool2; // rax
  __int64 v21; // rdx
  IRP *v22; // rax
  IRP *Irp; // rsi
  char v24; // di
  struct _IO_STATUS_BLOCK *v25; // rax
  struct _KEVENT *v26; // rcx
  __int64 v27; // rax
  ULONG Flags; // ecx
  struct _FILE_FULL_EA_INFORMATION *v29; // rdi
  NTSTATUS v30; // eax
  PMDL Mdl; // rcx
  char v32; // bl
  char v33[8]; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  _DWORD *v36; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v39; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v41; // [rsp+80h] [rbp-38h] BYREF

  v4 = a4;
  Object = 0LL;
  p_LockNV = 0LL;
  P = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v33[1] = PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v10 = a2;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > 0x7FFFFFFF0000LL || &a3[a4] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 0x10u, PreviousMode, &Object, 0LL);
  *(_DWORD *)&v33[4] = result;
  if ( result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v36 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v13 = (*((_DWORD *)Object + 20) & 4) != 0;
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      v15 = (volatile __int32 *)Object;
      v16 = KeAbPreAcquire((__int64)Object + 128, 0LL);
      v33[0] = 0;
      if ( _InterlockedExchange(v15 + 29, 1) )
      {
        LOBYTE(v18) = v13;
        LOBYTE(v17) = PreviousMode;
        v12 = (struct _FILE_OBJECT *)Object;
        v19 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v17, v18, v16, v33);
      }
      else
      {
        if ( v16 )
          *(_BYTE *)(v16 + 18) = 1;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v19 = 0;
      }
      *(_DWORD *)&v33[4] = v19;
      if ( !v33[0] )
      {
        v33[0] = 1;
        v4 = a4;
        goto LABEL_22;
      }
    }
    else
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 538996553LL);
      p_LockNV = &Pool2->Header.LockNV;
      P = Pool2;
      if ( Pool2 )
      {
        KeInitializeEvent(Pool2, SynchronizationEvent, 0);
        v33[0] = 0;
LABEL_22:
        IopResetEvent((__int64)v12);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v21) = DeviceObject->StackSize;
        v22 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v21, 0LL);
        Irp = v22;
        v39 = v22;
        if ( v22 )
        {
          v22->Tail.Overlay.OriginalFileObject = v12;
          v22->Tail.Overlay.Thread = CurrentThread;
          v24 = v33[1];
          v22->RequestorMode = v33[1];
          if ( v33[0] )
          {
            v25 = (struct _IO_STATUS_BLOCK *)a2;
            v26 = 0LL;
          }
          else
          {
            v22->Flags = 4;
            v25 = (struct _IO_STATUS_BLOCK *)&v41;
            v26 = (struct _KEVENT *)p_LockNV;
          }
          Irp->UserEvent = v26;
          Irp->UserIosb = v25;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          v27 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
          v36 = (_DWORD *)v27;
          *(_BYTE *)v27 = 8;
          *(_QWORD *)(v27 + 48) = v12;
          Flags = DeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            ErrorOffset = 0;
            if ( (_DWORD)v4 )
            {
              v33[2] = 0;
              v29 = (struct _FILE_FULL_EA_INFORMATION *)ExAllocatePool2(97LL, v4, 1112764233LL);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v29;
              memmove(v29, a3, v4);
              LODWORD(v4) = a4;
              v30 = IoCheckEaBufferValidity(v29, a4, &ErrorOffset);
              *(_DWORD *)&v33[4] = v30;
              if ( v30 < 0 )
              {
                v33[2] = 1;
                *(_DWORD *)a2 = v30;
                *(_QWORD *)(a2 + 8) = ErrorOffset;
                RtlRaiseStatus(v30);
              }
              Irp->Flags |= 0x30u;
              v24 = v33[1];
              v27 = (__int64)v36;
            }
            else
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
            }
          }
          else if ( (Flags & 0x10) != 0 )
          {
            if ( (_DWORD)v4 )
            {
              Mdl = IoAllocateMdl(a3, v4, 0, 1u, Irp);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              IopProbeAndLockPages_3(Mdl, v24, 0, (__int64)DeviceObject, *(unsigned __int8 *)v36);
              v27 = (__int64)v36;
            }
          }
          else
          {
            Irp->UserBuffer = a3;
          }
          *(_DWORD *)(v27 + 8) = v4;
          v32 = v33[0];
          result = IopSynchronousServiceTail(DeviceObject, Irp, v12, 0, v24, v33[0], 2u);
          if ( !v32 )
            return IopSynchronousApiServiceTail(result, p_LockNV, Irp, v24, (unsigned int *)&v41, (_OWORD *)a2);
        }
        else
        {
          if ( (*v36 & 2) == 0 )
            ExFreePoolWithTag(p_LockNV, 0);
          IopAllocateIrpCleanup((volatile __int32 *)&v12->Type, 0LL);
          return -1073741670;
        }
        return result;
      }
      v19 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v19;
  }
  return result;
}
