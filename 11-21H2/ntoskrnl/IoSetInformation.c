/*
 * XREFs of IoSetInformation @ 0x14080AE60
 * Callers:
 *     sub_14059AEEC @ 0x14059AEEC (sub_14059AEEC.c)
 *     sub_14096EEE8 @ 0x14096EEE8 (sub_14096EEE8.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140661B8C @ 0x140661B8C (sub_140661B8C.c)
 *     sub_1406C78D4 @ 0x1406C78D4 (sub_1406C78D4.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     sub_140936BF8 @ 0x140936BF8 (sub_140936BF8.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  char v4; // r15
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  bool v10; // bl
  __int64 v11; // rax
  __int64 v12; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  IRP *v17; // rbx
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v20; // eax
  int FinalStatus; // esi
  BOOLEAN v23; // al
  NTSTATUS v24; // ebx
  ULONG Flags; // edx
  unsigned int v26; // eax
  ULONG v27; // edx
  ULONG v28; // edx
  CCHAR v29; // dl
  char v30; // [rsp+30h] [rbp-40h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v33; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+30h] BYREF
  ULONG v36; // [rsp+B0h] [rbp+40h]

  v36 = Length;
  v4 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  v33 = 0LL;
  v30 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --*((_WORD *)CurrentThread + 242);
    v11 = sub_140347C10((__int64)&FileObject->Lock, 0LL);
    LOBYTE(v35) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      LOBYTE(v12) = v10;
      v24 = sub_140709FAC((volatile signed __int32 *)&FileObject->Type, 0LL, v12, v11, &v35);
      if ( (_BYTE)v35 )
      {
        ObfDereferenceObject(FileObject);
        return v24;
      }
    }
    else
    {
      if ( v11 )
        *(_BYTE *)(v11 + 18) = 1;
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v4 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  LOBYTE(v35) = v4;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  if ( FileInformationClass == FileRenameInformationBypassAccessCheck )
  {
    FileInformationClass = FileRenameInformation;
  }
  else if ( FileInformationClass == FileRenameInformationExBypassAccessCheck )
  {
    FileInformationClass = FileRenameInformationEx;
  }
  else if ( FileInformationClass == FileLinkInformationBypassAccessCheck )
  {
    FileInformationClass = FileLinkInformation;
  }
  else
  {
    if ( FileInformationClass != FileLinkInformationExBypassAccessCheck )
    {
      if ( FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
      {
        FileInformationClass = FileCaseSensitiveInformation;
        v30 = 1;
      }
      goto LABEL_13;
    }
    FileInformationClass = FileLinkInformationEx;
  }
  v5 = 1;
LABEL_13:
  LOBYTE(v14) = RelatedDeviceObject->StackSize;
  LOBYTE(v15) = v4 ^ 1;
  v16 = sub_1402AACA0((__int64)RelatedDeviceObject, v14, v15);
  v17 = (IRP *)v16;
  if ( !v16 )
  {
    sub_140933BA4(FileObject, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(v16 + 192) = FileObject;
  *(_QWORD *)(v16 + 152) = KeGetCurrentThread();
  *(_BYTE *)(v16 + 64) = 0;
  if ( v4 )
  {
    *(_BYTE *)(v16 + 71) |= 2u;
    p_Event = 0LL;
  }
  else
  {
    *(_DWORD *)(v16 + 16) = 4;
    p_Event = &Event;
  }
  v17->UserEvent = p_Event;
  CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
  v17->UserIosb = (PIO_STATUS_BLOCK)&v33;
  v20 = v36;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  v17->Flags |= 0x10u;
  v17->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  CurrentStackLocation[-1].Parameters.Read.Length = v20;
  CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
  if ( v5 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  else if ( v30 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  sub_1402AE1B0((__int64)v17);
  switch ( FileInformationClass )
  {
    case FileModeInformation:
      Flags = FileObject->Flags;
      if ( (Flags & 8) == 0 )
      {
        if ( (*(_DWORD *)FileInformation & 2) != 0 )
          Flags |= 0x10u;
        else
          Flags &= ~0x10u;
        FileObject->Flags = Flags;
      }
      v26 = Flags & 0xFFFFFFDF;
      v27 = Flags | 0x20;
      if ( (*(_DWORD *)FileInformation & 4) == 0 )
        v27 = v26;
      FileObject->Flags = v27;
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
      {
        if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
          v28 = v27 | 4;
        else
          v28 = v27 & 0xFFFFFFFB;
        FileObject->Flags = v28;
      }
      --v17->CurrentLocation;
      FinalStatus = 0;
      --v17->Tail.Overlay.CurrentStackLocation;
      v29 = 0;
      v17->IoStatus.Status = 0;
      v17->IoStatus.Information = 0LL;
      goto LABEL_68;
    case FileRenameInformation:
      goto LABEL_33;
    case FileRenameInformationEx:
LABEL_61:
      v23 = *(_BYTE *)FileInformation & 1;
      goto LABEL_62;
    case FileLinkInformation:
LABEL_33:
      v23 = *(_BYTE *)FileInformation;
LABEL_62:
      CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = v23;
      goto LABEL_63;
    case FileLinkInformationEx:
      goto LABEL_61;
    case FileMoveClusterInformation:
      CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)FileInformation;
LABEL_63:
      if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
        break;
      FinalStatus = sub_1406C78D4(&Handle, (__int64)v17, (__int64)FileInformation, FileObject);
      if ( FinalStatus >= 0 )
        break;
      v29 = 2;
      goto LABEL_67;
    case FileMemoryPartitionInformation:
      FinalStatus = sub_140936BF8(FileObject, FileInformation, v36);
      v17->IoStatus.Status = FinalStatus;
      v29 = 0;
      v17->IoStatus.Information = 0LL;
LABEL_67:
      --v17->CurrentLocation;
      --v17->Tail.Overlay.CurrentStackLocation;
LABEL_68:
      IofCompleteRequest(v17, v29);
      goto LABEL_27;
  }
  FinalStatus = IofCallDriver(DeviceObject, v17);
LABEL_27:
  if ( (_BYTE)v35 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        sub_140661B8C(&FileObject->Event.Header.LockNV, v17);
      FinalStatus = FileObject->FinalStatus;
    }
    sub_1402AD350((volatile __int32 *)&FileObject->Type);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v33;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
