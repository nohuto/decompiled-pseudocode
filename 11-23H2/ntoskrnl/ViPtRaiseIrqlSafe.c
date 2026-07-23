/*
 * XREFs of ViPtRaiseIrqlSafe @ 0x1405D2964
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140ADE5C0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE7F8 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADEA38 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADEAF0 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADEC10 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     <none>
 */

void __fastcall ViPtRaiseIrqlSafe(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r9
  _DWORD *SchedulerAssist; // r11
  __int64 v3; // rax

  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v3) = 4;
      if ( CurrentIrql != 2 )
        v3 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v3;
    }
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = CurrentIrql;
  }
}
