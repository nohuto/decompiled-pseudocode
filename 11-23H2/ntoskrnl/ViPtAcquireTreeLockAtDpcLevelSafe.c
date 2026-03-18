/*
 * XREFs of ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405D2300
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140ADE5D0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE808 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADEA48 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADEB00 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADEC20 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AD10 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall ViPtAcquireTreeLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v2; // al
  volatile LONG *v5; // rcx

  v2 = *(_BYTE *)(a2 + 9);
  if ( (v2 & 2) == 0 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v2 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
