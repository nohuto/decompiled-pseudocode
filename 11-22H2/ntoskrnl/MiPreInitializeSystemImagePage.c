/*
 * XREFs of MiPreInitializeSystemImagePage @ 0x14062C63C
 * Callers:
 *     MiAllocateDriverPage @ 0x1407063D4 (MiAllocateDriverPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402858B4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnBlink @ 0x1402DF0B0 (MiSetPfnBlink.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiPreInitializeSystemImagePage(__int64 a1)
{
  unsigned __int64 v2; // rdi
  char v3; // al
  unsigned __int64 v4; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  v2 = (unsigned __int8)MiLockPageInline(a1);
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1);
  v3 = *(_BYTE *)(a1 + 34) & 0xC7;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 34) = v3;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 16) = 0LL;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16));
  if ( (_BYTE)v2 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), v4);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v2 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
}
