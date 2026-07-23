/*
 * XREFs of RtlIsPartialPlaceholderFileHandle @ 0x18010D480
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationFile @ 0x1800A10D0 (NtQueryInformationFile.c)
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileHandle(HANDLE FileHandle, PBOOLEAN IsPartialPlaceholder)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int FileInformation; // [rsp+60h] [rbp+18h] BYREF

  result = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    *IsPartialPlaceholder = (FileInformation & 0x440000) != 0;
  }
  else
  {
    if ( result != -1073741811 )
      return result;
    *IsPartialPlaceholder = 0;
  }
  return 0;
}
