/*
 * XREFs of MiGetPfnPageSizeIndexUnsynchronized @ 0x1402E9330
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140236D20 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1402370A0 (MiSetProbePagesAhead.c)
 *     MiFillSystemPtes @ 0x14027EB50 (MiFillSystemPtes.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402F176C (MiLegitimatePageForDriversToMap.c)
 *     MiPfnsWorthTrying @ 0x1403BB874 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x1403BBDD8 (MiActivePageClaimCandidate.c)
 *     MiGetPagesRemainingInResidentPage @ 0x14064F794 (MiGetPagesRemainingInResidentPage.c)
 *     MiZeroPageMakeHot @ 0x14065615C (MiZeroPageMakeHot.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F9F20 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x1402E8B70 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x1402E9410 (MiGetBaseResidentPage.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPfnPageSizeIndexUnsynchronized(__int64 a1, int *a2, int *a3)
{
  unsigned int PfnPageSizeIndex; // r15d
  int v5; // r14d
  int v6; // esi
  __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 BaseResidentPage; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

  PfnPageSizeIndex = -1;
  v5 = *(_BYTE *)(a1 + 34) & 7;
  v6 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x28u) )
  {
    v10 = (unsigned __int8)MiLockPageInline(a1);
    if ( _bittest64((const signed __int64 *)(a1 + 40), 0x28u) )
    {
      BaseResidentPage = MiGetBaseResidentPage(a1, v9, v11, v12);
      v6 = *(unsigned __int8 *)(BaseResidentPage + 34) >> 6;
      v5 = *(_BYTE *)(BaseResidentPage + 34) & 7;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      if ( BaseResidentPage != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v10 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
  }
  result = PfnPageSizeIndex;
  *a3 = v6;
  *a2 = v5;
  return result;
}
