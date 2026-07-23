/*
 * XREFs of MiReturnPteMappingSet @ 0x140284068
 * Callers:
 *     MiCopyPage @ 0x140283CF0 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x140632FD4 (MiSlowRotateCopy.c)
 *     MiFillPageWithImageExtentContents @ 0x14063D100 (MiFillPageWithImageExtentContents.c)
 *     MiCopyMemoryPagefileData @ 0x14065FB98 (MiCopyMemoryPagefileData.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPteMappingSet(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf

  if ( *(_BYTE *)(a1 + 8) == 17 )
    return MiReleasePtes(&qword_140C69A40, *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 4));
  result = (__int64)KeGetCurrentPrcb();
  *(_QWORD *)(*(_QWORD *)(result + 33592) + 12344LL) = 0LL;
  v2 = *(unsigned __int8 *)(a1 + 8);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v5 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
