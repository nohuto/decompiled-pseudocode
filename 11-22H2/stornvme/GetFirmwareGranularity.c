/*
 * XREFs of GetFirmwareGranularity @ 0x1C0012ACC
 * Callers:
 *     FirmwareDownload @ 0x1C0011984 (FirmwareDownload.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015AD0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001842C (NVMeWriteBufferFirmwareDownload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFirmwareGranularity(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1840) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
