/*
 * XREFs of CmpRemoveKeyHashFromDeletedKcbTable @ 0x14076B15C
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1406D8540 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x1406D9328 (CmpRemoveKeyHashFromTableEntry.c)
 */

void __fastcall CmpRemoveKeyHashFromDeletedKcbTable(__int64 a1, _DWORD *a2)
{
  CmpRemoveKeyHashFromTableEntry(
    (__int64)a2,
    *(_QWORD *)(a1 + 1664)
  + 24
  * ((unsigned int)(*(_DWORD *)(a1 + 1672) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
