/*
 * XREFs of HalGetBusDataByOffset @ 0x1403ADE20
 * Callers:
 *     HalGetBusData @ 0x1403D9110 (HalGetBusData.c)
 *     sub_140524434 @ 0x140524434 (sub_140524434.c)
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 *     sub_140A73CB0 @ 0x140A73CB0 (sub_140A73CB0.c)
 * Callees:
 *     sub_1403ADE74 @ 0x1403ADE74 (sub_1403ADE74.c)
 *     sub_1405183DC @ 0x1405183DC (sub_1405183DC.c)
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
    return sub_1405183DC(0, SlotNumber, (_DWORD)Buffer, Length, 0);
  if ( BusNumber <= dword_140C54BA0 && BusDataType == PCIConfiguration && BusNumber >= dword_140D0177C )
    return sub_1403ADE74(BusNumber >> 8);
  return 0;
}
