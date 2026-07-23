/*
 * XREFs of NtQueryEaFile @ 0x1406B6D70
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14055A5BC @ 0x14055A5BC (sub_14055A5BC.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_1406BF8BC @ 0x1406BF8BC (sub_1406BF8BC.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  KPROCESSOR_MODE v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // rax
  UNICODE_STRING *v15; // rbx
  UNICODE_STRING *v16; // rdi
  signed int v17; // ecx
  NTSTATUS result; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // edi
  UNICODE_STRING *Pool2; // rax
  int v23; // edi
  struct _FILE_OBJECT *v24; // rsi
  _DWORD *v25; // r14
  struct _KTHREAD *v26; // rax
  volatile __int32 *v27; // rbx
  __int64 v28; // r9
  NTSTATUS v29; // ebx
  char v30; // r12
  struct _KEVENT *v31; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v33; // rdx
  IRP *v34; // rax
  IRP *Irp; // rdi
  bool v36; // zf
  PIO_STATUS_BLOCK v37; // rax
  struct _KEVENT *v38; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG Flags; // eax
  ULONG v41; // eax
  __int64 v42; // rax
  PMDL Mdl; // rcx
  char v44; // bl
  char v45; // al
  __int64 v46; // r9
  char v47; // [rsp+40h] [rbp-78h]
  char v48; // [rsp+41h] [rbp-77h]
  _WORD v49[7]; // [rsp+42h] [rbp-76h] BYREF
  ULONG v50; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  UNICODE_STRING *v53; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  PIRP v55; // [rsp+78h] [rbp-40h]
  __int128 v56; // [rsp+80h] [rbp-38h] BYREF

  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v49[3] = 0LL;
  v47 = 0;
  v50 = 0;
  v56 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = *((_BYTE *)CurrentThread + 562);
  v48 = v11;
  if ( !v11 )
  {
    if ( EaList && EaListLength )
    {
      v47 = 1;
      Pool2 = (UNICODE_STRING *)ExAllocatePool2(65LL, EaListLength, 538996553LL);
      v15 = Pool2;
      *(_QWORD *)&v49[3] = Pool2;
      if ( !Pool2 )
        return -1073741670;
      memmove(Pool2, EaList, EaListLength);
    }
    else
    {
      v15 = *(UNICODE_STRING **)&v49[3];
    }
    if ( EaIndex )
      v50 = *EaIndex;
LABEL_36:
    v23 = sub_1402AC790(FileHandle, 8u, v11, &Object, 0LL);
    if ( v23 < 0 )
    {
      if ( v47 )
        ExFreePoolWithTag(v15, 0);
      return v23;
    }
    v24 = (struct _FILE_OBJECT *)Object;
    v25 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v26 = KeGetCurrentThread();
      --*((_WORD *)v26 + 242);
      v27 = (volatile __int32 *)Object;
      v28 = sub_140347C10((__int64)Object + 128, 0LL);
      LOBYTE(v49[0]) = 0;
      if ( _InterlockedExchange(v27 + 29, 1) )
      {
        v24 = (struct _FILE_OBJECT *)Object;
        v29 = sub_140709FAC(Object, (__int64)v49);
      }
      else
      {
        if ( v28 )
          *(_BYTE *)(v28 + 18) = 1;
        v24 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v29 = 0;
      }
      if ( LOBYTE(v49[0]) )
      {
        if ( v47 )
          ExFreePoolWithTag(*(PVOID *)&v49[3], 0);
LABEL_54:
        ObfDereferenceObject(v24);
        return v29;
      }
      v30 = 1;
      v15 = *(UNICODE_STRING **)&v49[3];
    }
    else
    {
      v31 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 538996553LL);
      P = v31;
      if ( !v31 )
      {
        if ( v47 )
          ExFreePoolWithTag(v15, 0);
        v29 = -1073741670;
        goto LABEL_54;
      }
      KeInitializeEvent(v31, SynchronizationEvent, 0);
      v30 = 0;
    }
    sub_1402AABB0((__int64)v24);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v24);
    LOBYTE(v33) = RelatedDeviceObject->StackSize;
    v34 = (IRP *)sub_1402AACA0((__int64)RelatedDeviceObject, v33, 0LL);
    Irp = v34;
    v55 = v34;
    if ( !v34 )
    {
      if ( (*v25 & 2) == 0 )
        ExFreePoolWithTag(P, 0);
      sub_140933BA4(v24, 0LL);
      v36 = v47 == 0;
      goto LABEL_69;
    }
    v34->Tail.Overlay.OriginalFileObject = v24;
    v34->Tail.Overlay.Thread = CurrentThread;
    v34->RequestorMode = v48;
    if ( v30 )
    {
      v37 = IoStatusBlock;
      v38 = 0LL;
    }
    else
    {
      v34->Flags = 4;
      v37 = (PIO_STATUS_BLOCK)&v56;
      v38 = (struct _KEVENT *)P;
    }
    Irp->UserEvent = v38;
    Irp->UserIosb = v37;
    Irp->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 7;
    CurrentStackLocation[-1].FileObject = v24;
    if ( v47 )
    {
      Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)v15;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v15;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = EaListLength;
    }
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v41 = Length;
      if ( !Length )
      {
        Irp->AssociatedIrp.MasterIrp = 0LL;
        Irp->Flags |= 0x50u;
LABEL_80:
        v44 = v48;
LABEL_81:
        CurrentStackLocation[-1].Parameters.Read.Length = v41;
        CurrentStackLocation[-1].Parameters.Create.EaLength = v50;
        CurrentStackLocation[-1].Flags = 0;
        v45 = 0;
        if ( RestartScan )
        {
          CurrentStackLocation[-1].Flags = 1;
          v45 = 1;
        }
        if ( ReturnSingleEntry )
        {
          v45 |= 2u;
          CurrentStackLocation[-1].Flags = v45;
        }
        if ( EaIndex )
          CurrentStackLocation[-1].Flags = v45 | 4;
        result = sub_140731680(RelatedDeviceObject, Irp, v44, v30, 2);
        if ( !v30 )
        {
          LOBYTE(v46) = v44;
          return sub_1406BF8BC((unsigned int)result, P, Irp, v46, &v56, IoStatusBlock);
        }
        return result;
      }
      v42 = ExAllocatePool2(65LL, Length, 1112764233LL);
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v42;
      if ( !v42 )
      {
        sub_140658670((volatile __int32 *)&v24->Type, Irp, 0LL, P, (v24->Flags & 2) != 0);
        v36 = v15 == 0LL;
LABEL_69:
        if ( !v36 )
          ExFreePoolWithTag(v15, 0);
        return -1073741670;
      }
      Irp->Flags |= 0x70u;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      if ( Length )
      {
        Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        v44 = v48;
        sub_14055A5BC(Mdl, v48, 1, (__int64)RelatedDeviceObject, CurrentStackLocation[-1].MajorFunction);
        v41 = Length;
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    Irp->UserBuffer = Buffer;
LABEL_79:
    v41 = Length;
    goto LABEL_80;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v12 = (__int64)IoStatusBlock;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v13 = (__int64)EaIndex;
    v50 = *(_DWORD *)v13;
  }
  if ( !EaList || !EaListLength )
  {
    v15 = *(UNICODE_STRING **)&v49[3];
    goto LABEL_36;
  }
  v53 = 0LL;
  *(_DWORD *)&v49[1] = 0;
  v47 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  v15 = (UNICODE_STRING *)ExAllocatePool2(97LL, EaListLength, 538996553LL);
  *(_QWORD *)&v49[3] = v15;
  memmove(v15, EaList, EaListLength);
  v16 = v15;
  v53 = v15;
  v17 = EaListLength;
  *(_DWORD *)&v49[1] = EaListLength;
  while ( 1 )
  {
    if ( v17 < 5 )
    {
      *(_DWORD *)&v49[1] = 0;
      ExFreePoolWithTag(v15, 0);
      *(_QWORD *)&v49[3] = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v19 = *((unsigned __int8 *)&v16->MaximumLength + 2) + 6;
    if ( v17 < v19 )
      break;
    v20 = *(unsigned int *)&v16->Length;
    if ( !(_DWORD)v20 )
    {
      *(_DWORD *)&v49[1] = v17 - v19;
      if ( (int)(v17 - v19) >= 0 )
        goto LABEL_36;
      break;
    }
    if ( ((*((unsigned __int8 *)&v16->MaximumLength + 2) + 9) & 0xFFFFFFFC) != (_DWORD)v20 )
      break;
    if ( (int)v20 < 0 )
      break;
    v17 -= v20;
    *(_DWORD *)&v49[1] = v17;
    if ( v17 < 0 )
      break;
    v16 = (UNICODE_STRING *)((char *)v16 + v20);
    v53 = v16;
  }
  v21 = (_DWORD)v16 - (_DWORD)v15;
  *(_DWORD *)&v49[1] = v21;
  ExFreePoolWithTag(v15, 0);
  *(_QWORD *)&v49[3] = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v21;
  return -2147483628;
}
