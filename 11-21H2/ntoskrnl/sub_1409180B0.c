/*
 * XREFs of sub_1409180B0 @ 0x1409180B0
 * Callers:
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 *     sub_140917A40 @ 0x140917A40 (sub_140917A40.c)
 * Callees:
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwFlushBuffersFile @ 0x14041C0C0 (ZwFlushBuffersFile.c)
 *     sub_140714594 @ 0x140714594 (sub_140714594.c)
 */

NTSTATUS __fastcall sub_1409180B0(__int64 a1, unsigned int a2, __int64 a3, int a4, HANDLE FileHandle)
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
    result = sub_140714594(FileHandle, v8, a3, (struct _LOOKASIDE_LIST_EX *)a2, 0);
    if ( result >= 0 )
      return ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
  }
  return result;
}
