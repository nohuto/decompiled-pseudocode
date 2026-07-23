/*
 * XREFs of MiReturnUnusedHugeDescriptors @ 0x140622780
 * Callers:
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockHugePfn @ 0x140621464 (MiLockHugePfn.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140654A6C (MiDeleteAcceleratorDescriptor.c)
 */

void __fastcall MiReturnUnusedHugeDescriptors(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v3; // al
  _QWORD *v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  _QWORD *v11; // rcx

  v1 = *(_QWORD *)(a1 + 88);
  v3 = MiLockHugePfn(v1);
  v4 = *(_QWORD **)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  v5 = v3;
  _InterlockedAnd(
    (volatile signed __int32 *)(qword_140C67EF8 + 4 * ((((v1 - qword_140C67EF0) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << (((v1 - qword_140C67EF0) >> 3) & 0x1F)));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  while ( v4 )
  {
    v11 = v4;
    v4 = (_QWORD *)*v4;
    MiDeleteAcceleratorDescriptor(v11 + 4);
  }
}
