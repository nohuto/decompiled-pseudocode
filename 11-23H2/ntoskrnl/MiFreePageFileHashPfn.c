/*
 * XREFs of MiFreePageFileHashPfn @ 0x140665EC8
 * Callers:
 *     MiFreePageFileHashPfns @ 0x14021D960 (MiFreePageFileHashPfns.c)
 *     MiMapPageFileHash @ 0x1406662EC (MiMapPageFileHash.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 */

void __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rax

  v1 = 48 * a1 - 0x220000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v1 + 32) = 0;
  MiInsertPageInFreeOrZeroedList(a1, 2);
}
