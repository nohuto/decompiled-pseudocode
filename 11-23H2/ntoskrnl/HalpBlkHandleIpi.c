/*
 * XREFs of HalpBlkHandleIpi @ 0x140B16190
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140B15100 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140B15DC4 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
