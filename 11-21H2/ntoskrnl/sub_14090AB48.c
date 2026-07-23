/*
 * XREFs of sub_14090AB48 @ 0x14090AB48
 * Callers:
 *     sub_14052AC60 @ 0x14052AC60 (sub_14052AC60.c)
 *     sub_14090AF30 @ 0x14090AF30 (sub_14090AF30.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_14090AD84 @ 0x14090AD84 (sub_14090AD84.c)
 */

__int64 __fastcall sub_14090AB48(unsigned __int8 a1, UNICODE_STRING *a2, void *a3)
{
  int v3; // edi
  int v5; // esi
  PVOID v6; // rbx
  void *v8; // [rsp+28h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  Object = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = a1;
  IoStatusBlock = 0LL;
  if ( a2 && a2->Buffer )
  {
    ObjectAttributes.RootDirectory = 0LL;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0, 0);
    if ( v3 >= 0 )
    {
      v3 = sub_140732D40((ULONG_PTR)FileHandle, 0, 0LL, 0, 0x746C6644u, &Object, 0LL, 0LL);
      if ( v3 >= 0 )
      {
        v8 = a3;
        v6 = Object;
        v3 = sub_14090AD84(*((PDEVICE_OBJECT *)Object + 1), v5, v8);
        ObfDereferenceObject(v6);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return (unsigned int)v3;
}
