/*
 * XREFs of NVMeSetSenseData @ 0x1C0024B48
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001010 (NVMeHwBuildIo.c)
 *     ScsiToNVMe @ 0x1C00015C0 (ScsiToNVMe.c)
 *     NVMeHwStartIo @ 0x1C00022D0 (NVMeHwStartIo.c)
 *     FormInquiryBlockLimitsData @ 0x1C001210C (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0012334 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x1C0012424 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0012498 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C00126E8 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C00128F4 (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C0012B14 (FormInquiryVpdSupportedPagesData.c)
 *     LogSenseInformationalExceptions @ 0x1C0014CB4 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0014E20 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0014EA0 (LogSenseTemperature.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C00182A8 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001859C (NVMeWriteBufferFirmwareDownload.c)
 *     ScsiInquiryRequest @ 0x1C0019E54 (ScsiInquiryRequest.c)
 *     ScsiLogSenseRequest @ 0x1C0019F4C (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0019FD8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C001A174 (ScsiModeSenseRequest.c)
 *     ScsiPersistentReserveIn @ 0x1C001A30C (ScsiPersistentReserveIn.c)
 *     ScsiPersistentReserveOut @ 0x1C001A400 (ScsiPersistentReserveOut.c)
 *     ScsiReadCapacityRequest @ 0x1C001A618 (ScsiReadCapacityRequest.c)
 *     ScsiSanitizeRequest @ 0x1C001A9D4 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001AC18 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C001AD3C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C001AE60 (ScsiStartStopUnitRequest.c)
 *     ScsiUnmapRequest @ 0x1C001AFCC (ScsiUnmapRequest.c)
 *     ProcessCommandNvmePacket @ 0x1C0024E0C (ProcessCommandNvmePacket.c)
 * Callees:
 *     memmove @ 0x1C0004A40 (memmove.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     GetSrbScsiData @ 0x1C0012D1C (GetSrbScsiData.c)
 */

void *__fastcall NVMeSetSenseData(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  void *result; // rax
  char *v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // edx
  void *v9; // [rsp+30h] [rbp-20h] BYREF
  __int128 Src; // [rsp+38h] [rbp-18h] BYREF
  __int16 v11; // [rsp+48h] [rbp-8h]
  _BYTE *v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int8 v13; // [rsp+78h] [rbp+28h] BYREF

  *(_BYTE *)(a1 + 3) = a2;
  v11 = 0;
  Src = 0LL;
  WORD6(Src) = a4;
  v12 = 0LL;
  v9 = 0LL;
  v13 = 0;
  BYTE2(Src) = a3 & 0xF;
  LOBYTE(Src) = -16;
  BYTE7(Src) = 10;
  result = (void *)GetSrbScsiData(a1, 0LL, &v12, &v9, &v13);
  if ( v12 )
    *v12 = 2;
  v6 = (char *)v9;
  if ( v9 && v13 )
  {
    v7 = 18;
    if ( v13 <= 0x12u )
      v7 = v13;
    result = memmove(v9, &Src, v7);
    v8 = v13;
    *(_BYTE *)(a1 + 3) |= 0x80u;
    if ( v8 > v7 )
      return NVMeZeroMemory(&v6[v7], v8 - v7);
  }
  return result;
}
