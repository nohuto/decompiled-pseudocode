/*
 * XREFs of RtlLookupPrimaryFunctionEntry @ 0x1405B19A4
 * Callers:
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140976320 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403C4EA0 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  return RtlpLookupPrimaryFunctionEntry(a1, a2, a2 + *(unsigned int *)a1);
}
