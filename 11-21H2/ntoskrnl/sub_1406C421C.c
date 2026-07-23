/*
 * XREFs of sub_1406C421C @ 0x1406C421C
 * Callers:
 *     sub_1406C40E0 @ 0x1406C40E0 (sub_1406C40E0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1406C421C(_QWORD *a1, void *a2)
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
  v3 = *((_QWORD *)sub_140347DB0() + 132);
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
    --*((_WORD *)CurrentThread + 242);
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
      ExfTryToWakePushLock(v3);
    sub_1402AFC00(v3);
    sub_1402F9540((__int64)CurrentThread);
    goto LABEL_3;
  }
  return result;
}
