/*
 * XREFs of HalpBlkHandleIpi @ 0x140B17190
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140B16100 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140B16DC4 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
