/*
 * XREFs of sub_1405FB99C @ 0x1405FB99C
 * Callers:
 *     sub_1405FB934 @ 0x1405FB934 (sub_1405FB934.c)
 * Callees:
 *     MmMdlPageContentsState @ 0x1402344C0 (MmMdlPageContentsState.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 */

__int64 __fastcall sub_1405FB99C(__int64 a1, __int64 a2, LARGE_INTEGER *a3, IO_COMPLETION_ROUTINE *a4, void *a5)
{
  struct _DEVICE_OBJECT *v5; // rbp
  IRP *Irp; // rbx
  struct _MDL *v12; // rdi
  __int64 v13; // r9
  int v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  ULONG v17; // r8d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  struct _IO_STACK_LOCATION *v19; // r8

  v5 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  if ( (*(_QWORD *)a2 & 1) != 0 )
  {
    v12 = *(struct _MDL **)(a2 + 8);
    Irp = (IRP *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  else
  {
    Irp = IoAllocateIrp(v5->StackSize, 0);
    if ( !Irp )
      return 3221225626LL;
    v12 = *(struct _MDL **)a2;
    v13 = *(unsigned int *)(a2 + 16);
    v14 = *(_QWORD *)(a2 + 8);
    v15 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFF000uLL;
    v16 = *(_QWORD *)(a2 + 8) & 0xFFFLL;
    v12->Next = 0LL;
    v12->MdlFlags = 0;
    v12->StartVa = (PVOID)v15;
    v12->ByteOffset = v14 & 0xFFF;
    v12->ByteCount = v13;
    v12->Size = 8 * (((unsigned __int64)(v16 + v13 + 4095) >> 12) + 6);
    MmBuildMdlForNonPagedPool(v12);
    MmMdlPageContentsState((__int64)v12, 1u);
  }
  v17 = *(_DWORD *)(a2 + 16);
  Irp->MdlAddress = v12;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->UserIosb = &Irp->IoStatus;
  Irp->RequestorMode = 0;
  Irp->Tail.Overlay.OriginalFileObject = *(PFILE_OBJECT *)(a1 + 8);
  CurrentStackLocation[-1].MajorFunction = 4 - ((*(_DWORD *)(a2 + 32) & 1) != 0);
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Parameters.Read.Length = v17;
  CurrentStackLocation[-1].Parameters.Create.Options = 1397572723;
  v19 = Irp->Tail.Overlay.CurrentStackLocation;
  v19[-1].CompletionRoutine = a4;
  v19[-1].Context = a5;
  v19[-1].Control = -32;
  IofCallDriver(v5, Irp);
  return 259LL;
}
