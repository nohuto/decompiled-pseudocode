/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x140224220
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1402F50D4 (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1406B6F80 (IopWriteFile.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x1402315D0 (IopReleaseFileObjectLock.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     IopSetCopyInformationExtension @ 0x14028FBFC (IopSetCopyInformationExtension.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     IopAllocateMdl @ 0x1402FC37C (IopAllocateMdl.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     IopProbeAndLockPages_0 @ 0x1403D4354 (IopProbeAndLockPages_0.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2, _DWORD *a3)
{
  int v4; // r12d
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned int v9; // r8d
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v12; // eax
  bool v13; // zf
  __int64 Irp; // rax
  int v15; // r9d
  IRP *v16; // rdi
  PVOID *v17; // r14
  PVOID *v18; // rbx
  void *v19; // r13
  struct _IO_STATUS_BLOCK *v20; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v22; // ecx
  struct _IRP *Pool2; // rax
  int v24; // edx
  __int64 Mdl; // rax
  int v26; // r8d
  int v27; // edx
  struct _MDL **v28; // rax
  struct _MDL *v29; // rax
  ULONG Flags; // edx
  _DWORD *v31; // rax
  char v32; // cl
  __int64 v34; // [rsp+80h] [rbp+8h] BYREF
  IRP **v35; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+90h] [rbp+18h]
  PVOID *v37; // [rsp+98h] [rbp+20h]

  v35 = a2;
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_DWORD *)(v5 + 80);
    if ( ((v6 & 2) == 0 || *(int *)(a1 + 112) >= 0) && (v6 & 0x4000000) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v9 = SchedulerAssist[5];
        if ( CurrentIrql == 2 )
          a3 = (_DWORD *)(v9 | 4);
        else
          a3 = (_DWORD *)((-1 << (CurrentIrql + 1)) & 4 | v9);
        SchedulerAssist[5] = (_DWORD)a3;
      }
      LODWORD(v34) = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)(v5 + 152), 7u) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( (*(_DWORD *)(v5 + 152) & 0x80u) != 0 );
      }
      *(_DWORD *)(v5 + 156) = 0;
      _InterlockedAnd((volatile signed __int32 *)(v5 + 152), 0xFFFFFF7F);
      if ( (_DWORD)KiIrqlFlags )
      {
        v10 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a3 = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & a3[5]) == 0;
          a3[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  LOBYTE(a3) = *(_BYTE *)(a1 + 9) == 0;
  Irp = IopAllocateIrpExReturn(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 76LL), a3);
  v16 = (IRP *)Irp;
  v34 = Irp;
  v17 = (PVOID *)(a1 + 16);
  if ( Irp )
  {
    v36 = a1 + 16;
    *(_QWORD *)(Irp + 192) = *v17;
    *(_QWORD *)(Irp + 152) = *(_QWORD *)a1;
    *(_QWORD *)(Irp + 160) = 0LL;
    *(_BYTE *)(Irp + 64) = *(_BYTE *)(a1 + 8);
    *(_BYTE *)(Irp + 65) = 0;
    *(_BYTE *)(Irp + 68) = 0;
    *(_QWORD *)(Irp + 104) = 0LL;
    *(_DWORD *)(Irp + 16) = 0;
    v37 = (PVOID *)(a1 + 32);
    *(_QWORD *)(Irp + 80) = *(_QWORD *)(a1 + 32);
    v19 = *(void **)(a1 + 96);
    if ( v19 )
    {
      v20 = *(struct _IO_STATUS_BLOCK **)(a1 + 104);
      ObfReferenceObjectWithTag(*(PVOID *)(a1 + 96), 0x49526F49u);
      v16->Flags |= 0x200000u;
      v16->UserIosb = v20;
    }
    else
    {
      *(_QWORD *)(Irp + 72) = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(Irp + 88) = *(_QWORD *)(a1 + 40);
      v19 = *(void **)(a1 + 48);
    }
    v16->Overlay.AsynchronousParameters.UserApcContext = v19;
    CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*v17;
    if ( (*((_DWORD *)*v17 + 20) & 0x10) != 0 || (*(_DWORD *)(a1 + 112) & 1) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    v16->AssociatedIrp.MasterIrp = 0LL;
    v16->MdlAddress = 0LL;
    v22 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (v22 & 4) != 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( *(_QWORD *)(a1 + 128) )
        {
          v16->AssociatedIrp.MasterIrp = *(struct _IRP **)(a1 + 64);
          v16->Flags |= 0x10u;
          v16->UserBuffer = *(PVOID *)(a1 + 64);
        }
        else
        {
          Pool2 = (struct _IRP *)ExAllocatePool2(105LL, *(unsigned int *)(a1 + 72), 1112764233LL);
          v16->AssociatedIrp.MasterIrp = Pool2;
          memmove(Pool2, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 72));
          v16->Flags |= 0x30u;
        }
      }
      else
      {
        v16->Flags |= 0x10u;
      }
    }
    else if ( (v22 & 0x10) != 0 )
    {
      v24 = *(_DWORD *)(a1 + 72);
      if ( v24 )
      {
        Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 64), v24, 0, v15, (__int64)v16, 0);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        if ( *(_QWORD *)(a1 + 128) )
          v27 = 0;
        else
          v27 = *(unsigned __int8 *)(a1 + 8);
        IopProbeAndLockPages_0(Mdl, v27, v26, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      }
    }
    else
    {
      v16->UserBuffer = *(PVOID *)(a1 + 64);
      v28 = *(struct _MDL ***)(a1 + 120);
      if ( v28 )
      {
        v29 = *v28;
        if ( v29 )
        {
          v16->MdlAddress = v29;
          **(_QWORD **)(a1 + 120) = 0LL;
          if ( *(_QWORD *)(a1 + 96) )
            v16->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v16->Overlay.AsynchronousParameters.UserApcContext | 1);
        }
      }
    }
    v16->Flags |= 0x200u;
    Flags = v16->Flags;
    if ( (*((_DWORD *)*v17 + 20) & 8) != 0 )
    {
      Flags |= 1u;
      v16->Flags = Flags;
    }
    if ( *(_BYTE *)(a1 + 10) )
    {
      Flags |= 0x800u;
      v16->Flags = Flags;
    }
    if ( (*((_DWORD *)*v17 + 20) & 2) != 0 && *(int *)(a1 + 112) < 0 )
      v16->Flags = Flags | 0x1000;
    if ( !*(_QWORD *)(a1 + 128)
      || (v16->RequestorMode = 0,
          v16->UserBuffer = *(PVOID *)(a1 + 64),
          v4 = IopSetCopyInformationExtension(v16, *(_QWORD *)(a1 + 128)),
          v4 >= 0) )
    {
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v31 = (_DWORD *)*((_QWORD *)*v17 + 26);
      if ( v31 )
      {
        if ( (*v31 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      }
    }
    v18 = v37;
    if ( v4 >= 0 )
    {
      *v35 = v16;
      return (unsigned int)v4;
    }
  }
  else
  {
    v4 = -1073741670;
    v18 = (PVOID *)(a1 + 32);
  }
  v32 = *(_BYTE *)(a1 + 9);
  if ( v16 )
  {
    IopExceptionCleanupEx(*v17, v16, *v18, 0LL, v32);
  }
  else
  {
    if ( v32 )
      IopReleaseFileObjectLock(*v17);
    if ( *v18 )
    {
      ObfDereferenceObjectWithTag(*v18, 0x746C6644u);
      *v18 = 0LL;
    }
    ObfDereferenceObjectWithTag(*v17, 0x746C6644u);
    *v17 = 0LL;
  }
  return (unsigned int)v4;
}
