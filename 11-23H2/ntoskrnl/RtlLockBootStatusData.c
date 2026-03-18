/*
 * XREFs of RtlLockBootStatusData @ 0x1407EED90
 * Callers:
 *     PopBootStatGet @ 0x1407EC4E8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1407EEA78 (PopBootStatSet.c)
 *     CmCompleteRegistryInitialization @ 0x14080A920 (CmCompleteRegistryInitialization.c)
 *     PopBootStatCheckIntegrity @ 0x14084D53C (PopBootStatCheckIntegrity.c)
 *     PoClearTransitionMarker @ 0x14085E2C8 (PoClearTransitionMarker.c)
 *     PopBootStatRestoreDefaults @ 0x1409970B0 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     RtlInitializeBootStatDataCache @ 0x1403A9C24 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x1403C6314 (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x14041B3C0 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlLockBootStatusData(HANDLE *a1)
{
  NTSTATUS v2; // esi
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  FileHandle = 0LL;
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
    if ( a1 )
    {
      *a1 = BootStatFileHandle;
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
  v2 = ZwOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v2 >= 0 )
  {
    BootStatFileHandle = FileHandle;
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    if ( a1 )
    {
      *a1 = FileHandle;
      goto LABEL_7;
    }
LABEL_14:
    BootStatKeepHandleOpen = 1;
    goto LABEL_7;
  }
  BootStatFileHandle = 0LL;
  BootStatReferenceCount = 0;
  BootStatFileHandleAcquired = 0;
  if ( a1 )
    *a1 = 0LL;
LABEL_7:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
  if ( v8 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return (unsigned int)v2;
}
