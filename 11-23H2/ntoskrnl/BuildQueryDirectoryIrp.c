/*
 * XREFs of BuildQueryDirectoryIrp @ 0x140765A90
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1407659D0 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14030196C (IopReferenceFileObject.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140301B48 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IopProbeAndLockPages_2 @ 0x14055A39C (IopProbeAndLockPages_2.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BuildQueryDirectoryIrp(
        void *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        volatile void *Address,
        SIZE_T Length,
        __int64 a8,
        char a9,
        __int128 *a10,
        __int64 a11,
        _BYTE *a12,
        PDEVICE_OBJECT *a13,
        __int64 *a14,
        PVOID *a15,
        struct _KEVENT *a16)
{
  void *v16; // rdi
  struct _KEVENT *v17; // r12
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 result; // rax
  ULONG v23; // r8d
  __int64 v24; // rcx
  char *v25; // r15
  __int16 v26; // r14
  _WORD *Pool2; // rsi
  int v28; // ebx
  struct _FILE_OBJECT *v29; // rdi
  ULONG *p_Flags; // r15
  char v31; // r14
  struct _KTHREAD *v32; // rax
  volatile __int32 *v33; // rbx
  __int64 v34; // rax
  _BYTE *v35; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v37; // r8
  __int64 v38; // rax
  IRP *Irp; // rbx
  __int64 v40; // r14
  ULONG Flags; // eax
  __int64 v42; // rax
  PMDL Mdl; // rcx
  __int64 v44; // r8
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  PVOID P; // [rsp+40h] [rbp-68h]
  PVOID v47; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *v48; // [rsp+50h] [rbp-58h]
  ULONG *v49; // [rsp+58h] [rbp-50h]
  __int128 v50; // [rsp+60h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v54; // [rsp+C8h] [rbp+20h]

  v54 = a4;
  v53 = a3;
  v16 = a1;
  Object = 0LL;
  v17 = 0LL;
  v47 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v48 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  a16->Header.Type = PreviousMode;
  if ( !PreviousMode )
  {
LABEL_21:
    if ( !a10 )
      goto LABEL_36;
    v50 = 0LL;
    if ( PreviousMode )
    {
      v24 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
        v24 = (__int64)a10;
      LODWORD(v50) = *(_DWORD *)v24;
      v25 = *(char **)(v24 + 8);
      *((_QWORD *)&v50 + 1) = v25;
    }
    else
    {
      v50 = *a10;
      v25 = (char *)*((_QWORD *)&v50 + 1);
    }
    if ( (v50 & 1) != 0 )
      return 3221225485LL;
    v26 = v50;
    if ( (_WORD)v50 )
    {
      if ( PreviousMode )
      {
        if ( (unsigned __int64)&v25[(unsigned __int16)v50] > 0x7FFFFFFF0000LL || &v25[(unsigned __int16)v50] < v25 )
          MEMORY[0x7FFFFFFF0000] = 0;
        if ( (unsigned __int16)v50 >= 0x200u )
          RtlRaiseStatus(-1073741811);
      }
      Pool2 = (_WORD *)ExAllocatePool2(97LL, (unsigned __int16)v50 + 16LL, 1766092617LL);
      P = Pool2;
      memmove(Pool2 + 8, v25, (unsigned __int16)v50);
      *Pool2 = v50;
      Pool2[1] = v26;
      *((_QWORD *)Pool2 + 1) = Pool2 + 8;
      v16 = a1;
    }
    else
    {
LABEL_36:
      Pool2 = P;
    }
    v28 = IopReferenceFileObject(v16, 1u, PreviousMode, &Object, 0LL);
    if ( v28 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v28;
    }
    v29 = (struct _FILE_OBJECT *)Object;
    *a15 = Object;
    if ( v29->CompletionContext && (v53 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(v29);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return 3221225485LL;
    }
    if ( a2 )
    {
      a16 = 0LL;
      v28 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, (PVOID *)&a16, 0LL);
      v17 = a16;
      v47 = a16;
      if ( v28 < 0 )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
LABEL_80:
        ObfDereferenceObject(v29);
        return (unsigned int)v28;
      }
      KeResetEvent(a16);
    }
    p_Flags = &v29->Flags;
    v49 = &v29->Flags;
    if ( (v29->Flags & 2) != 0 )
    {
      v31 = (v29->Flags & 4) != 0;
      v32 = KeGetCurrentThread();
      --v32->KernelApcDisable;
      v33 = (volatile __int32 *)Object;
      v34 = KeAbPreAcquire((__int64)Object + 128, 0LL);
      LOBYTE(a11) = 0;
      if ( _InterlockedExchange(v33 + 29, 1) )
      {
        v29 = (struct _FILE_OBJECT *)Object;
        v28 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v31, v34, &a11);
      }
      else
      {
        if ( v34 )
          *(_BYTE *)(v34 + 18) = 1;
        v29 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v28 = 0;
      }
      if ( (_BYTE)a11 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v17 )
          ObfDereferenceObject(v17);
        goto LABEL_80;
      }
      v35 = a12;
      *a12 = 1;
      Pool2 = P;
    }
    else
    {
      v35 = a12;
      *a12 = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v53, 0);
    }
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v29->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v29);
    *a13 = RelatedDeviceObject;
    LOBYTE(v37) = *v35 == 0;
    v38 = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v37);
    Irp = (IRP *)v38;
    a16 = (struct _KEVENT *)v38;
    if ( !v38 )
    {
      IopAllocateIrpCleanup(v29, v17);
LABEL_71:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return 3221225626LL;
    }
    *a14 = v38;
    *(_QWORD *)(v38 + 192) = v29;
    *(_QWORD *)(v38 + 152) = v48;
    *(_BYTE *)(v38 + 64) = PreviousMode;
    *(_QWORD *)(v38 + 80) = v17;
    *(_QWORD *)(v38 + 72) = a5;
    *(_QWORD *)(v38 + 88) = v53;
    *(_QWORD *)(v38 + 96) = v54;
    v40 = *(_QWORD *)(v38 + 184);
    *(_WORD *)(v40 - 72) = 268;
    *(_QWORD *)(v40 - 24) = v29;
    *(_QWORD *)(v38 + 160) = Pool2;
    *(_QWORD *)(v38 + 24) = 0LL;
    *(_QWORD *)(v38 + 8) = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v42 = ExAllocatePool2(65LL, (unsigned int)Length, 1112764233LL);
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v42;
      if ( !v42 )
      {
        IopExceptionCleanupEx(v29, Irp, v17, 0LL, (*v49 & 2) != 0);
        goto LABEL_71;
      }
      Irp->Flags = 112;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_2(
        (__int64)Mdl,
        PreviousMode,
        v44,
        (__int64)RelatedDeviceObject,
        *(unsigned __int8 *)(v40 - 72));
      goto LABEL_79;
    }
    Irp->UserBuffer = (PVOID)Address;
LABEL_79:
    *(_DWORD *)(v40 - 64) = Length;
    *(_DWORD *)(v40 - 48) = a8;
    *(_DWORD *)(v40 - 40) = 0;
    *(_QWORD *)(v40 - 56) = Pool2;
    *(_BYTE *)(v40 - 70) = a9 & 0x1B;
    Irp->Flags |= 0x800u;
    return 0LL;
  }
  v20 = a5;
  if ( a5 >= 0x7FFFFFFF0000LL )
    v20 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v20 = *(_DWORD *)v20;
  if ( (_DWORD)a8 == 1 )
  {
    v21 = 72;
LABEL_14:
    if ( (unsigned int)Length < v21 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[30] )
      v23 = 4;
    else
      v23 = *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)a8);
    ProbeForWrite(Address, (unsigned int)Length, v23);
    goto LABEL_21;
  }
  switch ( (int)a8 )
  {
    case 2:
    case 29:
      v21 = 72;
      goto LABEL_14;
    case 3:
    case 50:
    case 60:
      v21 = 96;
      goto LABEL_14;
    case 12:
    case 33:
      v21 = 16;
      goto LABEL_14;
    case 32:
      v21 = 56;
      goto LABEL_14;
    case 37:
    case 79:
      v21 = 112;
      goto LABEL_14;
    case 38:
    case 78:
      v21 = 88;
      goto LABEL_14;
    case 63:
      v21 = 120;
      goto LABEL_14;
    default:
      result = 3221225475LL;
      break;
  }
  return result;
}
