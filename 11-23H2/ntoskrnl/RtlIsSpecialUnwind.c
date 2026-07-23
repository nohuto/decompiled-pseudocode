/*
 * XREFs of RtlIsSpecialUnwind @ 0x1405B1EBC
 * Callers:
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140976520 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     RtlpConvertFunctionEntry @ 0x1402A68E0 (RtlpConvertFunctionEntry.c)
 *     RtlpUnwindOpSlots @ 0x140464C50 (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlIsSpecialUnwind(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = a2 + *(unsigned int *)(RtlpConvertFunctionEntry(a1, a2) + 8);
  v3 = 0LL;
  if ( !*(_BYTE *)(v2 + 2) )
    return 0LL;
  while ( (*(_BYTE *)(v2 + 2 * v3 + 5) & 0xF) != 0xA )
  {
    v3 = (unsigned int)RtlpUnwindOpSlots(*(_WORD *)(v2 + 2 * v3 + 4)) + (unsigned int)v3;
    if ( (unsigned int)v3 >= *(unsigned __int8 *)(v2 + 2) )
      return 0LL;
  }
  return 1LL;
}
