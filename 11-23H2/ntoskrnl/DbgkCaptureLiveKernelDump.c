/*
 * XREFs of DbgkCaptureLiveKernelDump @ 0x14053C658
 * Callers:
 *     NtSystemDebugControl @ 0x1407E13A0 (NtSystemDebugControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B310 (ZwQueryInformationFile.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140733390 (ObReferenceObjectByHandleWithTag.c)
 *     DbgkpWerIsFullLiveDumpDisabled @ 0x14088394C (DbgkpWerIsFullLiveDumpDisabled.c)
 *     DbgkpWerAllocatePool @ 0x14093B834 (DbgkpWerAllocatePool.c)
 *     DbgkpWerFreePool @ 0x14093BCF4 (DbgkpWerFreePool.c)
 *     IoCaptureLiveDump @ 0x14094BBE8 (IoCaptureLiveDump.c)
 *     ObOpenObjectByPointerWithTag @ 0x14097C2E0 (ObOpenObjectByPointerWithTag.c)
 */

__int64 __fastcall DbgkCaptureLiveKernelDump(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Status; // ebx
  _DWORD *Pool; // rax
  __int64 v7; // r14
  void *v8; // rcx
  NTSTATUS v9; // eax
  PVOID v10; // r9
  const CHAR *v11; // r8
  void *v12; // rcx
  PVOID v13; // r12
  NTSTATUS v14; // eax
  int v15; // eax
  ULONG Tag[2]; // [rsp+20h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-10h] BYREF
  int FileInformation; // [rsp+90h] [rbp+40h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v21; // [rsp+A8h] [rbp+58h] BYREF

  FileInformation = 0;
  IoStatusBlock = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !a1 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpWerIsFullLiveDumpDisabled() )
  {
    DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
    return 3221227524LL;
  }
  FileHandle = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v21 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) != 1 )
  {
    Pool = (_DWORD *)DbgkpWerAllocatePool(56LL);
    v7 = (__int64)Pool;
    if ( Pool )
    {
      *Pool = 2;
      Pool[1] = 56;
      v8 = *(void **)(a1 + 48);
      if ( v8
        && (v9 = ObReferenceObjectByHandleWithTag(
                   v8,
                   0x100001u,
                   (POBJECT_TYPE)ExEventObjectType,
                   PreviousMode,
                   0x57676244u,
                   &Object,
                   0LL),
            Status = v9,
            v9 < 0) )
      {
        v10 = *(PVOID *)(a1 + 48);
        v11 = "DBGK: Invalid event handle %p, status 0x%X\n";
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 56) & 0x10) != 0 && (!*(_QWORD *)(a1 + 64) || *(_DWORD *)a1 < 2u || *(_DWORD *)(a1 + 60)) )
        {
          Status = -1073741811;
          DbgPrintEx(
            5u,
            1u,
            "DBGK: Requested selective dump with invalid parameters: Version %d, Flags: 0x%X, Control Structure: %p\n",
            *(_DWORD *)a1,
            *(_DWORD *)(a1 + 60),
            *(const void **)(a1 + 64));
          goto LABEL_43;
        }
        v12 = *(void **)(a1 + 40);
        if ( !v12 )
        {
          Status = -1073741811;
          goto LABEL_43;
        }
        v9 = ObReferenceObjectByHandleWithTag(
               v12,
               2u,
               (POBJECT_TYPE)IoFileObjectType,
               PreviousMode,
               0x57676244u,
               &v21,
               0LL);
        Status = v9;
        if ( v9 >= 0 )
        {
          v13 = v21;
          v9 = ObOpenObjectByPointerWithTag(
                 v21,
                 0x200u,
                 0LL,
                 2u,
                 (POBJECT_TYPE)IoFileObjectType,
                 0,
                 0x57676244u,
                 &FileHandle);
          Status = v9;
          if ( v9 >= 0 )
          {
            v14 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 4u, FileModeInformation);
            Status = v14;
            if ( v14 >= 0 )
            {
              Status = IoStatusBlock.Status;
              if ( IoStatusBlock.Status >= 0 )
              {
                if ( (FileInformation & 0x30) != 0 )
                {
                  *(_QWORD *)(v7 + 8) = FileHandle;
                  *(_QWORD *)(v7 + 16) = Object;
                  if ( (*(_DWORD *)(a1 + 56) & 4) != 0 )
                    *(_DWORD *)(v7 + 24) |= 4u;
                  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
                    *(_DWORD *)(v7 + 24) |= 0x10u;
                  if ( (*(_DWORD *)(a1 + 56) & 0x10) != 0 )
                  {
                    *(_DWORD *)(v7 + 24) |= 0x20u;
                    *(_QWORD *)(v7 + 48) = *(_QWORD *)(a1 + 64);
                  }
                  if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
                    *(_DWORD *)(v7 + 28) |= 1u;
                  if ( (*(_DWORD *)(a1 + 60) & 2) != 0 )
                    *(_DWORD *)(v7 + 28) |= 2u;
                  DbgPrintEx(5u, 3u, "DBGK: Calling IoCaptureLiveDump\n");
                  v15 = IoCaptureLiveDump(
                          *(_DWORD *)(a1 + 4),
                          *(_QWORD *)(a1 + 8),
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          *(_QWORD *)(a1 + 32),
                          v7,
                          0LL);
                  Status = v15;
                  if ( v15 < 0 )
                    DbgPrintEx(5u, 0, "DBGK: IoCaptureLiveDump failed, status 0x%X\n", v15);
                }
                else
                {
                  Status = -1073741811;
                  DbgPrintEx(5u, 1u, "DBGK: File was not opened for synchronous access.\n");
                }
              }
              else
              {
                DbgPrintEx(
                  5u,
                  1u,
                  "DBGK: ZwQueryInformationFile IoStatusBlock.Status is failure, status 0x%X\n",
                  (unsigned int)IoStatusBlock.Status);
              }
            }
            else
            {
              DbgPrintEx(5u, 1u, "DBGK: ZwQueryInformationFile failed for dump file, status 0x%X\n", (unsigned int)v14);
            }
            goto LABEL_43;
          }
          v10 = v13;
          v11 = "DBGK: ObOpenObjectByPointerWithTag failed for file %p, status 0x%X\n";
        }
        else
        {
          v10 = *(PVOID *)(a1 + 40);
          v11 = "DBGK: Invalid file handle %p, ObReferenceObjectByHandleWithTag returns status 0x%X\n";
        }
      }
      Tag[0] = v9;
      DbgPrintEx(5u, 1u, v11, v10, *(_QWORD *)Tag);
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: Could not allocate IoLivedumpControl\n");
      Status = -1073741801;
    }
LABEL_43:
    if ( FileHandle )
      ZwClose(FileHandle);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x57676244u);
    if ( v21 )
      ObfDereferenceObjectWithTag(v21, 0x57676244u);
    if ( v7 )
      DbgkpWerFreePool(v7);
    _InterlockedExchange(&DbgkpBusy, 0);
    goto LABEL_52;
  }
  Status = -1073741267;
LABEL_52:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return Status;
}
