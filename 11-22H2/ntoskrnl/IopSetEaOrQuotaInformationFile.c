/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x140945B70
 * Callers:
 *     NtSetQuotaInformationFile @ 0x14094BA80 (NtSetQuotaInformationFile.c)
 * Callees:
 *     IoAllocateMdl @ 0x14022E2C0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x14022EF90 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F530 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x1403016DC (IopReferenceFileObject.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     IopProbeAndLockPages_1 @ 0x140555B70 (IopProbeAndLockPages_1.c)
 *     IopSynchronousApiServiceTail @ 0x140687008 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140765710 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1409441F4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944A28 (IopExceptionCleanupEx.c)
 *     IoCheckQuotaBufferValidity @ 0x140946F90 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, void *a3, ULONG a4, __int64 a5)
{
  struct _IO_STATUS_BLOCK *v6; // rbx
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v13; // r14
  _DWORD *v14; // r13
  char v15; // di
  struct _KTHREAD *v16; // rax
  volatile __int32 *v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // ebx
  struct _KEVENT *Pool2; // rax
  __int64 v21; // rdx
  IRP *v22; // rax
  IRP *Irp; // rsi
  char v24; // di
  struct _KEVENT *v25; // rax
  struct _KTHREAD *v26; // rbx
  ULONG Flags; // eax
  ULONG v28; // r13d
  _FILE_QUOTA_INFORMATION *v29; // rdi
  int v30; // eax
  PMDL Mdl; // rcx
  char v32; // bl
  char v33; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  struct _DEVICE_OBJECT *RelatedDeviceObject; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  PIRP v39; // [rsp+70h] [rbp-48h]
  unsigned int v40[6]; // [rsp+78h] [rbp-40h] BYREF

  v6 = (struct _IO_STATUS_BLOCK *)a2;
  Object = 0LL;
  v8 = 0LL;
  P = 0LL;
  *(_OWORD *)v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v33 = PreviousMode;
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
      v11 = (unsigned __int64)a3 + a4;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = (struct _FILE_OBJECT *)Object;
    v14 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v15 = (*((_DWORD *)Object + 20) & 4) != 0;
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      v17 = (volatile __int32 *)Object;
      v18 = KeAbPreAcquire((__int64)Object + 128, 0LL);
      LOBYTE(a5) = 0;
      if ( _InterlockedExchange(v17 + 29, 1) )
      {
        v13 = (struct _FILE_OBJECT *)Object;
        v19 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v15, v18, &a5);
      }
      else
      {
        if ( v18 )
          *(_BYTE *)(v18 + 18) = 1;
        v13 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v19 = 0;
      }
      if ( !(_BYTE)a5 )
      {
        LOBYTE(a5) = 1;
        v6 = (struct _IO_STATUS_BLOCK *)a2;
        goto LABEL_23;
      }
    }
    else
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
      v8 = Pool2;
      P = Pool2;
      if ( Pool2 )
      {
        KeInitializeEvent(Pool2, SynchronizationEvent, 0);
        LOBYTE(a5) = 0;
LABEL_23:
        if ( (*v14 & 0x4000000) == 0 )
          KeResetEvent(&v13->Event);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
        LOBYTE(v21) = RelatedDeviceObject->StackSize;
        v22 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v21, 0LL);
        Irp = v22;
        v39 = v22;
        if ( !v22 )
        {
          if ( (*v14 & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup((volatile __int32 *)&v13->Type, 0LL);
          return 3221225626LL;
        }
        v22->Tail.Overlay.OriginalFileObject = v13;
        v22->Tail.Overlay.Thread = CurrentThread;
        v24 = v33;
        v22->RequestorMode = v33;
        if ( (_BYTE)a5 )
        {
          v22->AllocationFlags |= 2u;
          v25 = 0LL;
        }
        else
        {
          v22->Flags = 4;
          v6 = (struct _IO_STATUS_BLOCK *)v40;
          v25 = v8;
        }
        Irp->UserEvent = v25;
        Irp->UserIosb = v6;
        Irp->Overlay.AllocationSize.QuadPart = 0LL;
        v26 = (struct _KTHREAD *)&Irp->Tail.Overlay.CurrentStackLocation[-1];
        CurrentThread = v26;
        v26->Header.Type = 26;
        v26->StackLimit = v13;
        Flags = RelatedDeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          ErrorOffset = 0;
          v28 = a4;
          if ( a4 )
          {
            v29 = (_FILE_QUOTA_INFORMATION *)ExAllocatePool2(99LL, a4, 1112764233LL);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v29;
            memmove(v29, a3, a4);
            v30 = IoCheckQuotaBufferValidity(v29, a4, &ErrorOffset);
            if ( v30 < 0 )
            {
              *(_DWORD *)a2 = v30;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v30);
            }
            Irp->Flags |= 0x30u;
            v24 = v33;
            v26 = CurrentThread;
            goto LABEL_44;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else
        {
          v28 = a4;
          if ( (Flags & 0x10) != 0 )
          {
            if ( a4 )
            {
              Mdl = IoAllocateMdl(a3, a4, 0, 1u, Irp);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              IopProbeAndLockPages_1((__int64)Mdl, v33, 0, (__int64)RelatedDeviceObject, v26->Header.Type);
            }
            goto LABEL_44;
          }
        }
        Irp->UserBuffer = a3;
LABEL_44:
        LODWORD(v26->Header.WaitListHead.Flink) = v28;
        v32 = a5;
        result = IopSynchronousServiceTail(RelatedDeviceObject, (__int64)Irp, v13, 0, v24, a5, 2u);
        if ( !v32 )
          return IopSynchronousApiServiceTail(result, v8, Irp, v24, v40, (_OWORD *)a2);
        return result;
      }
      v19 = -1073741670;
    }
    ObfDereferenceObject(v13);
    return v19;
  }
  return result;
}
