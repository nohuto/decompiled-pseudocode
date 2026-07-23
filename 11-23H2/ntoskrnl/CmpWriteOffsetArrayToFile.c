/*
 * XREFs of CmpWriteOffsetArrayToFile @ 0x140A1B21C
 * Callers:
 *     CmDumpKeyToFile @ 0x140A0AD54 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x140A1AB98 (CmpFlushBackupHive.c)
 * Callees:
 *     ZwSetInformationFile @ 0x14041B5D0 (ZwSetInformationFile.c)
 *     ZwFlushBuffersFile @ 0x14041BA50 (ZwFlushBuffersFile.c)
 *     CmpDoFileWrite @ 0x1406895CC (CmpDoFileWrite.c)
 */

NTSTATUS __fastcall CmpWriteOffsetArrayToFile(__int64 a1, unsigned int a2, __int64 a3, int a4, HANDLE FileHandle)
{
  NTSTATUS result; // eax
  __int64 v8; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]

  v11 = 0;
  v10 = a4;
  IoStatusBlock = 0LL;
  result = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v10, 8u, FileEndOfFileInformation);
  if ( result >= 0 )
  {
    result = CmpDoFileWrite(FileHandle, v8, a3, a2, 0);
    if ( result >= 0 )
      return ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
  }
  return result;
}
