/*
 * XREFs of sub_140A88624 @ 0x140A88624
 * Callers:
 *     sub_140A87C8C @ 0x140A87C8C (sub_140A87C8C.c)
 *     sub_140A87EFC @ 0x140A87EFC (sub_140A87EFC.c)
 *     sub_140A896FC @ 0x140A896FC (sub_140A896FC.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

__int64 __fastcall sub_140A88624(ULONG_PTR a1, const void *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  PVOID v6; // rcx

  v4 = *(unsigned int *)(a1 + 44);
  v5 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)a2 < v5 + v4 || (unsigned __int64)a2 >= v4 + v5 + (unsigned __int64)*(unsigned int *)(a1 + 40) )
  {
    sub_140A88948(byte_140C0D924, "Virtual address %p out of bounds of MDL %p", (const void *)0x1B, a2);
    sub_1405FFA20(0xE6u, 0x1BuLL, (ULONG_PTR)a2, a1, 0LL, byte_140C0D924);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
      v6 = *(PVOID *)(a1 + 24);
    else
      v6 = MmMapLockedPagesSpecifyCache((PMDL)a1, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v6 )
      return (__int64)v6 + (_QWORD)a2 - *(_QWORD *)(a1 + 32) - *(unsigned int *)(a1 + 44);
    sub_140A88948(&dword_140C0D928, "Dma MDL %p not mapped in system VA.", (const void *)0x22);
    sub_1405FFA20(0xE6u, 0x22uLL, a1, 0LL, 0LL, &dword_140C0D928);
  }
  return 0LL;
}
