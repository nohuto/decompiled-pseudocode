/*
 * XREFs of MiReduceShareCount @ 0x1403678C4
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x140210A00 (MiDeleteNonPagedPoolTail.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402817A0 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x14064D6FC (MiBadShareCount.c)
 */

__int64 __fastcall MiReduceShareCount(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (v4 & 0x3FFFFFFFFFFFFFFFLL) - a2;
  *(_QWORD *)(a1 + 24) = v4 ^ (v5 ^ v4) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v4 & 0x3FFFFFFFFFFFFFFFLL) == a2 )
    return MiPfnShareCountIsZero(a1, v5, (_QWORD *)a1, a2);
  else
    return 2LL;
}
