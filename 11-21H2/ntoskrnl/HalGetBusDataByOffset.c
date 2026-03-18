/*
 * XREFs of HalGetBusDataByOffset @ 0x1403ADE20
 * Callers:
 *     HalGetBusData @ 0x1403D9110 (HalGetBusData.c)
 *     HalpWhackICHUsbSmi @ 0x140524434 (HalpWhackICHUsbSmi.c)
 *     HalpPiix4Detect @ 0x140A53294 (HalpPiix4Detect.c)
 *     KdpSysReadBusData @ 0x140A73CB0 (KdpSysReadBusData.c)
 * Callees:
 *     HalpGetPCIData @ 0x1403ADE74 (HalpGetPCIData.c)
 *     HalpGetSetCmosData @ 0x1405183DC (HalpGetSetCmosData.c)
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
