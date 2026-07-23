/*
 * XREFs of IoQueryFileDosDeviceName @ 0x14070F660
 * Callers:
 *     sub_14053A580 @ 0x14053A580 (sub_14053A580.c)
 *     sub_14062CAEC @ 0x14062CAEC (sub_14062CAEC.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_14095D038 @ 0x14095D038 (sub_14095D038.c)
 * Callees:
 *     sub_14070F744 @ 0x14070F744 (sub_14070F744.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoQueryFileDosDeviceName(PFILE_OBJECT FileObject, POBJECT_NAME_INFORMATION *ObjectNameInformation)
{
  __int64 v2; // rdi
  __int64 v5; // rdx
  _OBJECT_NAME_INFORMATION *Pool2; // rbx
  __int64 v7; // r8
  NTSTATUS v8; // edi
  int v10; // [rsp+30h] [rbp-18h]
  unsigned int i; // [rsp+60h] [rbp+18h] BYREF

  v2 = 208LL;
  for ( i = 208; ; v2 = i )
  {
    Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, v2, 1849978697LL);
    if ( !Pool2 )
      break;
    LOBYTE(v10) = 0;
    LOBYTE(v7) = 1;
    v8 = sub_14070F744(FileObject, v5, v7, Pool2, v2, &i, v10);
    if ( !v8 )
    {
      *ObjectNameInformation = Pool2;
      return v8;
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v8 != -2147483643 )
      return v8;
  }
  return -1073741670;
}
