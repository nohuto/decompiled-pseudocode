/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1407562E0
 * Callers:
 *     NtQueryDirectoryFile @ 0x140756250 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 */

__int64 __fastcall NtQueryDirectoryFileEx(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        volatile void *a6,
        SIZE_T a7,
        int a8,
        char a9,
        __int64 a10)
{
  __int64 result; // rax
  SIZE_T Length; // [rsp+38h] [rbp-49h]
  __int64 v12; // [rsp+58h] [rbp-29h]
  char v13; // [rsp+88h] [rbp+7h] BYREF
  char v14[7]; // [rsp+89h] [rbp+8h] BYREF
  struct _FILE_OBJECT *v15; // [rsp+90h] [rbp+Fh] BYREF
  PIRP Irp; // [rsp+98h] [rbp+17h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+1Fh] BYREF

  DeviceObject = 0LL;
  Irp = 0LL;
  v15 = 0LL;
  LODWORD(Length) = a7;
  v13 = 0;
  v14[0] = 0;
  result = BuildQueryDirectoryIrp(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             Length,
             a8,
             a9,
             a10,
             v12,
             (__int64)&v13,
             (__int64)&DeviceObject,
             (__int64)&Irp,
             (__int64)&v15,
             v14);
  if ( !(_DWORD)result )
    return IopSynchronousServiceTail(DeviceObject, Irp, v15, 1, v14[0], v13, 2u);
  return result;
}
