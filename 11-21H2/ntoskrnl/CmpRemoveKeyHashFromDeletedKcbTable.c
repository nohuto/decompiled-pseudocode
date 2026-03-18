/*
 * XREFs of CmpRemoveKeyHashFromDeletedKcbTable @ 0x14067EA88
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1407C09E0 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x14067EB38 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHashFromDeletedKcbTable(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1664)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1672) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
