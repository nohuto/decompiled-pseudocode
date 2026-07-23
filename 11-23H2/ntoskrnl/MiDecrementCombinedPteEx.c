/*
 * XREFs of MiDecrementCombinedPteEx @ 0x1402F3DA8
 * Callers:
 *     MiConvertPrivateToProto @ 0x1402175A8 (MiConvertPrivateToProto.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiDeleteValidSystemPage @ 0x140280AA0 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     MiConvertStandbyToProto @ 0x14035A020 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiFreeCombineBlock @ 0x1402194C8 (MiFreeCombineBlock.c)
 *     MiDecrementCloneBlock @ 0x1402F3EB8 (MiDecrementCloneBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogCombinedPteDelete @ 0x140653BDC (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDecrementCombinedPteEx(int a1, __int64 a2, int a3)
{
  volatile signed __int32 *v4; // r9
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v7; // esi
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  int v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0;
  v4 = *(volatile signed __int32 **)(((a2 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v5 = *(_QWORD *)v4;
  _InterlockedExchangeAdd(v4 + 98, 0xFFFFFFFF);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  v7 = MiDecrementCloneBlock(v5, a1, a2, a3, (__int64)&v16);
  if ( (_DWORD)KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v16 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a2);
    MiFreeCombineBlock(a2 - 32);
  }
  return v7;
}
