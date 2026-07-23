/*
 * XREFs of HalGetBusDataByOffset @ 0x140396CB0
 * Callers:
 *     HalGetBusData @ 0x140396C80 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x140521564 (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x140A8F1A4 (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x140AB4CC4 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetPCIData @ 0x140396D04 (HalpGetPCIData.c)
 *     HalpGetSetCmosData @ 0x1403A55EC (HalpGetSetCmosData.c)
 */

ULONG __stdcall HalGetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  if ( BusDataType == Cmos )
    return HalpGetSetCmosData(0, SlotNumber, (_DWORD)Buffer, Length, 0);
  if ( BusNumber <= HalpMaxPciBus && BusDataType == PCIConfiguration && BusNumber >= HalpMinPciBus )
    return HalpGetPCIData(BusNumber >> 8);
  return 0;
}
