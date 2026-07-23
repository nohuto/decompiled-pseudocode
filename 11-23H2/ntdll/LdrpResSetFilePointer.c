/*
 * XREFs of LdrpResSetFilePointer @ 0x1800F1028
 * Callers:
 *     LdrpResReadFile @ 0x1800F0870 (LdrpResReadFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800F0924 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     ZwSetInformationFile @ 0x1800A1390 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall LdrpResSetFilePointer(char *a1, __int64 a2)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  FileInformation = a2;
  return ZwSetInformationFile(a1, &IoStatusBlock, &FileInformation, 8u, FilePositionInformation);
}
