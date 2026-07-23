/*
 * XREFs of sub_14097638C @ 0x14097638C
 * Callers:
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_1409743A4 @ 0x1409743A4 (sub_1409743A4.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D9E3C @ 0x1402D9E3C (sub_1402D9E3C.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1409C0550 @ 0x1409C0550 (sub_1409C0550.c)
 *     sub_1409C0580 @ 0x1409C0580 (sub_1409C0580.c)
 */

__int64 __fastcall sub_14097638C(
        UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        PVOID *a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r9
  __int64 *v12; // rax
  ULONG64 v13; // rsi
  WORD Machine; // ax
  __int64 v15; // rax
  __int64 v16; // rax
  int v18; // [rsp+40h] [rbp-118h]
  int v19; // [rsp+48h] [rbp-110h]
  PVOID Object; // [rsp+78h] [rbp-E0h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-D8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-C8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-98h] BYREF
  PVOID BaseOfImage[10]; // [rsp+D0h] [rbp-88h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  memset(BaseOfImage, 0, sizeof(BaseOfImage));
  OutHeaders = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v10 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = sub_1402D9E3C(
            (__int64 *)&Object,
            v9,
            (int)&ObjectAttributes,
            v11,
            2,
            285212672,
            0,
            (__int64)FileHandle,
            v18,
            v19,
            -1,
            0,
            0);
    if ( v10 >= 0 )
    {
      v12 = (__int64 *)sub_140287970((__int64)Object);
      v10 = sub_1406F3884(v12, 1, (__int64)BaseOfImage);
      if ( v10 >= 0 )
      {
        v13 = (unsigned __int64)LODWORD(BaseOfImage[2]) << 12;
        v10 = RtlImageNtHeaderEx(0, BaseOfImage[0], v13, &OutHeaders);
        if ( v10 >= 0 )
        {
          if ( &OutHeaders->OptionalHeader < (IMAGE_OPTIONAL_HEADER64 *)OutHeaders
            || &OutHeaders->OptionalHeader > (IMAGE_OPTIONAL_HEADER64 *)((char *)BaseOfImage[0] + v13) )
          {
            v10 = -1073741701;
          }
          else
          {
            if ( v13 >= 0xFFFFFFFF )
            {
              v10 = -1073739516;
              goto LABEL_21;
            }
            Machine = OutHeaders->FileHeader.Machine;
            if ( Machine != 0x8664 && Machine != 332 && Machine != 0xAA64 )
            {
              v10 = -1073741701;
              goto LABEL_21;
            }
            v15 = sub_1409C0580(BaseOfImage[0]);
            if ( !v15 )
            {
              v10 = -1073741701;
              goto LABEL_21;
            }
            if ( a7 )
            {
              v16 = sub_1409C0550(v15);
              if ( !v16 )
              {
                v10 = -1073741701;
                goto LABEL_21;
              }
              *a7 = *(_DWORD *)(v16 + 12);
              a7[1] = *(_DWORD *)(v16 + 8);
            }
            *a4 = FileHandle;
            FileHandle = 0LL;
            *a5 = Object;
            Object = 0LL;
            v10 = 0;
          }
        }
      }
    }
  }
LABEL_21:
  if ( BaseOfImage[0] )
    sub_1406F39F8((ULONG_PTR *)BaseOfImage);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)v10;
}
