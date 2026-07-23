/*
 * XREFs of HalGetBusData @ 0x1403D9110
 * Callers:
 *     sub_140A53294 @ 0x140A53294 (sub_140A53294.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x1403ADE20 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalGetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalGetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
