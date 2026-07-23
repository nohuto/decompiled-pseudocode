/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1407659D0
 * Callers:
 *     NtQueryDirectoryFile @ 0x1407681F0 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x140765A90 (BuildQueryDirectoryIrp.c)
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
  __int64 v12; // [rsp+40h] [rbp-41h]
  __int64 v13; // [rsp+58h] [rbp-29h]
  unsigned __int8 v14; // [rsp+88h] [rbp+7h] BYREF
  char v15[7]; // [rsp+89h] [rbp+8h] BYREF
  struct _FILE_OBJECT *v16; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+98h] [rbp+17h] BYREF
  struct _DEVICE_OBJECT *v18; // [rsp+A0h] [rbp+1Fh] BYREF

  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  LODWORD(v12) = FileInformationClass;
  LODWORD(v11) = Length;
  v14 = 0;
  v15[0] = 0;
  result = BuildQueryDirectoryIrp(
             (int)FileHandle,
             (int)Event,
             (int)ApcRoutine,
             (int)ApcContext,
             (__int64)IoStatusBlock,
             FileInformation,
             v11,
             v12,
             QueryFlags,
             (__int64)FileName,
             v13,
             (__int64)&v14,
             (__int64)&v18,
             (__int64)&v17,
             (__int64)&v16,
             v15);
  if ( !result )
    return IopSynchronousServiceTail(v18, v17, v16, 1, v15[0], v14, 2u);
  return result;
}
