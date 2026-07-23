/*
 * XREFs of sub_1409F6C5C @ 0x1409F6C5C
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14041BC60 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14041BCA0 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14082E228 @ 0x14082E228 (sub_14082E228.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409F6C5C(void *a1)
{
  PVOID v1; // r14
  void *v2; // r15
  int v3; // esi
  HANDLE FileHandle; // r12
  LARGE_INTEGER v5; // rbx
  PVOID PoolWithQuotaTag; // rax
  __int64 v7; // rdx
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-88h] BYREF
  ULONG_PTR ViewSize[4]; // [rsp+68h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp+10h] BYREF
  HANDLE SectionHandle; // [rsp+100h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+20h] BYREF

  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FileSize.QuadPart = 0LL;
  ViewSize[0] = 0LL;
  v1 = 0LL;
  SectionHandle = 0LL;
  v2 = 0LL;
  BaseAddress = 0LL;
  v3 = IoConvertFileHandleToKernelHandle(a1, *((_BYTE *)KeGetCurrentThread() + 562), 1u, 0, &Handle);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    FileHandle = Handle;
    v3 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v1 = Object;
    ViewSize[3] = (ULONG_PTR)Object;
    if ( v3 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
      {
        v3 = -1073741757;
      }
      else
      {
        v3 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
        if ( v3 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v3 >= 0 )
          {
            v5 = FileSize;
            ViewSize[0] = FileSize.QuadPart;
            v3 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v3 >= 0 )
            {
              if ( qword_140C1B8E8 )
                v3 = sub_14042A5E0(0LL, BaseAddress);
              else
                v3 = -1073741637;
              if ( v3 >= 0 )
              {
                PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v5.QuadPart, 0x4D414C45u);
                v2 = PoolWithQuotaTag;
                ViewSize[2] = (ULONG_PTR)PoolWithQuotaTag;
                if ( PoolWithQuotaTag )
                {
                  memmove(PoolWithQuotaTag, BaseAddress, v5.QuadPart);
                  if ( qword_140C1B8E8 )
                    v3 = sub_14042A5E0(0LL, v2);
                  else
                    v3 = -1073741637;
                  if ( v3 >= 0 )
                  {
                    v3 = sub_14082E228((unsigned __int64)v2, v7, 1);
                    if ( v3 >= 0 )
                      v3 = 0;
                  }
                }
                else
                {
                  v3 = -1073741670;
                }
              }
            }
            else
            {
              BaseAddress = 0LL;
            }
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
      v1 = 0LL;
    }
  }
  else
  {
    FileHandle = 0LL;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4D414C45u);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v1 )
    ObfDereferenceObject(v1);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
