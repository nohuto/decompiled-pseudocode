/*
 * XREFs of MiFreeAwePagesFromMdl @ 0x14064A260
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x140A40608 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     MiFreeContiguousLargePageRun @ 0x14064A308 (MiFreeContiguousLargePageRun.c)
 *     MiFreePhysicalRange @ 0x14064AD44 (MiFreePhysicalRange.c)
 *     MiReadyLargeAwePageForFree @ 0x14064C1A8 (MiReadyLargeAwePageForFree.c)
 */

void *__fastcall MiFreeAwePagesFromMdl(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rbx
  __int64 v7; // r14
  void *result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v5 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  if ( v3 == 1 )
    return MiFreePagesFromMdl(a2, 0);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(_QWORD *)(a2 + 8 * i + 48);
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      result = (void *)MiFreePhysicalRange(a1, *(_QWORD *)(a2 + 8 * i + 48));
    }
    else
    {
      MiReadyLargeAwePageForFree(48 * v7 - 0x220000000000LL);
      result = (void *)MiFreeContiguousLargePageRun(a1, v7, v3);
    }
  }
  return result;
}
