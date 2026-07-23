/*
 * XREFs of HalSetBusDataByOffset @ 0x1403ADD00
 * Callers:
 *     HalSetBusData @ 0x1405054B0 (HalSetBusData.c)
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 *     sub_140A73D18 @ 0x140A73D18 (sub_140A73D18.c)
 * Callees:
 *     sub_1403ADD44 @ 0x1403ADD44 (sub_1403ADD44.c)
 *     sub_1405183DC @ 0x1405183DC (sub_1405183DC.c)
 */

ULONG __stdcall HalSetBusDataByOffset(
        BUS_DATA_TYPE BusDataType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PVOID Buffer,
        ULONG Offset,
        ULONG Length)
{
  size_t Size; // [rsp+28h] [rbp-10h]

  if ( BusDataType == Cmos )
    return sub_1405183DC(0, SlotNumber, (_DWORD)Buffer, Length, 1);
  if ( BusDataType != PCIConfiguration )
    return 0;
  LODWORD(Size) = Length;
  return sub_1403ADD44(BusNumber >> 8, BusNumber, SlotNumber, (int)Buffer, Offset, Size);
}
