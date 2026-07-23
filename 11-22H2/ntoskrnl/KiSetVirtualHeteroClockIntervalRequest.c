/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x140462020
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x140460E1C (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x140462140 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140364A68 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x1403B1914 (KiSetClockInterval.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiResetClockInterval @ 0x14056FE84 (KiResetClockInterval.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v3; // rdx
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v3) = 0x8000;
    else
      v3 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v3;
  }
  if ( a1 )
  {
    if ( byte_140C0D400 )
      KiResetClockInterval(&KiVirtualHeteroClockRequest);
  }
  else if ( !byte_140C0D400 && KiQosHysteresisTimerPeriod )
  {
    KiSetClockInterval(KiQosHysteresisTimerPeriod, 0, (__int64)&KiVirtualHeteroClockRequest);
    KiSendClockInterruptToClockOwner();
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v4 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v8 = (v7 & v6[5]) == 0;
      v6[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
