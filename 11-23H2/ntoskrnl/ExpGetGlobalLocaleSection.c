/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x1407A2A68
 * Callers:
 *     NtInitializeNlsFiles @ 0x1407A1310 (NtInitializeNlsFiles.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14041B750 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14041BA30 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1, void *a2)
{
  ULONG_PTR v3; // rdi
  PVOID v4; // rsi
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  struct _KTHREAD *CurrentThread; // r15
  void *v8; // rbx
  char v9; // r14
  PVOID v10; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE SectionHandle; // [rsp+D8h] [rbp+58h] BYREF

  Object = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
  v4 = *(PVOID *)(v3 + 8);
  if ( (unsigned __int64)v4 > 1 )
  {
    ObfReferenceObject(*(PVOID *)(v3 + 8));
LABEL_3:
    *a1 = v4;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    ZwClose(FileHandle);
    if ( v6 < 0 )
      return v6;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    v4 = Object;
    ZwClose(SectionHandle);
    if ( v6 < 0 )
      return v6;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    v8 = *(void **)(v3 + 8);
    if ( v8 == (void *)1 )
    {
      v10 = Object;
      ObfReferenceObject(Object);
      *(_QWORD *)(v3 + 8) = v10;
    }
    else if ( v8 )
    {
      ObfDereferenceObject(Object);
      v4 = v8;
      ObfReferenceObject(v8);
    }
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_3;
  }
  return result;
}
