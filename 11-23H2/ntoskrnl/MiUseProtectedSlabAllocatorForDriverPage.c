/*
 * XREFs of MiUseProtectedSlabAllocatorForDriverPage @ 0x140292634
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiAllocateDriverPage @ 0x140706534 (MiAllocateDriverPage.c)
 * Callees:
 *     MiGetSlabAllocatorTypeByProtection @ 0x14046DA0E (MiGetSlabAllocatorTypeByProtection.c)
 */

__int64 __fastcall MiUseProtectedSlabAllocatorForDriverPage(__int64 a1, __int64 a2, __int64 a3)
{
  int SlabAllocatorTypeByProtection; // eax
  _DWORD *v5; // r9
  unsigned int v6; // r8d

  if ( (MiFlags & 0x8000) == 0 )
    return 0LL;
  LOBYTE(a1) = (*(_BYTE *)(a1 + 4) & 8) != 0;
  if ( ((unsigned __int8)a1 & ((a2 & 2) != 0)) == 0 )
    return 0LL;
  SlabAllocatorTypeByProtection = MiGetSlabAllocatorTypeByProtection(a1, a2, 1LL, a3);
  *v5 = SlabAllocatorTypeByProtection;
  return v6;
}
