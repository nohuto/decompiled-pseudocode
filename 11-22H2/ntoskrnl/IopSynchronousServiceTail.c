/*
 * XREFs of IopSynchronousServiceTail @ 0x1406E3F40
 * Callers:
 *     IopQueueCopyWrite @ 0x14036B640 (IopQueueCopyWrite.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopWriteFile @ 0x1406B6DD0 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     NtQueryDirectoryFileEx @ 0x140765CF0 (NtQueryDirectoryFileEx.c)
 *     NtUnlockFile @ 0x1407B5080 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1407CA550 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CC120 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E75F0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E8870 (NtWriteFileGather.c)
 *     NtSetVolumeInformationFile @ 0x140881DA0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945B70 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14094AD10 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B320 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8F0 (ObDereferenceObjectDeferDelete.c)
 *     IopQueueIrpToFileObject @ 0x14022E440 (IopQueueIrpToFileObject.c)
 *     IopQueueThreadIrp @ 0x14022ED80 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x1402314E0 (IopReleaseFileObjectLock.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x1402A1D30 (IoGetBaseFileSystemDeviceObject.c)
 *     IopCallDriverReference @ 0x1402A7820 (IopCallDriverReference.c)
 *     IoGetIoPriorityHint @ 0x1402A7940 (IoGetIoPriorityHint.c)
 *     IopSetIrpPriorityHintFromFileObject @ 0x1402A7980 (IopSetIrpPriorityHintFromFileObject.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7B10 (IoSetDiskIoAttributionFromThread.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IofCompleteRequest @ 0x1402C9950 (IofCompleteRequest.c)
 *     IopGetFileObjectExtension @ 0x14030169C (IopGetFileObjectExtension.c)
 *     IoSetActivityIdThread @ 0x14031E490 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     IopWaitForSynchronousIoEvent @ 0x14040F674 (IopWaitForSynchronousIoEvent.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IopIoRingCompleteIrp @ 0x14055957C (IopIoRingCompleteIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PsIsProcessAppContainer @ 0x14077F59C (PsIsProcessAppContainer.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        struct _FILE_OBJECT *a3,
        char a4,
        char a5,
        unsigned __int8 a6,
        unsigned int a7)
{
  __int64 v7; // rax
  PFILE_OBJECT v8; // rsi
  KPRIORITY v10; // r13d
  PDEVICE_OBJECT v11; // r15
  int v12; // ecx
  int v13; // edx
  char v14; // r8
  __int64 FileObjectExtension; // rbx
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rax
  unsigned int v18; // esi
  PFILE_OBJECT v19; // r14
  struct _KTHREAD *v20; // rax
  struct _DEVICE_OBJECT *v21; // rbx
  unsigned int v22; // eax
  ULONG DeviceType; // ecx
  ULONG v24; // ecx
  ULONG v25; // ecx
  ULONG v26; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *FsContext; // rax
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r10
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  unsigned __int8 (__fastcall *v31)(PDEVICE_OBJECT, __int64, _QWORD, PFILE_OBJECT, unsigned int *); // rax
  unsigned int v32; // eax
  _DWORD *v33; // rcx
  unsigned int v34; // eax
  int v35; // ebx
  struct _KTHREAD *v36; // rdx
  int v37; // ecx
  unsigned __int64 v38; // r8
  int v39; // ebx
  __int64 v40; // rcx
  _BYTE *v41; // rax
  struct _LIST_ENTRY *v42; // rbx
  int v43; // ebx
  ULONG v44; // eax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v46; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v49; // eax
  bool v50; // zf
  __int64 result; // rax
  unsigned int FinalStatus; // [rsp+38h] [rbp-41h] BYREF
  char v53; // [rsp+3Ch] [rbp-3Dh]
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-39h] BYREF
  int v55; // [rsp+48h] [rbp-31h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-29h] BYREF
  __int64 v57; // [rsp+58h] [rbp-21h] BYREF
  PIO_COMPLETION_CONTEXT CompletionContext; // [rsp+60h] [rbp-19h]
  struct _LIST_ENTRY v59; // [rsp+68h] [rbp-11h] BYREF

  v7 = *(_QWORD *)(a2 + 88);
  v8 = a3;
  v10 = 0;
  v11 = a1;
  v53 = a4;
  DeviceObject = a1;
  FileObject = a3;
  FinalStatus = 0;
  if ( (v7 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 71) |= 0x10u;
    v7 &= ~1uLL;
    *(_QWORD *)(a2 + 88) = v7;
  }
  CompletionContext = a3->CompletionContext;
  v12 = *(_DWORD *)(a2 + 16);
  v13 = v12 & 0x200000;
  v55 = v12 & 0x200000;
  if ( (a6 || v7) && !v13 )
  {
    if ( (a3->Flags & 2) != 0 )
      *(_BYTE *)(a2 + 71) |= 2u;
    goto LABEL_27;
  }
  if ( v13 )
  {
    v14 = 0;
    goto LABEL_8;
  }
  if ( *(_QWORD *)(a2 + 96) && !*(_QWORD *)(a2 + 80) && a3->CompletionContext )
  {
    v14 = 1;
LABEL_8:
    if ( IopQueueIrpToFileObject(a2, (__int64)v8, v14) )
      goto LABEL_28;
    goto LABEL_27;
  }
  if ( (v12 & 0x10) != 0
    || a3->CompletionContext
    || !a3->FileObjectExtension
    || (FileObjectExtension = IopGetFileObjectExtension((__int64)a3, 2, 0LL)) == 0 )
  {
LABEL_27:
    IopQueueThreadIrp(a2);
    goto LABEL_28;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(a2 + 72);
    if ( v16 >= *(_QWORD *)FileObjectExtension && v16 + 16 <= *(_QWORD *)(FileObjectExtension + 8) )
    {
      v8 = FileObject;
      if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
      {
        if ( IopQueueIrpToFileObject(a2, (__int64)FileObject, 0) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_27;
  }
  *(_QWORD *)(a2 + 72) += *(_QWORD *)(FileObjectExtension + 24) - *(_QWORD *)FileObjectExtension;
LABEL_28:
  v17 = v8->FileObjectExtension;
  if ( v17 && (*v17 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    FinalStatus = -1073739504;
    *(_DWORD *)(a2 + 48) = -1073739504;
    IofCompleteRequest((PIRP)a2, 0);
    v18 = FinalStatus;
    v19 = FileObject;
  }
  else
  {
    if ( a7 <= 1 )
    {
      v21 = DeviceObject;
      DeviceType = DeviceObject->DeviceType;
      if ( DeviceType - 10 > 0x19 )
      {
        v24 = DeviceType - 7;
        if ( !v24 || (v25 = v24 - 1) == 0 || (v26 = v25 - 1) == 0 || v26 == 27 )
          IoSetDiskIoAttributionFromThread(a2, KeGetCurrentThread());
      }
      CurrentThread = KeGetCurrentThread();
      if ( a7 )
      {
        ++CurrentThread->WriteOperationCount;
        v22 = 12000;
      }
      else
      {
        ++CurrentThread->ReadOperationCount;
        v22 = 11996;
      }
    }
    else
    {
      v20 = KeGetCurrentThread();
      v21 = DeviceObject;
      ++v20->OtherOperationCount;
      v22 = 12004;
    }
    __incgsdword(v22);
    v19 = FileObject;
    if ( (FileObject->Flags & 0x800000) == 0
      || a7
      || (FileObject->Vpb->Flags & 0x40) != 0
      || (FsContext = FileObject->FsContext) == 0LL
      || (FsContext[6] & 0x20) != 0
      || (IopSetIrpPriorityHintFromFileObject((__int64)FileObject, a2), IoGetIoPriorityHint((PIRP)a2) < IoPriorityNormal)
      || (BYTE12(xmmword_140D1EAD0) & 4) != 0 )
    {
      if ( !a6 )
        ObfReferenceObject(FileObject);
      v33 = v8->FileObjectExtension;
      if ( v33 && v33[22] )
      {
        v34 = *(_DWORD *)(a2 + 16) & 0xFFF1FFFF;
        *(_DWORD *)(a2 + 16) = v34;
        v35 = v33[22];
      }
      else
      {
        v36 = KeGetCurrentThread();
        v37 = (*((_DWORD *)&v36[1].SwapListEntry + 2) >> 9) & 7;
        v38 = v36->Process[1].Affinity.StaticBitmap[16];
        if ( v38 && v37 >= *(_DWORD *)(v38 + 1068) )
          v37 = *(_DWORD *)(v38 + 1068);
        if ( v37 < 2 && v36 == KeGetCurrentThread() && LODWORD(v36[1].Timer.TimerListEntry.Flink) )
          v37 = 2;
        v35 = v37 + 1;
        v19 = FileObject;
        v34 = *(_DWORD *)(a2 + 16) & 0xFFF1FFFF;
      }
      v39 = v34 | (v35 << 17);
      *(_DWORD *)(a2 + 16) = v39;
      if ( IoGetIoPriorityHint((PIRP)a2) < IoPriorityNormal )
      {
        if ( *(_BYTE *)(a2 + 64)
          || (v40 = *(_QWORD *)(a2 + 152)) != 0
          && ((*(_DWORD *)(v40 + 116) & 0x400) != 0 || (*(_DWORD *)(v40 + 1380) & 0x80u) != 0) )
        {
          if ( a7 )
          {
            if ( a7 == 1 )
              ++IoLowPriorityWriteOperationCount;
          }
          else
          {
            ++IoLowPriorityReadOperationCount;
          }
        }
        else
        {
          ++IoKernelIssuedIoBoostedCount;
          *(_DWORD *)(a2 + 16) = v39 & 0xFFF1FFFF | 0x60000;
        }
      }
      if ( *(char *)(a2 + 71) >= 0 && (v41 = *(_BYTE **)(a2 + 200)) != 0LL && (*v41 & 2) != 0 )
      {
        v59 = 0LL;
        v59 = *(struct _LIST_ENTRY *)(*(_QWORD *)(a2 + 200) + 24LL);
        v11 = DeviceObject;
        v42 = IoSetActivityIdThread(&v59);
        v18 = IofCallDriver(DeviceObject, (PIRP)a2);
        IoSetActivityIdThread(v42);
      }
      else
      {
        v11 = DeviceObject;
        v18 = IofCallDriver(DeviceObject, (PIRP)a2);
      }
      if ( !a6 )
        ObDereferenceObjectDeferDelete(v19);
      FinalStatus = v18;
    }
    else
    {
      BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
      FastIoDispatch = BaseFileSystemDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch->SizeOfFastIoDispatch >= 0xF0
        && (v31 = *(unsigned __int8 (__fastcall **)(PDEVICE_OBJECT, __int64, _QWORD, PFILE_OBJECT, unsigned int *))&FastIoDispatch[1].SizeOfFastIoDispatch) != 0LL
        && v31(BaseFileSystemDeviceObject, a2, a6, FileObject, &FinalStatus) )
      {
        v18 = FinalStatus;
        v11 = DeviceObject;
      }
      else
      {
        v32 = IopCallDriverReference(v21, (PIRP)a2, a6, v19, 0);
        v11 = DeviceObject;
        v18 = v32;
        FinalStatus = v32;
      }
    }
  }
  v43 = v55;
  if ( v53 && v18 != 259 )
  {
    if ( v55 )
    {
      v44 = v11->DeviceType;
      if ( v44 == 8 || v44 == 20 )
        v10 = 1;
      IopIoRingCompleteIrp((PIRP)a2, (ULONG_PTR)v19, v10);
    }
    else
    {
      v57 = 0LL;
      DeviceObject = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest((ULONG_PTR *)(a2 + 120), (__int64)&v57, &DeviceObject, (ULONG_PTR *)&FileObject, &DeviceObject);
      if ( (_DWORD)KiIrqlFlags )
      {
        v46 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v50 = (v49 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v49;
          if ( v50 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v19 = FileObject;
        }
      }
      __writecr8(CurrentIrql);
      v43 = v55;
    }
    v18 = FinalStatus;
  }
  if ( a6 )
  {
    if ( v18 == 259 )
    {
      IopWaitForSynchronousIoEvent((PIRP)a2, a5, (v19->Flags & 4) != 0, &v19->Event.Header.LockNV);
      FinalStatus = v19->FinalStatus;
    }
    IopReleaseFileObjectLock((volatile __int32 *)&v19->Type);
    return FinalStatus;
  }
  else
  {
    if ( v43 )
      return 259LL;
    result = v18;
    if ( CompletionContext )
    {
      result = v18;
      if ( (v18 & 0xC0000000) == 0x80000000 )
        return 259LL;
    }
  }
  return result;
}
