/*
 * XREFs of HalpIommuGetNextTranslatedDevice @ 0x14040FB9C
 * Callers:
 *     IvtHandleInterrupt @ 0x14052D350 (IvtHandleInterrupt.c)
 * Callees:
 *     HalpDmaGetNextTranslatedDevice @ 0x140500374 (HalpDmaGetNextTranslatedDevice.c)
 */

__int64 HalpIommuGetNextTranslatedDevice()
{
  return HalpDmaGetNextTranslatedDevice();
}
