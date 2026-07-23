/*
 * XREFs of sub_140416A74 @ 0x140416A74
 * Callers:
 *     sub_140410D50 @ 0x140410D50 (sub_140410D50.c)
 *     MmFreeNonCachedMemory @ 0x14096A680 (MmFreeNonCachedMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140416A74(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
