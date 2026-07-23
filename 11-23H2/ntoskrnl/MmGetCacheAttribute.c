/*
 * XREFs of MmGetCacheAttribute @ 0x14061F1D0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetCacheAttributeEx @ 0x14061F1F0 (MmGetCacheAttributeEx.c)
 */

__int64 __fastcall MmGetCacheAttribute(__int64 a1, __int64 a2)
{
  return MmGetCacheAttributeEx(a1, 0LL, a2);
}
