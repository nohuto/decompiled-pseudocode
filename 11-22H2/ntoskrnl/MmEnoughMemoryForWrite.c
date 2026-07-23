/*
 * XREFs of MmEnoughMemoryForWrite @ 0x140210020
 * Callers:
 *     CcCanIWriteStreamEx @ 0x14020FCA0 (CcCanIWriteStreamEx.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1402100E8 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x1402E35AC (MiSufficientAvailablePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmEnoughMemoryForWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  bool v5; // si
  unsigned __int8 v6; // bl
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf
  char v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0;
  v6 = 17;
  v17 = 17;
  if ( a1 )
  {
    v7 = MiLockSectionControlArea(a1, 1LL, &v17);
    v4 = v7;
    if ( !v7 )
      return 1;
    v6 = v17;
    v8 = *(_QWORD **)(qword_140C674C8 + 8LL * (*(_WORD *)(v7 + 60) & 0x3FF));
  }
  else
  {
    v8 = &MiSystemPartition;
  }
  if ( (unsigned int)MiSufficientAvailablePages(v8, (_BYTE)dword_140D1D1EC != 0 ? 0x4000LL : 450LL, a3, a4) )
  {
    v5 = 1;
  }
  else
  {
    if ( v8[2200] < (unsigned __int64)(v8[2228] + 800LL) )
      v5 = (unsigned int)MiSufficientAvailablePages(v8, 80LL, v9, v10) != 0;
    v6 = v17;
  }
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = v17;
        v15 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
  return v5;
}
