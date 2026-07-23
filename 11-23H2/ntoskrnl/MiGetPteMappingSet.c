/*
 * XREFs of MiGetPteMappingSet @ 0x140284480
 * Callers:
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x1406334B4 (MiSlowRotateCopy.c)
 *     MiFillPageWithImageExtentContents @ 0x14063D5E0 (MiFillPageWithImageExtentContents.c)
 *     MiCopyMemoryPagefileData @ 0x140660078 (MiCopyMemoryPagefileData.c)
 * Callees:
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 *     MiCreatePteCopyList @ 0x140360A50 (MiCreatePteCopyList.c)
 */

unsigned __int64 __fastcall MiGetPteMappingSet(int a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // dl
  _QWORD *MmInternal; // rdi
  unsigned __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // r10

  if ( !a1 || KeGetCurrentIrql() >= 2u || (result = MiCreatePteCopyList(a2, a3), !*(_DWORD *)(a3 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v9) = 4;
      else
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    *(_BYTE *)(a3 + 8) = CurrentIrql;
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    result = (((unsigned __int64)MiGetUltraMapping(MmInternal + 1556, 3LL, a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MmInternal[1543] = result;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = a2;
    *(_QWORD *)(a3 + 16) = result;
    *(_BYTE *)(a3 + 9) = 1;
  }
  return result;
}
