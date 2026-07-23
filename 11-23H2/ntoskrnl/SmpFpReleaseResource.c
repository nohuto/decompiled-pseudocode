/*
 * XREFs of SmpFpReleaseResource @ 0x1405CC920
 * Callers:
 *     SmFpFree @ 0x1404664A8 (SmFpFree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SmpFpReleaseResource(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3)
{
  __int64 v4; // rbx
  KIRQL v6; // al
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive(SpinLock);
  v7 = *(_QWORD **)&SpinLock[2 * v4 + 10];
  v8 = v6;
  while ( 1 )
  {
    if ( !v7 )
    {
      v9 = 0;
      goto LABEL_6;
    }
    if ( (v7[1] & 0xFFFFFFFFFFFFFFF8uLL) == a3 )
      break;
    v7 = (_QWORD *)*v7;
  }
  *((_DWORD *)v7 + 2) &= ~1u;
  --*((_BYTE *)SpinLock + v4 + 88);
  v9 = 1;
  --*((_BYTE *)SpinLock + 94);
LABEL_6:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v8 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v8);
  return v9;
}
