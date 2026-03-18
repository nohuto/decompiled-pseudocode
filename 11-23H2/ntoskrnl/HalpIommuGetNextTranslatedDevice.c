/*
 * XREFs of HalpIommuGetNextTranslatedDevice @ 0x14040F9BC
 * Callers:
 *     IvtHandleInterrupt @ 0x14052CE00 (IvtHandleInterrupt.c)
 * Callees:
 *     HalpDmaGetNextTranslatedDevice @ 0x1404FFE24 (HalpDmaGetNextTranslatedDevice.c)
 */

__int64 HalpIommuGetNextTranslatedDevice()
{
  return HalpDmaGetNextTranslatedDevice();
}
