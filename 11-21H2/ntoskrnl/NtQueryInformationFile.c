/*
 * XREFs of NtQueryInformationFile @ 0x1407AFEF0
 * Callers:
 *     sub_140360A28 @ 0x140360A28 (sub_140360A28.c)
 *     sub_1407D84EC @ 0x1407D84EC (sub_1407D84EC.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1409BCB10 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     sub_1402A0DA4 @ 0x1402A0DA4 (sub_1402A0DA4.c)
 *     sub_1402A41A4 @ 0x1402A41A4 (sub_1402A41A4.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_1402F672C @ 0x1402F672C (sub_1402F672C.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 *     sub_1402F8AE0 @ 0x1402F8AE0 (sub_1402F8AE0.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140417C50 @ 0x140417C50 (sub_140417C50.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140661B8C @ 0x140661B8C (sub_140661B8C.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_1407B0890 @ 0x1407B0890 (sub_1407B0890.c)
 *     sub_1407B09BC @ 0x1407B09BC (sub_1407B09BC.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     sub_1409397B8 @ 0x1409397B8 (sub_1409397B8.c)
 *     sub_140939830 @ 0x140939830 (sub_140939830.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  unsigned __int8 v9; // di
  FILE_INFORMATION_CLASS v10; // r14d
  NTSTATUS result; // eax
  NTSTATUS v12; // edi
  struct _KTHREAD *v13; // rax
  NTSTATUS v14; // edi
  PVOID v15; // rbx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v17; // rsi
  NTSTATUS v18; // ebx
  bool v19; // di
  struct _KTHREAD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  PFAST_IO_QUERY_BASIC_INFO FastIoQueryBasicInfo; // rbx
  struct _FAST_IO_DISPATCH *FastIoQueryStandardInfo; // rax
  __int64 v25; // r13
  char v26; // bl
  char v27; // r13
  __int64 v28; // rax
  IRP *v29; // rbx
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 Pool2; // rax
  char v33; // r11
  NTSTATUS v34; // esi
  int v35; // eax
  _DWORD *v36; // r9
  _DWORD *p_Type; // r8
  int v38; // ecx
  _DWORD *v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  _DWORD *v42; // rdx
  struct _IRP *MasterIrp; // rdx
  struct _DEVICE_OBJECT *v44; // r10
  int v45; // eax
  __int64 v46; // r9
  NTSTATUS v47; // eax
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v49; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v51; // r9
  int v52; // eax
  bool v53; // zf
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-F8h]
  unsigned __int8 v55; // [rsp+30h] [rbp-E8h]
  char v56; // [rsp+31h] [rbp-E7h]
  PVOID Object; // [rsp+38h] [rbp-E0h] BYREF
  char v58; // [rsp+40h] [rbp-D8h]
  BOOLEAN v59; // [rsp+41h] [rbp-D7h]
  NTSTATUS v60; // [rsp+44h] [rbp-D4h]
  char v61; // [rsp+48h] [rbp-D0h]
  char v62; // [rsp+49h] [rbp-CFh]
  _WORD DeviceObject[7]; // [rsp+4Ah] [rbp-CEh] BYREF
  unsigned int v64; // [rsp+58h] [rbp-C0h] BYREF
  PFAST_IO_QUERY_BASIC_INFO v65; // [rsp+60h] [rbp-B8h] BYREF
  PIO_STATUS_BLOCK v66; // [rsp+68h] [rbp-B0h]
  struct _OBJECT_HANDLE_INFORMATION v67; // [rsp+70h] [rbp-A8h] BYREF
  PFAST_IO_DISPATCH FastIoDispatch; // [rsp+78h] [rbp-A0h]
  PFAST_IO_QUERY_BASIC_INFO v69; // [rsp+80h] [rbp-98h] BYREF
  PIO_STATUS_BLOCK v70; // [rsp+88h] [rbp-90h]
  __int128 v71; // [rsp+90h] [rbp-88h]
  __int64 v72; // [rsp+A0h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-70h]
  __int128 v74; // [rsp+B0h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+C0h] [rbp-58h] BYREF

  v66 = IoStatusBlock;
  v70 = IoStatusBlock;
  Object = 0LL;
  memset(&Event, 0, sizeof(Event));
  v74 = 0LL;
  v67 = 0LL;
  v59 = 0;
  v56 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = *((_BYTE *)CurrentThread + 562);
  v55 = v9;
  HIBYTE(DeviceObject[1]) = v9;
  v10 = FileInformationClass;
  result = sub_1407B0890(v9, CurrentThread, IoStatusBlock, FileInformation, Length, FileInformationClass);
  if ( result >= 0 )
  {
    if ( !v9 && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
    {
      v10 = FileCaseSensitiveInformation;
      v56 = 1;
    }
    result = sub_1402AC790(FileHandle, dword_140A3B230[v10], v9, &Object, &v67);
    v12 = result;
    v60 = result;
    if ( result >= 0 )
    {
      if ( v10 == FileAccessInformation )
      {
        v13 = KeGetCurrentThread();
        ++*((_QWORD *)v13 + 114);
        __incgsdword(0x2EE4u);
        if ( Length < 4 )
        {
          ObfDereferenceObject(Object);
          return -1073741820;
        }
        *(_DWORD *)FileInformation = v67.GrantedAccess;
        v61 = 0;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 4LL;
        v14 = v60;
        goto LABEL_31;
      }
      v15 = Object;
      if ( (*((_DWORD *)Object + 20) & 0x800) != 0 )
      {
        AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)Object + 1));
      }
      else
      {
        AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        v15 = Object;
      }
      v17 = (__int64)AttachedDevice;
      *(_QWORD *)&DeviceObject[3] = AttachedDevice;
      FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
      if ( v10 == FileIsRemoteDeviceInformation )
      {
        v62 = 1;
        if ( Length )
        {
          *(_BYTE *)FileInformation = (*(_BYTE *)(*((_QWORD *)v15 + 1) + 52LL) & 0x10) != 0;
          v62 = 0;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 1LL;
          ObfDereferenceObject(v15);
          return v12;
        }
        else
        {
          ObfDereferenceObject(v15);
          return -1073741820;
        }
      }
      if ( v10 == FileVolumeNameInformation )
      {
        v18 = sub_1402A0DA4(*((void **)v15 + 1), (__int64)IoStatusBlock, FileInformation, Length);
        ObfDereferenceObject(Object);
        return v18;
      }
      if ( (*((_DWORD *)v15 + 20) & 2) != 0 )
      {
        v19 = (*((_DWORD *)v15 + 20) & 4) != 0;
        v20 = KeGetCurrentThread();
        --*((_WORD *)v20 + 242);
        v21 = sub_140347C10((__int64)v15 + 128, 0LL);
        LOBYTE(DeviceObject[0]) = 0;
        if ( _InterlockedExchange((volatile __int32 *)v15 + 29, 1) )
        {
          v14 = sub_140709FAC((volatile signed __int32 *)v15, v55, v19, v21, DeviceObject);
        }
        else
        {
          if ( v21 )
            *(_BYTE *)(v21 + 18) = 1;
          ObfReferenceObject(v15);
          v14 = 0;
        }
        v60 = v14;
        if ( LOBYTE(DeviceObject[0]) )
          goto LABEL_31;
        if ( v10 == FilePositionInformation )
        {
          HIBYTE(DeviceObject[0]) = 1;
          if ( Length >= 8 )
          {
            *(_QWORD *)FileInformation = *((_QWORD *)Object + 13);
            HIBYTE(DeviceObject[0]) = 0;
            IoStatusBlock->Status = 0;
            IoStatusBlock->Information = 8LL;
          }
          else
          {
            v14 = -1073741820;
          }
          goto LABEL_30;
        }
        if ( FastIoDispatch )
        {
          if ( (FastIoQueryBasicInfo = FastIoDispatch->FastIoQueryBasicInfo,
                v65 = FastIoQueryBasicInfo,
                v69 = FastIoQueryBasicInfo,
                FastIoQueryStandardInfo = (struct _FAST_IO_DISPATCH *)FastIoDispatch->FastIoQueryStandardInfo,
                FastIoDispatch = FastIoQueryStandardInfo,
                v10 == FileBasicInformation)
            && FastIoQueryBasicInfo
            || v10 == FileStandardInformation && FastIoQueryStandardInfo )
          {
            v71 = 0LL;
            v58 = 0;
            LOBYTE(DeviceObject[1]) = 0;
            if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(v17 + 8)) )
              v25 = sub_140A8A9AC();
            else
              v25 = 0LL;
            v72 = v25;
            Timeout = (PLARGE_INTEGER)v17;
            LOBYTE(v22) = 1;
            v58 = sub_14042A5E0(Object, v22);
            v26 = v58;
            if ( v25 )
              sub_140A8A8D4(v25, v65);
            if ( v26 )
            {
              v14 = v71;
              v60 = v71;
              LOBYTE(DeviceObject[1]) = 1;
              *(_OWORD *)&IoStatusBlock->Status = v71;
LABEL_30:
              sub_1402AD350((volatile __int32 *)Object);
LABEL_31:
              ObfDereferenceObject(Object);
              return v14;
            }
          }
        }
        v27 = 1;
      }
      else
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v27 = 0;
      }
      LOBYTE(DeviceObject[2]) = v27;
      sub_1402AABB0((__int64)Object);
      v28 = sub_1402AACA0(v17, *(unsigned __int8 *)(v17 + 76), 0LL);
      v29 = (IRP *)v28;
      v70 = (PIO_STATUS_BLOCK)v28;
      if ( !v28 )
      {
        sub_140933BA4(Object, 0LL);
        return -1073741670;
      }
      *(_QWORD *)(v28 + 192) = Object;
      *(_QWORD *)(v28 + 152) = CurrentThread;
      *(_BYTE *)(v28 + 64) = v55;
      if ( v27 )
      {
        *(_BYTE *)(v28 + 71) |= 2u;
        p_Event = 0LL;
      }
      else
      {
        if ( v55 == 1 )
          v59 = KeSetKernelStackSwapEnable(0);
        v29->Flags = 4;
        v66 = (PIO_STATUS_BLOCK)&v74;
        p_Event = &Event;
      }
      v29->UserEvent = p_Event;
      v29->UserIosb = v66;
      v29->Overlay.AllocationSize.QuadPart = 0LL;
      CurrentStackLocation = v29->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 5;
      CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
      v29->UserBuffer = FileInformation;
      v29->AssociatedIrp.MasterIrp = 0LL;
      v29->MdlAddress = 0LL;
      Pool2 = ExAllocatePool2(65LL, Length, 1112764233LL);
      v29->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
      if ( !Pool2 )
      {
        sub_140658670((volatile __int32 *)Object, v29, 0LL, 0LL, (*((_DWORD *)Object + 20) & 2) != 0);
        if ( v59 )
          KeSetKernelStackSwapEnable(1u);
        return -1073741670;
      }
      v29->Flags |= 0x870u;
      CurrentStackLocation[-1].Parameters.Read.Length = Length;
      CurrentStackLocation[-1].Parameters.Create.Options = v10;
      if ( v56 )
        CurrentStackLocation[-1].Flags |= 1u;
      sub_1402AE1B0((__int64)v29);
      sub_1402F672C();
      v33 = 0;
      v34 = 0;
      v60 = 0;
      switch ( v10 )
      {
        case FileModeInformation:
          v35 = sub_1407B09BC(Object);
          *v36 = v35;
          v29->IoStatus.Information = 4LL;
          v29->IoStatus.Status = 0;
          goto LABEL_90;
        case FileAlignmentInformation:
          *(_DWORD *)v29->AssociatedIrp.MasterIrp = *(_DWORD *)(*(_QWORD *)&DeviceObject[3] + 152LL);
          v29->IoStatus.Information = 4LL;
          v29->IoStatus.Status = 0;
          goto LABEL_90;
        case FileIoCompletionNotificationInformation:
          p_Type = &v29->AssociatedIrp.MasterIrp->Type;
          *p_Type = 0;
          v38 = 0;
          v39 = Object;
          if ( (*((_DWORD *)Object + 20) & 0x4000000) != 0 )
          {
            v38 = 2;
            *p_Type = 2;
            v39 = Object;
          }
          if ( (v39[20] & 0x8000000) != 0 )
          {
            v38 |= 4u;
            *p_Type = v38;
            v39 = Object;
          }
          if ( (v39[20] & 0x2000000) != 0 )
            *p_Type = v38 | 1;
          v29->IoStatus.Information = 4LL;
          v29->IoStatus.Status = 0;
LABEL_90:
          if ( v34 == 259 )
          {
            if ( !v27 )
            {
              v47 = KeWaitForSingleObject(&Event, Executive, v55, 0, 0LL);
              if ( v47 == 257 || v47 == 192 )
                sub_140661B8C(&Event, v29);
              v34 = v74;
              *(_OWORD *)&IoStatusBlock->Status = v74;
              goto LABEL_109;
            }
            v34 = sub_1402A41A4(v29, (unsigned int *)Object, v55);
          }
          else
          {
            v69 = 0LL;
            v65 = 0LL;
            if ( !v27 )
              v29->UserEvent = 0LL;
            v29->UserIosb = IoStatusBlock;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            sub_140347E10((__int64)&v29->Tail, (__int64)&v69, &v65, (ULONG_PTR *)&Object, &v65);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v49 = KeGetCurrentIrql();
                if ( v49 <= 0xFu && CurrentIrql <= 0xFu && v49 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v51 = *((_QWORD *)CurrentPrcb + 4375);
                  v52 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v53 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
                  *(_DWORD *)(v51 + 20) &= v52;
                  if ( v53 )
                    sub_140418E4C((__int64)CurrentPrcb);
                  v34 = v60;
                }
              }
            }
            __writecr8(CurrentIrql);
            if ( !v27 )
              goto LABEL_109;
          }
          sub_1402AD350((volatile __int32 *)Object);
LABEL_109:
          if ( v59 )
            KeSetKernelStackSwapEnable(1u);
          return v34;
        case FileIoPriorityHintInformation:
          v40 = *((_QWORD *)Object + 26);
          if ( v40 )
          {
            v41 = sub_140417C50(*(_DWORD *)(v40 + 80));
            *v42 = v41;
          }
          else
          {
            *(_DWORD *)v29->AssociatedIrp.MasterIrp = 2;
          }
          v29->IoStatus.Information = 4LL;
          v29->IoStatus.Status = 0;
          goto LABEL_90;
        case FileProcessIdsUsingFileInformation:
          MasterIrp = v29->AssociatedIrp.MasterIrp;
          v64 = 0;
          v34 = sub_140939830(Object, MasterIrp, Length, &v64, Timeout);
          v60 = v34;
          v33 = 1;
          if ( v34 == -1073741820 )
          {
            IoStatusBlock->Information = v64;
            v44 = *(struct _DEVICE_OBJECT **)&DeviceObject[3];
            goto LABEL_82;
          }
          v29->IoStatus.Information = v64;
          break;
        case FileNumaNodeInformation:
          v34 = sub_1409397B8(Object, v29->AssociatedIrp.MasterIrp);
          v60 = v34;
          v33 = 1;
          if ( v34 >= 0 )
            v29->IoStatus.Information = 2LL;
          break;
        case FileAllInformation:
          HIDWORD(v29->AssociatedIrp.MasterIrp->UserIosb) = v67.GrantedAccess;
          v45 = sub_1407B09BC(Object);
          *(_DWORD *)(v46 + 88) = v45;
          v44 = *(struct _DEVICE_OBJECT **)&DeviceObject[3];
          *(_DWORD *)(v46 + 92) = *(_DWORD *)(*(_QWORD *)&DeviceObject[3] + 152LL);
          v29->IoStatus.Information = 12LL;
LABEL_82:
          if ( v33 )
          {
            v29->IoStatus.Status = v34;
          }
          else
          {
            v34 = sub_1402F8AE0(v44, v29, v27, Object, 2);
            v60 = v34;
          }
          goto LABEL_90;
      }
      v44 = *(struct _DEVICE_OBJECT **)&DeviceObject[3];
      goto LABEL_82;
    }
  }
  return result;
}
