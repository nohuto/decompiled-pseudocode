/*
 * XREFs of KeUpdatePendingQosRequest @ 0x140460E1C
 * Callers:
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     PoIdle @ 0x1402C4B30 (PoIdle.c)
 *     KiUpdateRunTime @ 0x1402C74B0 (KiUpdateRunTime.c)
 *     KeCheckAndApplyBamQos @ 0x140460D10 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     KiSetClockTimer @ 0x1402C2568 (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x140340780 (KiCancelClockTimer.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140462020 (KiSetVirtualHeteroClockIntervalRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeUpdatePendingQosRequest(__int64 a1)
{
  char v1; // bl
  __int64 result; // rax
  signed __int32 v3; // eax
  bool v4; // zf
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax

  v1 = 0;
  if ( !KiClockTimerPerCpuTickScheduling )
  {
    if ( (*(_DWORD *)(a1 + 236) & 0x300) != 0 )
    {
      result = (unsigned int)_InterlockedIncrement(&KiPendingVirtualHeteroRequest);
      if ( (_DWORD)result != 1 )
        return result;
      if ( !*(_BYTE *)(a1 + 33) )
      {
LABEL_5:
        if ( !qword_140C42658 )
          word_140C42622 = KiClockTimerOwner + 2048;
        return KiInsertQueueDpc((ULONG_PTR)&KiSetVirtualHeteroClockIntervalRequestDpc, 0LL, 0LL, 0LL, 0);
      }
    }
    else
    {
      v3 = _InterlockedExchangeAdd(&KiPendingVirtualHeteroRequest, 0xFFFFFFFF);
      v4 = v3 == 1;
      result = (unsigned int)(v3 - 1);
      if ( !v4 )
        return result;
      if ( !*(_BYTE *)(a1 + 33) )
        goto LABEL_5;
      v1 = 1;
    }
    LOBYTE(a1) = v1;
    return KiSetVirtualHeteroClockIntervalRequest(a1);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v7) = 0x8000;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v7;
  }
  if ( (*(_DWORD *)(a1 + 236) & 0x300) != 0 )
  {
    if ( KiQosHysteresisTimerPeriod )
      KiSetClockTimer(a1, -(__int64)(unsigned int)KiQosHysteresisTimerPeriod, 0, 6, 0, 1);
  }
  else
  {
    KiCancelClockTimer(a1, 6LL, 0);
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v4 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
