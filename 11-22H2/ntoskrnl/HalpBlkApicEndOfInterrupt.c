/*
 * XREFs of HalpBlkApicEndOfInterrupt @ 0x140B16F90
 * Callers:
 *     HalpBlkStubInterrupt @ 0x140B15F80 (HalpBlkStubInterrupt.c)
 *     HalpBlkIpiInterrupt @ 0x140B16100 (HalpBlkIpiInterrupt.c)
 *     HalpBlkLocalErrorInterrupt @ 0x140B161C0 (HalpBlkLocalErrorInterrupt.c)
 *     HalpBlkUnexpectedInterruptCommon @ 0x140B16D00 (HalpBlkUnexpectedInterruptCommon.c)
 * Callees:
 *     HalpBlkApicWrite @ 0x140B17148 (HalpBlkApicWrite.c)
 */

__int64 HalpBlkApicEndOfInterrupt()
{
  return HalpBlkApicWrite(176LL, 0LL);
}
