/*
 * XREFs of sub_14085A75C @ 0x14085A75C
 * Callers:
 *     sub_14085A568 @ 0x14085A568 (sub_14085A568.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     sub_14068B750 @ 0x14068B750 (sub_14068B750.c)
 */

__int64 __fastcall sub_14085A75C(__int64 a1, UNICODE_STRING *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+67h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.Attributes = 576;
  v6 = ZwCreateFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0, 0LL, 0);
  if ( v6 >= 0 )
    v6 = sub_14068B750(v5, FileHandle, v7, a4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v6;
}
