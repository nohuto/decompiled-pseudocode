/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x1402031E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14028866C @ 0x14028866C (sub_14028866C.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_14066BA80 @ 0x14066BA80 (sub_14066BA80.c)
 *     sub_14066BFB8 @ 0x14066BFB8 (sub_14066BFB8.c)
 *     sub_1406FE210 @ 0x1406FE210 (sub_1406FE210.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 */

NTSTATUS __stdcall FsRtlCreateSectionForDataScan(
        PHANDLE SectionHandle,
        PVOID *SectionObject,
        PLARGE_INTEGER SectionFileSize,
        PFILE_OBJECT FileObject,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        ULONG Flags)
{
  PVOID *v12; // r13
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v14; // ebx
  int inserted; // edi
  ULONG LowPart; // ebx
  int v17; // r13d
  int v18; // eax
  struct _FILE_OBJECT *v19; // rax
  struct _FILE_OBJECT *v20; // rbx
  PVOID v21; // rbx
  NTSTATUS result; // eax
  int v23; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+64h] [rbp-1Ch] BYREF
  PVOID Object; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+70h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-8h] BYREF

  v12 = SectionObject;
  FileSize.QuadPart = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v24 = 0;
  v25 = 0;
  if ( (SectionPageProtection & 0xFFFFFFF9) != 0 || !SectionPageProtection )
    return -1073741578;
  if ( (AllocationAttributes & 0xFF7FFFFF) != 0x8000000 )
    return -1073741577;
  if ( !FileObject->SectionObjectPointer )
    return -1073741792;
  *((_QWORD *)KeGetCurrentThread() + 162) = 1LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v14 = sub_1406FE210(FileObject, SectionPageProtection, 1LL, AllocationAttributes, &v24, &v25);
  if ( v14 < 0 )
  {
    sub_1402F9540(KeGetCurrentThread());
    result = v14;
    *((_QWORD *)KeGetCurrentThread() + 162) = 0LL;
  }
  else
  {
    inserted = FsRtlGetFileSize(FileObject, &FileSize);
    if ( inserted >= 0 )
    {
      LowPart = FileSize.LowPart;
      if ( FileSize.QuadPart )
      {
        v17 = v24;
        while ( 1 )
        {
          v18 = sub_14066BFB8(
                  (int)&Object,
                  (int)ObjectAttributes,
                  LowPart,
                  SectionPageProtection,
                  AllocationAttributes,
                  0LL,
                  (__int64)FileObject,
                  v17,
                  v23,
                  0LL,
                  0);
          inserted = v18;
          if ( v18 != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14003AC70);
        }
        if ( v18 >= 0 )
        {
          v19 = (struct _FILE_OBJECT *)sub_14066BA80(Object);
          v20 = v19;
          if ( v19 )
          {
            sub_14028866C(v19);
            ObfDereferenceObjectWithTag(v20, 0x746C6644u);
          }
        }
        v12 = SectionObject;
      }
      else
      {
        inserted = -1073741807;
      }
    }
    FsRtlReleaseFile(FileObject);
    sub_1402F9540(KeGetCurrentThread());
    *((_QWORD *)KeGetCurrentThread() + 162) = 0LL;
    if ( inserted >= 0 )
    {
      v21 = Object;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      inserted = ObInsertObject(v21, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( inserted < 0 )
      {
        ObfDereferenceObjectWithTag(v21, 0x746C6644u);
      }
      else
      {
        *SectionHandle = Handle;
        *v12 = v21;
        if ( SectionFileSize )
          *SectionFileSize = FileSize;
      }
    }
    return inserted;
  }
  return result;
}
