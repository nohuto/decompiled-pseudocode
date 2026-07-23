/*
 * XREFs of RtlpHpEnvFreeVA @ 0x1402121E0
 * Callers:
 *     RtlpHpVaMgrRangeFree @ 0x140210970 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrCtxFree @ 0x140210A6C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpFreeVA @ 0x140212158 (RtlpHpFreeVA.c)
 *     RtlpHpEnvAllocVA @ 0x1402868B0 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrAlloc @ 0x14031015C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1403651C8 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     MmFreePoolMemory @ 0x140212224 (MmFreePoolMemory.c)
 */

__int64 __fastcall RtlpHpEnvFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10

  if ( (_DWORD)a3 != 0x8000 )
    return MmFreePoolMemory(a1, a2, a3);
  v4 = (*a1 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  v5 = *a1 + *a2 - v4;
  *a1 = v4;
  *a2 = v5;
  if ( v5 )
    return MmFreePoolMemory(a1, a2, a3);
  else
    return 0LL;
}
