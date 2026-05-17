/*
 * XREFs of RtlpFtInitOnceCallback @ 0x18009F930
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFtInitialize @ 0x18009F950 (RtlpFtInitialize.c)
 */

_BOOL8 RtlpFtInitOnceCallback()
{
  return (int)RtlpFtInitialize() >= 0;
}
