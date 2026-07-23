/*
 * XREFs of sub_1409F6A1C @ 0x1409F6A1C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14041BC60 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14041BCA0 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1409F6A1C(void *a1, int a2)
{
  PVOID v2; // rsi
  HANDLE FileHandle; // r14
  unsigned int v4; // r12d
  int v5; // edi
  NTSTATUS v6; // eax
  HANDLE Handle; // [rsp+50h] [rbp-19h] BYREF
  PVOID Object; // [rsp+58h] [rbp-11h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  FileSize.QuadPart = 0LL;
  FileHandle = 0LL;
  ViewSize = 0LL;
  Handle = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = 2;
    }
    else
    {
      if ( a2 != 2 )
      {
        v5 = -1073741811;
        goto LABEL_22;
      }
      v4 = 3;
    }
  }
  else
  {
    v4 = 1;
  }
  v5 = IoConvertFileHandleToKernelHandle(a1, *((_BYTE *)KeGetCurrentThread() + 562), 1u, 0, &Handle);
  if ( v5 >= 0 )
  {
    FileHandle = Handle;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v2 = Object;
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
      {
        v5 = -1073741757;
      }
      else
      {
        v5 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
        if ( v5 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v5 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v5 >= 0 )
          {
            ViewSize = FileSize.QuadPart;
            v5 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   &ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v5 < 0 )
            {
              BaseAddress = 0LL;
              goto LABEL_24;
            }
            if ( qword_140C1B8E8 )
              v5 = sub_14042A5E0(v4, BaseAddress);
            else
              v5 = -1073741637;
          }
          else
          {
            SectionHandle = 0LL;
          }
        }
      }
    }
    else
    {
      v2 = 0LL;
    }
  }
LABEL_22:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_24:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
