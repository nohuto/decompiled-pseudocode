/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1407562E0
 * Callers:
 *     NtQueryDirectoryFile @ 0x140756250 (NtQueryDirectoryFile.c)
 * Callees:
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 */

NTSTATUS __cdecl NtQueryDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  NTSTATUS result; // eax
  SIZE_T v11; // [rsp+38h] [rbp-49h]
  __int64 v12; // [rsp+58h] [rbp-29h]
  char v13; // [rsp+88h] [rbp+7h] BYREF
  char v14[7]; // [rsp+89h] [rbp+8h] BYREF
  struct _FILE_OBJECT *v15; // [rsp+90h] [rbp+Fh] BYREF
  PIRP Irp; // [rsp+98h] [rbp+17h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+1Fh] BYREF

  DeviceObject = 0LL;
  Irp = 0LL;
  v15 = 0LL;
  LODWORD(v11) = Length;
  v13 = 0;
  v14[0] = 0;
  result = sub_1407563A0(
             (int)FileHandle,
             (int)Event,
             (int)ApcRoutine,
             (int)ApcContext,
             (__int64)IoStatusBlock,
             FileInformation,
             v11,
             FileInformationClass,
             QueryFlags,
             (__int64)FileName,
             v12,
             (__int64)&v13,
             (__int64)&DeviceObject,
             (__int64)&Irp,
             (__int64)&v15,
             v14);
  if ( !result )
    return sub_140731680(DeviceObject, Irp, v15, 1, v14[0], v13, 2u);
  return result;
}
