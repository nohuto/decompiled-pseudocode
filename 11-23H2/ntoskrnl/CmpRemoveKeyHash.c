/*
 * XREFs of CmpRemoveKeyHash @ 0x14076ACB0
 * Callers:
 *     CmpDiscardKcb @ 0x14076AD08 (CmpDiscardKcb.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x140A17638 (CmpRehashKcbSubtree.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x1406D92F8 (CmpRemoveKeyHashFromTableEntry.c)
 */

void __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  CmpRemoveKeyHashFromTableEntry(
    (__int64)a2,
    *(_QWORD *)(a1 + 1648)
  + 24
  * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
