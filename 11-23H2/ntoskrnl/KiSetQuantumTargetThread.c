/*
 * XREFs of KiSetQuantumTargetThread @ 0x1402B2D80
 * Callers:
 *     KeSetPriorityThread @ 0x1402B05D0 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140350330 (KeSetPriorityAndQuantumProcess.c)
 * Callees:
 *     KiGetProcessorEfficiencyClass @ 0x14020E8D4 (KiGetProcessorEfficiencyClass.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     PoGetFrequencyBucket @ 0x140249CF0 (PoGetFrequencyBucket.c)
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiBeginCounterAccumulation @ 0x140574630 (KiBeginCounterAccumulation.c)
 */

__int64 __fastcall KiSetQuantumTargetThread(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  bool v10; // zf
  unsigned __int64 v11; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  bool ProcessorEfficiencyClass; // al
  _QWORD *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rax

  if ( !a3 || *(_BYTE *)(a2 + 32) )
  {
    v8 = *(_QWORD *)(a1 + 72);
  }
  else
  {
    _disable();
    *(_BYTE *)(a2 + 32) = 1;
    v6 = __rdtsc();
    v7 = v6 - *(_QWORD *)(a2 + 33152);
    v8 = v7 + *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v8;
    v9 = ((v7 * *(unsigned int *)(a2 + 33208)) >> 16) + *(unsigned int *)(a1 + 80);
    if ( v9 > 0xFFFFFFFF )
      LODWORD(v9) = -1;
    *(_QWORD *)(a2 + 33152) = v6;
    v10 = (*(_BYTE *)(a1 + 2) & 0xBE) == 0;
    *(_DWORD *)(a1 + 80) = v9;
    if ( !v10 )
      KiEndThreadAccountingPeriodEx(a2, a1, v7, 0);
    v11 = __rdtsc();
    *(_QWORD *)(a2 + 33400) += v11 - *(_QWORD *)(a2 + 33152);
    if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
    {
      PoGetFrequencyBucket(a2);
      ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(a2);
      v19 = (_QWORD *)(a2 + 8 * (ProcessorEfficiencyClass + 2 * a4 + 4176));
      *v19 += v20;
    }
    if ( (*(_BYTE *)(a1 + 2) & 0x40) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 968);
      if ( v21 )
        *(_BYTE *)(v21 + 64) = 1;
    }
    *(_QWORD *)(a2 + 33152) = v11;
    if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(a1, 0LL, v7, a4);
    v10 = *(_BYTE *)(a2 + 6) == 0;
    *(_BYTE *)(a2 + 32) = 0;
    if ( !v10 )
    {
      *(_BYTE *)(a2 + 6) = 0;
      HalRequestSoftwareInterrupt(2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  result = *(unsigned int *)(a1 + 120);
  v15 = v8 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
  if ( (result & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v15;
  return result;
}
