/*
 * XREFs of BreakPoint @ 0x1C00554F0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDebugger @ 0x1C004D650 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004D7D8 (ConPrintf.c)
 */

__int64 BreakPoint()
{
  ConPrintf("\nHit a code breakpoint.\n");
  AMLIDebugger();
  return 0LL;
}
