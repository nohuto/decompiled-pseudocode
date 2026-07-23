/*
 * XREFs of ZwFlushBuffersFile @ 0x14041C0C0
 * Callers:
 *     sub_140258000 @ 0x140258000 (sub_140258000.c)
 *     sub_1403B6BDC @ 0x1403B6BDC (sub_1403B6BDC.c)
 *     sub_1406205A0 @ 0x1406205A0 (sub_1406205A0.c)
 *     sub_1406D6860 @ 0x1406D6860 (sub_1406D6860.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_1409136B4 @ 0x1409136B4 (sub_1409136B4.c)
 *     sub_1409180B0 @ 0x1409180B0 (sub_1409180B0.c)
 *     sub_140A51F50 @ 0x140A51F50 (sub_140A51F50.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, IoStatusBlock);
}
