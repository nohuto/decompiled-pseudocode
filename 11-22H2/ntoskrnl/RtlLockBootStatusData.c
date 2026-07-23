/*
 * XREFs of RtlLockBootStatusData @ 0x1407EF310
 * Callers:
 *     PopBootStatGet @ 0x1407ECA68 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1407EEFF8 (PopBootStatSet.c)
 *     PoClearTransitionMarker @ 0x1408030CC (PoClearTransitionMarker.c)
 *     CmCompleteRegistryInitialization @ 0x14080CEA0 (CmCompleteRegistryInitialization.c)
 *     PopBootStatCheckIntegrity @ 0x14084E3B0 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140997160 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     RtlInitializeBootStatDataCache @ 0x1403A9534 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x1403C5CB4 (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x14041AD00 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlLockBootStatusData(PHANDLE FileHandle)
{
  int v2; // esi
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandlea; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  FileHandlea = 0LL;
  SourceString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v8 = 0;
  v2 = 0;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
  ++BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    if ( FileHandle )
    {
      *FileHandle = BootStatFileHandle;
      goto LABEL_7;
    }
    goto LABEL_14;
  }
  RtlpGetBootStatusPath(&SourceString, &v8);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v2 >= 0 )
  {
    BootStatFileHandle = FileHandlea;
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    if ( FileHandle )
    {
      *FileHandle = FileHandlea;
      goto LABEL_7;
    }
LABEL_14:
    BootStatKeepHandleOpen = 1;
    goto LABEL_7;
  }
  BootStatFileHandle = 0LL;
  BootStatReferenceCount = 0;
  BootStatFileHandleAcquired = 0;
  if ( FileHandle )
    *FileHandle = 0LL;
LABEL_7:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
  if ( v8 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return v2;
}
