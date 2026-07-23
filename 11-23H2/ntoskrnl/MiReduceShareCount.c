/*
 * XREFs of MiReduceShareCount @ 0x1403680B4
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x1402109E0 (MiDeleteNonPagedPoolTail.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x14064DBDC (MiBadShareCount.c)
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
