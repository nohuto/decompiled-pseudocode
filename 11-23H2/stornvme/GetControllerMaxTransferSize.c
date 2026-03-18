/*
 * XREFs of GetControllerMaxTransferSize @ 0x1C0007C30
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E90 (NVMeHwFindAdapter.c)
 *     FirmwareDownload @ 0x1C0011AB4 (FirmwareDownload.c)
 *     FormInquiryBlockLimitsData @ 0x1C001210C (FormInquiryBlockLimitsData.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015C00 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001859C (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C00189D4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001962C (QueryProtocolInfoLogPageData.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001E1C8 (NVMeGetControllerInitiatedTelemetryLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetControllerMaxTransferSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ecx

  result = (unsigned int)a1[54];
  if ( (unsigned int)result > 0x200000 )
    result = 0x200000LL;
  v2 = a1[10];
  if ( v2 && (unsigned int)result >= v2 )
    result = v2;
  v3 = a1[15];
  if ( v3 )
  {
    if ( v3 < (unsigned int)result )
      return v3;
  }
  return result;
}
