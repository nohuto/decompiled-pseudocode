/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1407AF670
 * Callers:
 *     sub_1406AECC0 @ 0x1406AECC0 (sub_1406AECC0.c)
 *     sub_1407DE074 @ 0x1407DE074 (sub_1407DE074.c)
 *     sub_1407E0A98 @ 0x1407E0A98 (sub_1407E0A98.c)
 * Callees:
 *     sub_14024B024 @ 0x14024B024 (sub_14024B024.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140556AEC @ 0x140556AEC (sub_140556AEC.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_1406BF8BC @ 0x1406BF8BC (sub_1406BF8BC.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // r10
  LONG *p_LockNV; // r13
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE v11; // di
  FS_INFORMATION_CLASS v12; // r14d
  unsigned int v13; // eax
  NTSTATUS result; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int16 v17; // ax
  bool v18; // al
  ULONG v19; // r8d
  struct _FILE_OBJECT *v20; // rdi
  _DWORD *v21; // rbx
  int v22; // r12d
  int v23; // ecx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  bool v28; // r12
  struct _KTHREAD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  NTSTATUS v32; // ebx
  char v33; // r12
  _BYTE *Pool2; // r14
  NTSTATUS v35; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _KEVENT *v37; // rax
  __int64 v38; // rax
  IRP *v39; // rbx
  PIO_STATUS_BLOCK v40; // rax
  struct _KEVENT *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 v45; // [rsp+40h] [rbp-68h]
  _BYTE DeviceObject[15]; // [rsp+41h] [rbp-67h] BYREF
  _BYTE *v47; // [rsp+50h] [rbp-58h]
  _DWORD *v48; // [rsp+58h] [rbp-50h]
  __int64 v49; // [rsp+60h] [rbp-48h]
  __int128 v50; // [rsp+68h] [rbp-40h] BYREF

  v5 = Length;
  *(_QWORD *)&DeviceObject[7] = 0LL;
  p_LockNV = 0LL;
  CurrentThread = KeGetCurrentThread();
  v49 = (__int64)CurrentThread;
  v11 = *((_BYTE *)CurrentThread + 562);
  v45 = v11;
  if ( v11 )
  {
    v12 = FsInformationClass;
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v13 = *((unsigned __int8 *)qword_140A38010 + (int)FsInformationClass);
    if ( !(_BYTE)v13 )
      return -1073741821;
    if ( (unsigned int)v5 < v13 )
      return -1073741820;
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v15 = (__int64)IoStatusBlock;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = *((_QWORD *)CurrentThread + 23);
    v18 = 0;
    if ( *(_QWORD *)(v16 + 1408) )
    {
      v17 = *(_WORD *)(v16 + 2412);
      if ( v17 == 332 || v17 == 452 )
        v18 = 1;
    }
    DeviceObject[0] = v18;
    v19 = 4;
    if ( !v18 )
      v19 = *((unsigned __int8 *)qword_140A38438 + (int)FsInformationClass);
    ProbeForWrite(FsInformation, v5, v19);
  }
  else
  {
    v12 = FsInformationClass;
  }
  result = sub_1402AC790(FileHandle, dword_140A39810[v12], v11, (PVOID *)&DeviceObject[7], 0LL);
  *(_DWORD *)&DeviceObject[3] = result;
  if ( result < 0 )
    return result;
  v20 = *(struct _FILE_OBJECT **)&DeviceObject[7];
  v21 = (_DWORD *)(*(_QWORD *)&DeviceObject[7] + 80LL);
  v48 = (_DWORD *)(*(_QWORD *)&DeviceObject[7] + 80LL);
  v22 = *(_DWORD *)(*(_QWORD *)&DeviceObject[7] + 80LL);
  if ( (v22 & 0x800) != 0 )
  {
    if ( v12 != FileFsDeviceInformation )
    {
      ObfDereferenceObject(*(PVOID *)&DeviceObject[7]);
      return -1073741808;
    }
LABEL_23:
    if ( (*(_DWORD *)(*(_QWORD *)&DeviceObject[7] + 80LL) & 0x800) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&DeviceObject[7] + 8LL) + 72LL) != 20 )
    {
      v23 = 0;
      v24 = *(_QWORD *)(*(_QWORD *)&DeviceObject[7] + 8LL);
      v25 = *(_QWORD *)(v24 + 56);
      if ( v25 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)&DeviceObject[7] + 16LL);
        if ( v26 == v25 )
        {
          v23 = *(_WORD *)(v26 + 4) & 1;
          v20 = *(struct _FILE_OBJECT **)&DeviceObject[7];
        }
        else
        {
          v23 = sub_14024B024(*(_QWORD *)(*(_QWORD *)&DeviceObject[7] + 8LL));
        }
      }
      if ( Length >= 8 )
      {
        *(_DWORD *)FsInformation = *(_DWORD *)(v24 + 72);
        v27 = *(_DWORD *)(v24 + 52);
        *((_DWORD *)FsInformation + 1) = v27;
        if ( v23 )
          *((_DWORD *)FsInformation + 1) = v27 | 0x20;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 8LL;
        *(_DWORD *)&DeviceObject[3] = 0;
        ObfDereferenceObject(v20);
        return 0;
      }
      else
      {
        ObfDereferenceObject(v20);
        return -1073741820;
      }
    }
    goto LABEL_34;
  }
  if ( v12 == FileFsDeviceInformation )
    goto LABEL_23;
LABEL_34:
  if ( (v22 & 2) != 0 )
  {
    v28 = (v22 & 4) != 0;
    v29 = KeGetCurrentThread();
    --*((_WORD *)v29 + 242);
    v30 = *(_QWORD *)&DeviceObject[7];
    v31 = sub_140347C10(*(_QWORD *)&DeviceObject[7] + 128LL, 0LL);
    DeviceObject[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v30 + 116), 1) )
    {
      v20 = *(struct _FILE_OBJECT **)&DeviceObject[7];
      v32 = sub_140709FAC(*(volatile signed __int32 **)&DeviceObject[7], v45, v28, v31, DeviceObject);
    }
    else
    {
      if ( v31 )
        *(_BYTE *)(v31 + 18) = 1;
      v20 = *(struct _FILE_OBJECT **)&DeviceObject[7];
      ObfReferenceObject(*(PVOID *)&DeviceObject[7]);
      v32 = 0;
    }
    if ( DeviceObject[0] )
      goto LABEL_49;
    v33 = 1;
    v21 = v48;
  }
  else
  {
    v33 = 0;
  }
  if ( v12 == FileFsDriverPathInformation )
  {
    v47 = 0LL;
    Pool2 = (_BYTE *)ExAllocatePool2(97LL, Length, 1112764233LL);
    v47 = Pool2;
    memmove(Pool2, FsInformation, Length);
    v35 = sub_140556AEC((__int64)v20, (__int64)Pool2, Length);
    v32 = v35;
    *(_DWORD *)&DeviceObject[3] = v35;
    if ( v35 < 0 )
      RtlRaiseStatus(v35);
    *(_BYTE *)FsInformation = *Pool2;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    if ( (v20->Flags & 2) != 0 )
      sub_1402AD350((volatile __int32 *)&v20->Type);
LABEL_49:
    ObfDereferenceObject(v20);
    return v32;
  }
  sub_1402AABB0((__int64)v20);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v20);
  *(_QWORD *)&DeviceObject[7] = RelatedDeviceObject;
  if ( (*v21 & 2) == 0 )
  {
    v37 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 538996553LL);
    p_LockNV = &v37->Header.LockNV;
    if ( !v37 )
    {
      ObfDereferenceObject(v20);
      return -1073741670;
    }
    KeInitializeEvent(v37, SynchronizationEvent, 0);
    RelatedDeviceObject = *(PDEVICE_OBJECT *)&DeviceObject[7];
  }
  v38 = sub_1402AACA0((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  v39 = (IRP *)v38;
  if ( v38 )
  {
    *(_QWORD *)(v38 + 192) = v20;
    *(_QWORD *)(v38 + 152) = v49;
    *(_BYTE *)(v38 + 64) = v45;
    v50 = 0LL;
    if ( v33 )
    {
      v40 = IoStatusBlock;
      v41 = 0LL;
    }
    else
    {
      *(_DWORD *)(v38 + 16) = 4;
      v40 = (PIO_STATUS_BLOCK)&v50;
      v41 = (struct _KEVENT *)p_LockNV;
    }
    v39->UserEvent = v41;
    v39->UserIosb = v40;
    v39->Overlay.AllocationSize.QuadPart = 0LL;
    v42 = (__int64)&v39->Tail.Overlay.CurrentStackLocation[-1];
    v49 = v42;
    *(_BYTE *)v42 = 10;
    *(_QWORD *)(v42 + 48) = v20;
    v39->UserBuffer = FsInformation;
    v39->AssociatedIrp.MasterIrp = 0LL;
    v39->MdlAddress = 0LL;
    v43 = ExAllocatePool2(65LL, Length, 1112764233LL);
    v39->AssociatedIrp.MasterIrp = (struct _IRP *)v43;
    if ( v43 )
    {
      v39->Flags |= 0x870u;
      v44 = v49;
      *(_DWORD *)(v49 + 8) = Length;
      *(_DWORD *)(v44 + 16) = v12;
      result = sub_140731680(*(PDEVICE_OBJECT *)&DeviceObject[7], v39, v20, 1, v45, v33, 2u);
      if ( !v33 )
        return sub_1406BF8BC(result, p_LockNV, v39, v45, (unsigned int *)&v50, IoStatusBlock);
    }
    else
    {
      sub_140658670((volatile __int32 *)&v20->Type, v39, 0LL, p_LockNV, (v20->Flags & 2) != 0);
      return -1073741670;
    }
  }
  else
  {
    if ( (*v48 & 2) == 0 )
      ExFreePoolWithTag(p_LockNV, 0);
    sub_140933BA4(v20, 0LL);
    return -1073741670;
  }
  return result;
}
