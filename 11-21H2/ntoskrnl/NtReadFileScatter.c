/*
 * XREFs of NtReadFileScatter @ 0x1406C6AF0
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402AAB50 @ 0x1402AAB50 (sub_1402AAB50.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     sub_1402AC870 @ 0x1402AC870 (sub_1402AC870.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtReadFileScatter(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  struct _KEVENT *v9; // r15
  KPROCESSOR_MODE v10; // si
  NTSTATUS result; // eax
  __int64 v12; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PDEVICE_OBJECT v14; // r14
  int v15; // ecx
  unsigned __int64 DeviceType; // rcx
  __int64 v17; // rdx
  ULONG v18; // edi
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rsi
  void *v22; // r8
  PLARGE_INTEGER v23; // r12
  unsigned int SectorSize; // ecx
  __int64 v25; // rcx
  __int16 v26; // ax
  bool v27; // zf
  char v28; // al
  char v29; // cl
  __int64 v30; // rbx
  _FILE_SEGMENT_ELEMENT *Pool2; // rdi
  __int64 i; // rdx
  int v33; // esi
  _DWORD *v34; // r14
  int v35; // esi
  struct _KTHREAD *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  NTSTATUS v39; // edi
  char v40; // r12
  __int64 v41; // r8
  __int64 v42; // rdx
  IRP *v43; // rax
  IRP *v44; // rsi
  PIO_STATUS_BLOCK v45; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _MDL *Mdl; // rax
  PFILE_SEGMENT_ELEMENT v48; // r14
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v50[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-80h]
  ULONG v53; // [rsp+60h] [rbp-78h]
  int v54; // [rsp+64h] [rbp-74h]
  PVOID Object; // [rsp+68h] [rbp-70h] BYREF
  int v56; // [rsp+70h] [rbp-68h]
  PVOID v57; // [rsp+78h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  _DWORD *v60; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v61; // [rsp+98h] [rbp-40h]
  LARGE_INTEGER v63; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v64; // [rsp+F8h] [rbp+20h]

  v64 = ApcContext;
  v63.QuadPart = (LONGLONG)ApcRoutine;
  *(_QWORD *)&v50[7] = 0LL;
  P = 0LL;
  v9 = 0LL;
  v57 = 0LL;
  v53 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = *((_BYTE *)CurrentThread + 562);
  AccessMode = v10;
  result = sub_1402AC790(FileHandle, 1u, v10, (PVOID *)&v50[7], 0LL);
  if ( result < 0 )
    return result;
  v12 = *(_QWORD *)&v50[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v50[7]);
  v14 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  v15 = *(_DWORD *)(v12 + 80);
  if ( (v15 & 8) == 0
    || (v15 & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v17 = 0x40000100100348LL, !_bittest64(&v17, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject((PVOID)v12);
    return -1073741811;
  }
  v18 = Length;
  v19 = (Length >> 12) + ((Length & 0xFFF) != 0);
  if ( v10 )
  {
    v54 = 0;
    v20 = (__int64)IoStatusBlock;
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    sub_1402AAB50((unsigned int **)&IoStatusBlock, (__int64 *)&v63, *(_BYTE *)(v12 + 80) & 2);
    v22 = *(void **)&v50[7];
    if ( *(_QWORD *)(*(_QWORD *)&v50[7] + 176LL) && (v63.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)&v50[7]);
      return -1073741811;
    }
    v23 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v22 = *(void **)&v50[7];
    }
    if ( (*(_DWORD *)(v12 + 80) & 8) != 0 )
    {
      if ( (SectorSize = v14->SectorSize, (_WORD)SectorSize) && ((SectorSize - 1) & v18) != 0 && v18 % SectorSize
        || ByteOffset && (_WORD)SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        ObfDereferenceObject(v22);
        return -1073741811;
      }
    }
    v61 = KeGetCurrentThread();
    v25 = *((_QWORD *)v61 + 23);
    if ( !*(_QWORD *)(v25 + 1408) )
      goto LABEL_30;
    v26 = *(_WORD *)(v25 + 2412);
    if ( v26 == 332 || (v27 = v26 == 452, v28 = 0, v27) )
      v28 = 1;
    v50[1] = v28;
    v29 = 1;
    if ( !v28 )
LABEL_30:
      v29 = 0;
    v50[2] = v29;
    v30 = v19;
    if ( 8 * v19 )
    {
      if ( v29 )
      {
        if ( ((unsigned __int8)SegmentArray & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)SegmentArray & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&SegmentArray[v30] > 0x7FFFFFFF0000LL || &SegmentArray[v30] < SegmentArray )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( v18 )
    {
      Pool2 = (_FILE_SEGMENT_ELEMENT *)ExAllocatePool2(289LL, 8 * v19, 538996553LL);
      P = Pool2;
      memmove(Pool2, SegmentArray, 8 * v19);
      SegmentArray = Pool2;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v56 = i;
        if ( (unsigned int)i >= (unsigned int)v19 )
          break;
        if ( ((__int64)SegmentArray[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
    }
    else
    {
      Pool2 = (_FILE_SEGMENT_ELEMENT *)P;
    }
    if ( Key )
    {
      if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
        v21 = (__int64)Key;
      v53 = *(_DWORD *)v21;
      Pool2 = (_FILE_SEGMENT_ELEMENT *)P;
    }
    v12 = *(_QWORD *)&v50[7];
    v10 = AccessMode;
  }
  else
  {
    v23 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    Pool2 = (_FILE_SEGMENT_ELEMENT *)P;
    if ( Key )
      v53 = *Key;
  }
  if ( Event )
  {
    Object = 0LL;
    v33 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, v10, &Object, 0LL);
    v9 = (struct _KEVENT *)Object;
    v57 = Object;
    if ( v33 < 0 )
    {
      ObfDereferenceObject((PVOID)v12);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return v33;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  v34 = (_DWORD *)(v12 + 80);
  v60 = (_DWORD *)(v12 + 80);
  v35 = *(_DWORD *)(v12 + 80);
  if ( (v35 & 2) != 0 )
  {
    v36 = KeGetCurrentThread();
    --*((_WORD *)v36 + 242);
    v37 = *(_QWORD *)&v50[7];
    v38 = sub_140347C10(*(_QWORD *)&v50[7] + 128LL, 0LL);
    v50[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v37 + 116), 1) )
    {
      v12 = *(_QWORD *)&v50[7];
      v39 = sub_140709FAC(*(PVOID *)&v50[7], (__int64)v50);
    }
    else
    {
      if ( v38 )
        *(_BYTE *)(v38 + 18) = 1;
      v12 = *(_QWORD *)&v50[7];
      ObfReferenceObject(*(PVOID *)&v50[7]);
      v39 = 0;
    }
    if ( v50[0] )
    {
      if ( v9 )
        ObfDereferenceObject(v9);
      ObfDereferenceObject((PVOID)v12);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v39;
    }
    if ( !v23 || QuadPart == -2 )
      QuadPart = *(_QWORD *)(v12 + 104);
    v40 = 1;
    Pool2 = (_FILE_SEGMENT_ELEMENT *)P;
  }
  else
  {
    if ( !v23 && (v35 & 0x280) == 0 )
    {
      if ( v9 )
        ObfDereferenceObject(v9);
      goto LABEL_86;
    }
    v40 = 0;
  }
  if ( QuadPart < 0 )
  {
    if ( v9 )
      ObfDereferenceObject(v9);
    if ( v40 )
      sub_1402AD350((volatile __int32 *)v12);
LABEL_86:
    ObfDereferenceObject((PVOID)v12);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return -1073741811;
  }
  sub_1402AABB0(v12);
  LOBYTE(v41) = v40 ^ 1;
  LOBYTE(v42) = DeviceObject->StackSize;
  v43 = (IRP *)sub_1402AACA0((__int64)DeviceObject, v42, v41);
  v44 = v43;
  Object = v43;
  if ( v43 )
  {
    v43->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v12;
    v43->Tail.Overlay.Thread = CurrentThread;
    v43->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v43->RequestorMode = AccessMode;
    v43->PendingReturned = 0;
    v43->Cancel = 0;
    v43->CancelRoutine = 0LL;
    v43->UserEvent = v9;
    v45 = IoStatusBlock;
    v43->UserIosb = IoStatusBlock;
    v43->Overlay.AllocationSize = v63;
    v43->Overlay.AsynchronousParameters.UserApcContext = v64;
    CurrentStackLocation = v43->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v12;
    v43->AssociatedIrp.MasterIrp = 0LL;
    v43->MdlAddress = 0LL;
    v43->Flags = 0;
    if ( Length )
    {
      Mdl = IoAllocateMdl(SegmentArray->Buffer, Length, 0, 1u, v43);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v48 = SegmentArray;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoWriteAccess);
      v44->UserBuffer = v48->Buffer;
      v34 = v60;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v44->Flags |= (*v34 & 8 | 0x4800u) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v53;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    if ( sub_1402AC870(v12, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = v45->Information;
    return sub_140731680(DeviceObject, v44, AccessMode, v40, 0);
  }
  else
  {
    sub_140933BA4((PVOID)v12, v9);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return -1073741670;
  }
}
