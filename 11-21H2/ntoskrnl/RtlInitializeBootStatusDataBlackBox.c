/*
 * XREFs of RtlInitializeBootStatusDataBlackBox @ 0x140828810
 * Callers:
 *     PoClearTransitionMarker @ 0x1408285B0 (PoClearTransitionMarker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14041B820 (ZwReadFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpRecordBootStatusData @ 0x1406D6A74 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlInitializeBootStatusDataBlackBox(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-F8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-F0h] BYREF
  _BYTE Buffer[192]; // [rsp+70h] [rbp-D8h] BYREF

  IoStatusBlock = 0LL;
  memset(Buffer, 0, sizeof(Buffer));
  ByteOffset.QuadPart = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xC0u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    result = RtlpRecordBootStatusData(0, (__int64)Buffer, 0LL, 192LL);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
