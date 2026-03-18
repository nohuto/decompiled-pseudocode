/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4F0
 * Callers:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x14020A3CC (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14020A740 (VfAvlDeleteTreeNode.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADD230 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140ADD2A4 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A484 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v4; // al
  volatile LONG *v5; // rcx

  if ( (*(_BYTE *)(a2 + 9) & 2) != 0 && *(_QWORD *)a2 != a1 )
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
  v4 = *(_BYTE *)(a2 + 9);
  if ( (v4 & 2) == 0 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v4 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
