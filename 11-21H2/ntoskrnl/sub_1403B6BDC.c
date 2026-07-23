/*
 * XREFs of sub_1403B6BDC @ 0x1403B6BDC
 * Callers:
 *     sub_1405D6E40 @ 0x1405D6E40 (sub_1405D6E40.c)
 *     sub_14082876C @ 0x14082876C (sub_14082876C.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x14041C0C0 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall sub_1403B6BDC(char a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( byte_140C1BC28 != a1 )
  {
    byte_140C1BC28 = a1;
    if ( !a1 )
    {
      if ( byte_140C1BC29 )
      {
        if ( FileHandle )
          return ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
      }
    }
  }
  return result;
}
