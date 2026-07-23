/*
 * XREFs of sub_140A73CB0 @ 0x140A73CB0
 * Callers:
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     sub_140A72F18 @ 0x140A72F18 (sub_140A72F18.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x1403ADE20 (HalGetBusDataByOffset.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A73CB0(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        _DWORD *a7)
{
  int BusDataByOffset; // eax

  if ( a1 == PCIConfiguration )
    BusDataByOffset = sub_14042A5E0(a2, a3);
  else
    BusDataByOffset = HalGetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = BusDataByOffset;
  return Length != BusDataByOffset ? 0xC0000001 : 0;
}
