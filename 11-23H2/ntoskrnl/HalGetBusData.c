/*
 * XREFs of HalGetBusData @ 0x140396C80
 * Callers:
 *     HalpPiix4Detect @ 0x140A8F1A4 (HalpPiix4Detect.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x140396CB0 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalGetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalGetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
