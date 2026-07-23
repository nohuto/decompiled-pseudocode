/*
 * XREFs of RtlLockBootStatusData @ 0x1406D6540
 * Callers:
 *     sub_1406D5F3C @ 0x1406D5F3C (sub_1406D5F3C.c)
 *     sub_1406D6228 @ 0x1406D6228 (sub_1406D6228.c)
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 *     sub_1408285B0 @ 0x1408285B0 (sub_1408285B0.c)
 *     sub_140998CC4 @ 0x140998CC4 (sub_140998CC4.c)
 *     sub_140998F18 @ 0x140998F18 (sub_140998F18.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403A6B24 @ 0x1403A6B24 (sub_1403A6B24.c)
 *     sub_1403D8BC0 @ 0x1403D8BC0 (sub_1403D8BC0.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlLockBootStatusData(PHANDLE FileHandle)
{
  int v1; // esi
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandlea; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  FileHandlea = 0LL;
  v1 = 0;
  SourceString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v8 = 0;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140CE2148, 0LL);
  ++dword_140C1BC24;
  if ( byte_140C1BC29 )
  {
    if ( FileHandle )
    {
      *FileHandle = ::FileHandle;
      goto LABEL_4;
    }
LABEL_14:
    byte_140C1BC40 = 1;
    goto LABEL_4;
  }
  sub_1403A6B24(&SourceString, &v8);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v1 >= 0 )
  {
    ::FileHandle = FileHandlea;
    byte_140C1BC29 = 1;
    sub_1403D8BC0();
    if ( FileHandle )
    {
      *FileHandle = FileHandlea;
      goto LABEL_4;
    }
    goto LABEL_14;
  }
  ::FileHandle = 0LL;
  dword_140C1BC24 = 0;
  byte_140C1BC29 = 0;
  if ( FileHandle )
    *FileHandle = 0LL;
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CE2148, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140CE2148);
  sub_1402AFC00((ULONG_PTR)&qword_140CE2148);
  KeLeaveCriticalRegion();
  if ( v8 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return v1;
}
