/*
 * XREFs of CmpRemoveKeyHash @ 0x14067EAE0
 * Callers:
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpRehashKcbSubtree @ 0x140915410 (CmpRehashKcbSubtree.c)
 *     CmpRemoveKeyControlBlock @ 0x1409154C4 (CmpRemoveKeyControlBlock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x14067EB38 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1648)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
