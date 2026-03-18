/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x140224220
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1402F4E44 (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1406B6DD0 (IopWriteFile.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14022EF70 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x1402314E0 (IopReleaseFileObjectLock.c)
 *     IopSetCopyInformationExtension @ 0x14028F96C (IopSetCopyInformationExtension.c)
 *     IopResetEvent @ 0x1402AF910 (IopResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateMdl @ 0x1402FC0EC (IopAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     IopProbeAndLockPages_0 @ 0x1403D4174 (IopProbeAndLockPages_0.c)
 *     Feature_1045946681__private_IsEnabledDeviceUsage @ 0x14040FFD4 (Feature_1045946681__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     IopExceptionCleanupEx @ 0x140944978 (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2)
{
  int v3; // r12d
  BOOL v4; // ecx
  __int64 v5; // r8
  bool v6; // zf
  __int64 v7; // rcx
  __int64 Irp; // rax
  int v9; // r9d
  IRP *v10; // rsi
  PVOID *v11; // r14
  PVOID *v12; // rbx
  void *v13; // r13
  struct _IO_STATUS_BLOCK *v14; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v16; // ecx
  struct _IRP *Pool2; // rax
  int v18; // edx
  __int64 Mdl; // rax
  int v20; // r8d
  int v21; // edx
  struct _MDL **v22; // rax
  struct _MDL *v23; // rax
  int v24; // edx
  _DWORD *v25; // rax
  char v26; // cl

  v3 = 0;
  v4 = Feature_1045946681__private_IsEnabledDeviceUsage() != 0;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v6 = !v4;
    v7 = *(_QWORD *)(a1 + 16);
    if ( v6 || (*(_DWORD *)(v7 + 80) & 2) == 0 || *(int *)(a1 + 112) >= 0 )
      IopResetEvent(v7);
  }
  LOBYTE(v5) = *(_BYTE *)(a1 + 9) == 0;
  Irp = IopAllocateIrpExReturn(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 76LL), v5);
  v10 = (IRP *)Irp;
  v11 = (PVOID *)(a1 + 16);
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = *v11;
    *(_QWORD *)(Irp + 152) = *(_QWORD *)a1;
    *(_QWORD *)(Irp + 160) = 0LL;
    *(_BYTE *)(Irp + 64) = *(_BYTE *)(a1 + 8);
    *(_BYTE *)(Irp + 65) = 0;
    *(_BYTE *)(Irp + 68) = 0;
    *(_QWORD *)(Irp + 104) = 0LL;
    *(_DWORD *)(Irp + 16) = 0;
    *(_QWORD *)(Irp + 80) = *(_QWORD *)(a1 + 32);
    v13 = *(void **)(a1 + 96);
    if ( v13 )
    {
      v14 = *(struct _IO_STATUS_BLOCK **)(a1 + 104);
      ObfReferenceObjectWithTag(*(PVOID *)(a1 + 96), 0x49526F49u);
      v10->Flags |= 0x200000u;
      v10->UserIosb = v14;
    }
    else
    {
      *(_QWORD *)(Irp + 72) = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(Irp + 88) = *(_QWORD *)(a1 + 40);
      v13 = *(void **)(a1 + 48);
    }
    v10->Overlay.AsynchronousParameters.UserApcContext = v13;
    CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*v11;
    if ( (*((_DWORD *)*v11 + 20) & 0x10) != 0 || (*(_DWORD *)(a1 + 112) & 1) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    v10->AssociatedIrp.MasterIrp = 0LL;
    v10->MdlAddress = 0LL;
    v16 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (v16 & 4) != 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( *(_QWORD *)(a1 + 128) )
        {
          v10->AssociatedIrp.MasterIrp = *(struct _IRP **)(a1 + 64);
          v10->Flags |= 0x10u;
          v10->UserBuffer = *(PVOID *)(a1 + 64);
        }
        else
        {
          Pool2 = (struct _IRP *)ExAllocatePool2(105LL, *(unsigned int *)(a1 + 72), 1112764233LL);
          v10->AssociatedIrp.MasterIrp = Pool2;
          memmove(Pool2, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 72));
          v10->Flags |= 0x30u;
        }
      }
      else
      {
        v10->Flags |= 0x10u;
      }
    }
    else if ( (v16 & 0x10) != 0 )
    {
      v18 = *(_DWORD *)(a1 + 72);
      if ( v18 )
      {
        Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 64), v18, 0, v9, (__int64)v10, 0);
        if ( !Mdl )
          RtlRaiseStatus(3221225626LL);
        if ( *(_QWORD *)(a1 + 128) )
          v21 = 0;
        else
          v21 = *(unsigned __int8 *)(a1 + 8);
        IopProbeAndLockPages_0(Mdl, v21, v20, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      }
    }
    else
    {
      v10->UserBuffer = *(PVOID *)(a1 + 64);
      v22 = *(struct _MDL ***)(a1 + 120);
      if ( v22 )
      {
        v23 = *v22;
        if ( v23 )
        {
          v10->MdlAddress = v23;
          **(_QWORD **)(a1 + 120) = 0LL;
          if ( *(_QWORD *)(a1 + 96) )
            v10->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v10->Overlay.AsynchronousParameters.UserApcContext | 1);
        }
      }
    }
    v24 = v10->Flags | 0x200;
    v10->Flags = v24;
    if ( (*((_DWORD *)*v11 + 20) & 8) != 0 )
    {
      v24 |= 1u;
      v10->Flags = v24;
    }
    if ( *(_BYTE *)(a1 + 10) )
      v10->Flags = v24 | 0x800;
    if ( (unsigned int)Feature_1045946681__private_IsEnabledDeviceUsage()
      && (*((_DWORD *)*v11 + 20) & 2) != 0
      && *(int *)(a1 + 112) < 0 )
    {
      v10->Flags |= 0x1000u;
    }
    if ( !*(_QWORD *)(a1 + 128)
      || (v10->RequestorMode = 0,
          v10->UserBuffer = *(PVOID *)(a1 + 64),
          v3 = IopSetCopyInformationExtension(v10, *(_QWORD *)(a1 + 128)),
          v3 >= 0) )
    {
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v25 = (_DWORD *)*((_QWORD *)*v11 + 26);
      if ( v25 )
      {
        if ( (*v25 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      }
    }
    v12 = (PVOID *)(a1 + 32);
    if ( v3 >= 0 )
    {
      *a2 = v10;
      return (unsigned int)v3;
    }
  }
  else
  {
    v3 = -1073741670;
    v12 = (PVOID *)(a1 + 32);
  }
  v26 = *(_BYTE *)(a1 + 9);
  if ( v10 )
  {
    IopExceptionCleanupEx(*v11, v10, *v12, 0LL, v26);
  }
  else
  {
    if ( v26 )
      IopReleaseFileObjectLock(*v11);
    if ( *v12 )
    {
      ObfDereferenceObjectWithTag(*v12, 0x746C6644u);
      *v12 = 0LL;
    }
    ObfDereferenceObjectWithTag(*v11, 0x746C6644u);
    *v11 = 0LL;
  }
  return (unsigned int)v3;
}
