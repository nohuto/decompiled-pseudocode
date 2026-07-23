/*
 * XREFs of NtSetVolumeInformationFile @ 0x1407FB3A0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_1406BF8BC @ 0x1406BF8BC (sub_1406BF8BC.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_14074C9D8 @ 0x14074C9D8 (sub_14074C9D8.c)
 *     IoReportTargetDeviceChange @ 0x1407FB910 (IoReportTargetDeviceChange.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  size_t v5; // rbx
  struct _KEVENT *v7; // r12
  struct _KTHREAD *CurrentThread; // r11
  KPROCESSOR_MODE v9; // r13
  ULONG v10; // eax
  NTSTATUS result; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int16 v14; // ax
  char v15; // al
  struct _FILE_OBJECT *v16; // rsi
  int v17; // eax
  struct _DEVICE_OBJECT *v18; // rdi
  bool v19; // r14
  struct _KTHREAD *v20; // rax
  volatile __int32 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  NTSTATUS v25; // ebx
  PVOID v26; // rcx
  char v27; // r13
  struct _KEVENT *Pool2; // rax
  __int64 v29; // rdx
  IRP *v30; // rax
  IRP *v31; // r14
  struct _IO_STATUS_BLOCK *v32; // rax
  struct _KEVENT *v33; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  struct _IRP *v35; // rax
  char v36; // dl
  int v37; // eax
  ULONG v38; // ecx
  char v39; // r13
  char v40[8]; // [rsp+40h] [rbp-C8h] BYREF
  PVOID v41; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK *v43; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  ULONG *p_Flags; // [rsp+68h] [rbp-A0h]
  struct _KTHREAD *v46; // [rsp+70h] [rbp-98h]
  void *Src; // [rsp+78h] [rbp-90h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-88h]
  PIRP Irp; // [rsp+88h] [rbp-80h]
  __int128 v50; // [rsp+90h] [rbp-78h] BYREF
  int NotificationStructure; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v52; // [rsp+A4h] [rbp-64h]
  int v53; // [rsp+B4h] [rbp-54h]
  __int64 v54; // [rsp+B8h] [rbp-50h]
  int v55; // [rsp+C0h] [rbp-48h]
  int v56; // [rsp+C4h] [rbp-44h]

  v5 = Length;
  *(_DWORD *)&v40[4] = Length;
  Src = FsInformation;
  v43 = IoStatusBlock;
  v41 = 0LL;
  v7 = 0LL;
  P = 0LL;
  Object = 0LL;
  CurrentThread = KeGetCurrentThread();
  v46 = CurrentThread;
  v9 = *((_BYTE *)CurrentThread + 562);
  v40[1] = v9;
  if ( v9 )
  {
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v10 = *((unsigned __int8 *)qword_140A38000 + (int)FsInformationClass);
    if ( !(_BYTE)v10 )
      return -1073741821;
    if ( Length < v10 )
      return -1073741820;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v12 = (__int64)IoStatusBlock;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = *((_QWORD *)CurrentThread + 23);
    if ( *(_QWORD *)(v13 + 1408)
      && ((v14 = *(_WORD *)(v13 + 2412), v14 == 332) || v14 == 452 ? (v15 = 1) : (v15 = 0), (v40[2] = v15) != 0) )
    {
      if ( !Length )
        goto LABEL_24;
      if ( ((unsigned __int8)FsInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else
    {
      if ( !Length )
        goto LABEL_24;
      if ( ((*((unsigned __int8 *)qword_140A38438 + (int)FsInformationClass) - 1LL) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    if ( (unsigned __int64)FsInformation + Length > 0x7FFFFFFF0000LL || (char *)FsInformation + Length < FsInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
LABEL_24:
  result = sub_1402AC790(FileHandle, dword_140A39850[FsInformationClass], v9, &v41, 0LL);
  if ( result < 0 )
    return result;
  v16 = (struct _FILE_OBJECT *)v41;
  v17 = sub_14074C9D8((struct _FILE_OBJECT *)v41, &Object);
  v18 = (struct _DEVICE_OBJECT *)Object;
  if ( v17 < 0 )
    v18 = 0LL;
  Object = v18;
  p_Flags = &v16->Flags;
  if ( (v16->Flags & 2) != 0 )
  {
    v19 = (v16->Flags & 4) != 0;
    v20 = KeGetCurrentThread();
    --*((_WORD *)v20 + 242);
    v21 = (volatile __int32 *)v41;
    v22 = sub_140347C10((__int64)v41 + 128, 0LL);
    v40[0] = 0;
    if ( _InterlockedExchange(v21 + 29, 1) )
    {
      LOBYTE(v24) = v19;
      LOBYTE(v23) = v9;
      v16 = (struct _FILE_OBJECT *)v41;
      v25 = sub_140709FAC((volatile signed __int32 *)v41, v23, v24, v22, v40);
    }
    else
    {
      if ( v22 )
        *(_BYTE *)(v22 + 18) = 1;
      v16 = (struct _FILE_OBJECT *)v41;
      ObfReferenceObject(v41);
      v25 = 0;
    }
    if ( v40[0] )
    {
      ObfDereferenceObject(v16);
      v26 = Object;
      if ( !Object )
        return v25;
LABEL_35:
      ObfDereferenceObject(v26);
      return v25;
    }
    v27 = 1;
    v18 = (struct _DEVICE_OBJECT *)Object;
    v5 = *(unsigned int *)&v40[4];
  }
  else
  {
    Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 538996553LL);
    v7 = Pool2;
    P = Pool2;
    if ( !Pool2 )
    {
      ObfDereferenceObject(v16);
LABEL_45:
      if ( v18 )
        ObfDereferenceObject(v18);
      return -1073741670;
    }
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
    v27 = 0;
  }
  v40[0] = v27;
  sub_1402AABB0((__int64)v16);
  DeviceObject = IoGetRelatedDeviceObject(v16);
  LOBYTE(v29) = DeviceObject->StackSize;
  v30 = (IRP *)sub_1402AACA0((__int64)DeviceObject, v29, 0LL);
  v31 = v30;
  Irp = v30;
  if ( !v30 )
  {
    if ( (*p_Flags & 2) == 0 )
      ExFreePoolWithTag(v7, 0);
    sub_140933BA4(v16, 0LL);
    goto LABEL_45;
  }
  v30->Tail.Overlay.OriginalFileObject = v16;
  v30->Tail.Overlay.Thread = v46;
  v30->RequestorMode = v40[1];
  v50 = 0LL;
  if ( v27 )
  {
    v32 = v43;
    v33 = 0LL;
  }
  else
  {
    v30->Flags = 4;
    v32 = (struct _IO_STATUS_BLOCK *)&v50;
    v33 = v7;
  }
  v31->UserEvent = v33;
  v31->UserIosb = v32;
  v31->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v31->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 11;
  CurrentStackLocation[-1].FileObject = v16;
  v31->AssociatedIrp.MasterIrp = 0LL;
  v31->MdlAddress = 0LL;
  v35 = (struct _IRP *)ExAllocatePool2(97LL, v5, 1112764233LL);
  v31->AssociatedIrp.MasterIrp = v35;
  memmove(v35, Src, v5);
  v36 = v40[1];
  if ( !v40[1] || FsInformationClass != FileFsLabelInformation )
  {
    v38 = *(_DWORD *)&v40[4];
LABEL_59:
    v31->Flags |= 0x30u;
    CurrentStackLocation[-1].Parameters.Read.Length = v38;
    CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
    v39 = v40[0];
    v25 = sub_140731680(DeviceObject, v31, v16, 0, v36, v40[0], 2u);
    if ( !v39 )
      v25 = sub_1406BF8BC(v25, v7, v31, v40[1], (unsigned int *)&v50, v43);
    if ( !v18 )
      return v25;
    if ( v25 >= 0 )
    {
      v53 = 0;
      v56 = 0;
      NotificationStructure = 2359297;
      v54 = 0LL;
      v55 = -1;
      v52 = xmmword_140023AD0;
      IoReportTargetDeviceChange(v18, &NotificationStructure);
    }
    v26 = v18;
    goto LABEL_35;
  }
  v37 = *(_DWORD *)v31->AssociatedIrp.MasterIrp;
  if ( v37 >= 0 )
  {
    v38 = *(_DWORD *)&v40[4];
    if ( (unsigned int)(v37 + 4) <= *(_DWORD *)&v40[4] )
      goto LABEL_59;
  }
  sub_140658670((volatile __int32 *)&v16->Type, v31, 0LL, v7, (v16->Flags & 2) != 0);
  if ( v18 )
    ObfDereferenceObject(v18);
  return -1073741811;
}
