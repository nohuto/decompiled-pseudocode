/*
 * XREFs of sub_140784CB0 @ 0x140784CB0
 * Callers:
 *     sub_14085A8D8 @ 0x14085A8D8 (sub_14085A8D8.c)
 *     sub_14085A964 @ 0x14085A964 (sub_14085A964.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x14041BE40 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     sub_1406E9530 @ 0x1406E9530 (sub_1406E9530.c)
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14078508C @ 0x14078508C (sub_14078508C.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 */

int __fastcall sub_140784CB0(unsigned int a1, ULONG a2, PVOID *a3, _QWORD *a4, _QWORD *a5)
{
  char v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int result; // eax
  NTSTATUS v14; // ebx
  __int64 v15; // r9
  NTSTATUS v16; // eax
  PVOID Object; // [rsp+58h] [rbp-220h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-218h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-210h] BYREF
  __int64 v20; // [rsp+70h] [rbp-208h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-200h] BYREF
  __int64 v22; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v23; // [rsp+88h] [rbp-1F0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1E0h] BYREF
  __int128 v25; // [rsp+C8h] [rbp-1B0h] BYREF
  UNICODE_STRING v26; // [rsp+D8h] [rbp-1A0h] BYREF
  OBJECT_ATTRIBUTES v27; // [rsp+E8h] [rbp-190h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-160h] BYREF
  _BYTE v29[128]; // [rsp+130h] [rbp-148h] BYREF
  wchar_t v30[64]; // [rsp+1B0h] [rbp-C8h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v25 = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !a4 && !a3 )
    return -1073741811;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v9 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a4;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a3;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    if ( a3 )
      return -1073741583;
  }
  result = sub_14078508C(a1, a2, v29);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ((a1 - 11) & 0xFFFFFFFC) != 0 || a1 == 13 )
    {
      v14 = -1073741823;
    }
    else
    {
      v14 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
      if ( v14 < 0 )
      {
        *(&v27.Length + 1) = 0;
        *(&v27.Attributes + 1) = 0;
        v26 = 0LL;
        result = sub_1406E9530(a1, a2, v30, v15, &v26);
        if ( result < 0 )
          return result;
        v27.Length = 48;
        v27.RootDirectory = 0LL;
        v27.Attributes = 576;
        v27.ObjectName = &v26;
        *(_OWORD *)&v27.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v27, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v14 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v14 >= 0 )
    {
      Object = 0LL;
      v14 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      ZwClose(SectionHandle);
      if ( v14 >= 0 )
      {
        if ( a4 )
        {
          v22 = 0LL;
          if ( v9 )
          {
            v16 = MmMapViewOfSection(
                    Object,
                    *((_QWORD *)KeGetCurrentThread() + 23),
                    &v20,
                    0LL,
                    0LL,
                    &v22,
                    &v21,
                    1,
                    0x400000,
                    2);
          }
          else
          {
            v23 = 0LL;
            v16 = sub_1406F3FDC((__int64)Object, &v20, &v21, &v23, 0LL, 0LL);
          }
          v14 = v16;
        }
        if ( !a3 )
          ObfDereferenceObject(Object);
        if ( v14 >= 0 )
        {
          if ( a4 )
            *a4 = v20;
          if ( a5 )
            *a5 = v21;
          if ( a3 )
            *a3 = Object;
        }
      }
    }
    return v14;
  }
  return result;
}
