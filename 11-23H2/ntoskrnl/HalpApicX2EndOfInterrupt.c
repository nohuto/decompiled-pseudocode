/*
 * XREFs of HalpApicX2EndOfInterrupt @ 0x14041AD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpApicX2EndOfInterrupt()
{
  __int64 result; // rax

  result = 0LL;
  __writemsr(0x80Bu, 0LL);
  return result;
}
