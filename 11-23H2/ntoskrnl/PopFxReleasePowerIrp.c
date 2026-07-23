/*
 * XREFs of PopFxReleasePowerIrp @ 0x14028DFD4
 * Callers:
 *     PopFreeIrp @ 0x14028E528 (PopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopRequestPowerIrp @ 0x14028F4C0 (PopRequestPowerIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // ebx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // si
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  LONG result; // eax

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(_QWORD *)(a1 + 512);
  v4 = *(_QWORD *)(a1 + 536);
  v5 = *(_QWORD *)(a1 + 552);
  v6 = *(_DWORD *)(a1 + 528);
  _m_prefetchw((const void *)(a1 + 32));
  v7 = *(_DWORD *)(a1 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v7, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x20) != 0 )
  {
    v9 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v10 = *(_DWORD *)(a1 + 32);
    do
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v10, v10);
    }
    while ( v11 != v10 );
    if ( (v10 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 520);
      v4 = *(_QWORD *)(a1 + 544);
      v5 = *(_QWORD *)(a1 + 560);
      v6 = *(_DWORD *)(a1 + 532);
    }
  }
  else
  {
    v9 = 0;
    KeSetEvent((PRKEVENT)(a1 + 568), 0, 0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = -1LL << ((unsigned __int8)v2 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)v12;
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  if ( v9 )
  {
    LOBYTE(v12) = 2;
    PopRequestPowerIrp(v3, v12, v6, v4, v5, 1, 0LL);
  }
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
