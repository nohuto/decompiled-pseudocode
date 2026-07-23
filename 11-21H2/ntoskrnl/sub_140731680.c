/*
 * XREFs of sub_140731680 @ 0x140731680
 * Callers:
 *     sub_1404183A0 @ 0x1404183A0 (sub_1404183A0.c)
 *     sub_140658DCC @ 0x140658DCC (sub_140658DCC.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     sub_1406BF5F0 @ 0x1406BF5F0 (sub_1406BF5F0.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     NtQueryDirectoryFileEx @ 0x1407562E0 (NtQueryDirectoryFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     sub_140935320 @ 0x140935320 (sub_140935320.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     sub_140211BD0 @ 0x140211BD0 (sub_140211BD0.c)
 *     IoGetIoPriorityHint @ 0x140221E10 (IoGetIoPriorityHint.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140288630 (IoGetBaseFileSystemDeviceObject.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     IoSetActivityIdThread @ 0x1402DE9B0 (IoSetActivityIdThread.c)
 *     sub_1402F8AE0 @ 0x1402F8AE0 (sub_1402F8AE0.c)
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140417B94 @ 0x140417B94 (sub_140417B94.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140556608 @ 0x140556608 (sub_140556608.c)
 *     sub_140557078 @ 0x140557078 (sub_140557078.c)
 *     sub_140559FA8 @ 0x140559FA8 (sub_140559FA8.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     sub_140661B8C @ 0x140661B8C (sub_140661B8C.c)
 *     sub_1406C9928 @ 0x1406C9928 (sub_1406C9928.c)
 */

__int64 __fastcall sub_140731680(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        struct _FILE_OBJECT *a3,
        char a4,
        char a5,
        char a6,
        unsigned int a7)
{
  LARGE_INTEGER AllocationSize; // rax
  PIO_COMPLETION_CONTEXT CompletionContext; // r14
  ULONG Flags; // eax
  ULONG *p_Flags; // r15
  _QWORD *v14; // rbx
  PIO_STATUS_BLOCK UserIosb; // rcx
  _DWORD *FileObjectExtension; // rcx
  unsigned int v17; // esi
  struct _KTHREAD *v18; // rax
  unsigned int v19; // eax
  ULONG DeviceType; // ecx
  struct _KTHREAD *CurrentThread; // rax
  PFILE_OBJECT v22; // r14
  _BYTE *FsContext; // rax
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r10
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  PFILE_OBJECT v26; // r9
  _DWORD *v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // edx
  struct _KTHREAD *v30; // r8
  unsigned int v31; // edx
  KPROCESSOR_MODE RequestorMode; // si
  PETHREAD Thread; // rcx
  ULONG v34; // eax
  _BYTE *v35; // rax
  __int64 v36; // rbx
  ULONG v37; // eax
  KPRIORITY v38; // eax
  PFILE_OBJECT v39; // rsi
  int v40; // r14d
  KPROCESSOR_MODE v41; // r8
  NTSTATUS v42; // eax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v44; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v46; // r9
  int v47; // eax
  bool v48; // zf
  unsigned int FinalStatus; // [rsp+30h] [rbp-50h]
  struct _IO_COMPLETION_CONTEXT *v52; // [rsp+38h] [rbp-48h] BYREF
  PFILE_OBJECT FileObject; // [rsp+40h] [rbp-40h] BYREF
  __int64 v54; // [rsp+48h] [rbp-38h] BYREF
  __int128 v55; // [rsp+50h] [rbp-30h] BYREF

  AllocationSize = Irp->Overlay.AllocationSize;
  FileObject = a3;
  FinalStatus = 0;
  if ( (AllocationSize.LowPart & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    AllocationSize.QuadPart &= ~1uLL;
    Irp->Overlay.AllocationSize = AllocationSize;
  }
  CompletionContext = a3->CompletionContext;
  v52 = CompletionContext;
  if ( a6 || AllocationSize.QuadPart )
  {
    p_Flags = &Irp->Flags;
    if ( (Irp->Flags & 0x200000) == 0 )
    {
      if ( (a3->Flags & 2) != 0 )
        Irp->AllocationFlags |= 2u;
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  Flags = Irp->Flags;
  p_Flags = &Irp->Flags;
  if ( (Flags & 0x200000) != 0 )
  {
LABEL_23:
    if ( sub_140211BD0((__int64)Irp, (__int64)a3, 0) )
      goto LABEL_28;
LABEL_27:
    sub_1402AE1B0((__int64)Irp);
    goto LABEL_28;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && CompletionContext )
  {
    if ( sub_140211BD0((__int64)Irp, (__int64)a3, 1) )
      goto LABEL_28;
    goto LABEL_27;
  }
  if ( (Flags & 0x10) != 0 )
    goto LABEL_27;
  if ( CompletionContext )
    goto LABEL_27;
  if ( !a3->FileObjectExtension )
    goto LABEL_27;
  v14 = (_QWORD *)sub_1402A3A14((__int64)a3, 2, 0LL);
  if ( !v14 )
    goto LABEL_27;
  while ( 1 )
  {
    UserIosb = Irp->UserIosb;
    if ( (unsigned __int64)UserIosb >= *v14
      && (unsigned __int64)&UserIosb[1] <= v14[1]
      && v14[4] == *((_QWORD *)KeGetCurrentThread() + 23)
      && sub_140211BD0((__int64)Irp, (__int64)a3, 0) )
    {
      break;
    }
    v14 = (_QWORD *)v14[5];
    if ( !v14 )
      goto LABEL_27;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb + v14[3] - *v14);
LABEL_28:
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension || (*FileObjectExtension & 4) == 0 || !sub_1406C9928(*((_QWORD *)KeGetCurrentThread() + 23)) )
  {
    if ( a7 <= 1 )
    {
      DeviceType = DeviceObject->DeviceType;
      if ( DeviceType - 7 <= 2 || DeviceType == 36 )
        sub_1403437A0((__int64)Irp, (__int64)KeGetCurrentThread());
      CurrentThread = KeGetCurrentThread();
      if ( a7 )
      {
        ++*((_QWORD *)CurrentThread + 113);
        v19 = 12000;
      }
      else
      {
        ++*((_QWORD *)CurrentThread + 112);
        v19 = 11996;
      }
    }
    else
    {
      v18 = KeGetCurrentThread();
      ++*((_QWORD *)v18 + 114);
      v19 = 12004;
    }
    __incgsdword(v19);
    v22 = FileObject;
    if ( (FileObject->Flags & 0x800000) != 0 && !a7 && (*p_Flags & 2) == 0 && (FileObject->Vpb->Flags & 0x40) == 0 )
    {
      FsContext = FileObject->FsContext;
      if ( FsContext )
      {
        if ( (FsContext[6] & 0x20) == 0 )
        {
          sub_140557078((__int64)FileObject, (__int64)Irp);
          if ( IoGetIoPriorityHint(Irp) >= IoPriorityNormal && (BYTE12(xmmword_140D06910) & 4) == 0 )
          {
            BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
            FastIoDispatch = BaseFileSystemDeviceObject->DriverObject->FastIoDispatch;
            if ( FastIoDispatch->SizeOfFastIoDispatch >= 0xF0 && *(_QWORD *)&FastIoDispatch[1].SizeOfFastIoDispatch )
            {
              if ( (unsigned __int8)sub_14042A5E0(BaseFileSystemDeviceObject, Irp) )
              {
                v17 = 0;
                goto LABEL_85;
              }
              v26 = FileObject;
            }
            else
            {
              v26 = FileObject;
            }
            v17 = sub_1402F8AE0(DeviceObject, Irp, a6, v26, 0);
            FinalStatus = v17;
LABEL_85:
            CompletionContext = v52;
            goto LABEL_86;
          }
        }
      }
    }
    if ( !a6 )
      ObfReferenceObject(FileObject);
    v27 = FileObject->FileObjectExtension;
    if ( v27 && v27[20] )
    {
      v28 = *p_Flags & 0xFFF1FFFF;
      *p_Flags = v28;
      v29 = v27[20];
LABEL_67:
      *p_Flags = v28 | (v29 << 17);
      RequestorMode = Irp->RequestorMode;
      if ( IoGetIoPriorityHint(Irp) < IoPriorityNormal )
      {
        if ( RequestorMode
          || (Thread = Irp->Tail.Overlay.Thread) != 0LL
          && ((*((_DWORD *)Thread + 29) & 0x400) != 0 || (*((_DWORD *)Thread + 345) & 0x80u) != 0) )
        {
          if ( a7 )
          {
            if ( a7 == 1 )
              ++dword_140C46D88;
          }
          else
          {
            ++dword_140C46D8C;
          }
        }
        else
        {
          v34 = *p_Flags;
          ++dword_140C46D84;
          *p_Flags = v34 & 0xFFF1FFFF | 0x60000;
        }
      }
      if ( (Irp->AllocationFlags & 0x80u) == 0
        && (v35 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
        && (*v35 & 2) != 0 )
      {
        v55 = *(_OWORD *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
        v36 = IoSetActivityIdThread((__int64)&v55);
        v17 = IofCallDriver(DeviceObject, Irp);
        IoSetActivityIdThread(v36);
      }
      else
      {
        v17 = IofCallDriver(DeviceObject, Irp);
      }
      if ( !a6 )
        ObDereferenceObjectDeferDelete(v22);
      FinalStatus = v17;
      goto LABEL_85;
    }
    v30 = KeGetCurrentThread();
    v31 = (*((_DWORD *)v30 + 344) >> 9) & 7;
    if ( (*(_DWORD *)(*((_QWORD *)v30 + 68) + 1124LL) & 0x100000) != 0 )
    {
      v31 = 0;
    }
    else if ( v31 >= 2 )
    {
LABEL_66:
      v29 = v31 + 1;
      v28 = *p_Flags & 0xFFF1FFFF;
      *p_Flags = v28;
      goto LABEL_67;
    }
    if ( v30 == KeGetCurrentThread() && *((_DWORD *)v30 + 360) )
      v31 = 2;
    goto LABEL_66;
  }
  FinalStatus = -1073739504;
  Irp->IoStatus.Status = -1073739504;
  IofCompleteRequest(Irp, 0);
  v17 = -1073739504;
LABEL_86:
  if ( a4 && v17 != 259 )
  {
    if ( (*p_Flags & 0x200000) != 0 )
    {
      v37 = DeviceObject->DeviceType;
      v38 = v37 == 8 || v37 == 20;
      sub_140559FA8(Irp, v38);
      v17 = FinalStatus;
    }
    else
    {
      v54 = 0LL;
      v52 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      sub_140347E10((__int64)&Irp->Tail, (__int64)&v54, &v52, (ULONG_PTR *)&FileObject, &v52);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v44 = KeGetCurrentIrql();
          if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v46 = *((_QWORD *)CurrentPrcb + 4375);
            v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v48 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
            *(_DWORD *)(v46 + 20) &= v47;
            if ( v48 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      v17 = FinalStatus;
    }
  }
  if ( a6 )
  {
    if ( v17 == 259 )
    {
      v39 = FileObject;
      if ( dword_140C0959C == 1 || dword_140C0959C && sub_14065863C() )
      {
        sub_140417B94(Irp, a5, (v39->Flags & 4) != 0, &v39->Event.Header.LockNV);
      }
      else
      {
        v40 = v39->Flags & 4;
        while ( (v39->Event.Header.Type & 0x7F) != 0 || !v39->Event.Header.SignalState )
        {
          v41 = a5;
          if ( !v40 )
            v41 = 0;
          v42 = KeWaitForSingleObject(&v39->Event, Executive, v41, 1u, 0LL);
          if ( v42 != 257 && v42 != 192 )
            break;
          if ( v40
            || (*((_DWORD *)KeGetCurrentThread() + 344) & 1) != 0
            || sub_140556608((__int64)&v39->Event, (__int64)Irp) )
          {
            sub_140661B8C(&v39->Event.Header.LockNV, Irp);
            break;
          }
        }
      }
      FinalStatus = v39->FinalStatus;
    }
    sub_1402AD350((volatile __int32 *)&FileObject->Type);
    return FinalStatus;
  }
  else
  {
    if ( CompletionContext && (v17 & 0xC0000000) == 0x80000000 )
      return 259;
    return v17;
  }
}
