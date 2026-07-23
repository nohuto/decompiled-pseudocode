/*
 * XREFs of sub_1403D79F4 @ 0x1403D79F4
 * Callers:
 *     sub_1402D708C @ 0x1402D708C (sub_1402D708C.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     MmMapViewInSystemSpace @ 0x1406DEFB0 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1406DF130 (MmUnmapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1403D79F4(__int64 a1, UNICODE_STRING *a2, HANDLE *a3, _QWORD *a4, ULONG_PTR *a5)
{
  PVOID v8; // rdi
  PIMAGE_NT_HEADERS v9; // rax
  WORD MajorSubsystemVersion; // si
  NTSTATUS v11; // ebx
  PVOID v13; // rsi
  NTSTATUS v14; // eax
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // ecx
  ULONG_PTR *v17; // rcx
  HANDLE SectionHandle; // [rsp+60h] [rbp-41h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-39h] BYREF
  PVOID Object; // [rsp+70h] [rbp-31h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-21h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B0h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+5Fh] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  v8 = 0LL;
  MaximumSize.QuadPart = 0LL;
  ViewSize = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  if ( a1 && a2 && a4 )
  {
    v9 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( v9 )
    {
      MajorSubsystemVersion = v9->OptionalHeader.MajorSubsystemVersion;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
      if ( v11 >= 0 )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwCreateSection(
                &SectionHandle,
                0xF0005u,
                &ObjectAttributes,
                &MaximumSize,
                MajorSubsystemVersion < 6u ? 8 : 2,
                0x8000000u,
                FileHandle);
        if ( v11 >= 0 )
        {
          Object = 0LL;
          v11 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
          ZwClose(SectionHandle);
          v13 = Object;
          if ( v11 >= 0 )
          {
            v14 = MmMapViewInSystemSpace(Object, &MappedBase, &ViewSize);
            v8 = MappedBase;
            v11 = v14;
            if ( v14 >= 0 )
            {
              v15 = RtlImageNtHeader(MappedBase);
              v16 = v11;
              if ( !v15 )
                v16 = -1073741701;
              v11 = v16;
            }
          }
          if ( v13 )
            ObfDereferenceObject(v13);
          if ( v11 < 0 )
          {
            if ( v8 )
              MmUnmapViewInSystemSpace(v8);
          }
          else
          {
            v17 = a5;
            *a4 = v8;
            if ( v17 )
              *v17 = ViewSize;
            if ( a3 )
            {
              *a3 = FileHandle;
              return (unsigned int)v11;
            }
          }
        }
      }
    }
    else
    {
      v11 = -1073741701;
    }
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v11;
  }
  return 3221225485LL;
}
