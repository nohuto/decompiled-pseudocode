/*
 * XREFs of ViPtInitializeLockContext @ 0x1405D23E0
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140ADE5D0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE808 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADEA48 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADEB00 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADEC20 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     <none>
 */

void __fastcall ViPtInitializeLockContext(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 9) = 4;
}
