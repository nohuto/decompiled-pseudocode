/*
 * XREFs of RtlLookupPrimaryFunctionEntry @ 0x1405B1F14
 * Callers:
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140976520 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403C5080 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  return RtlpLookupPrimaryFunctionEntry(a1, a2, a2 + *(unsigned int *)a1);
}
