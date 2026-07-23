/*
 * XREFs of KiCheckWaitNext @ 0x1402C26F0
 * Callers:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x1402C1774 (KeWaitForAlertByThreadId.c)
 *     KiWaitForAllObjects @ 0x14034A8FC (KiWaitForAllObjects.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int8 v6; // cf
  unsigned __int8 v8; // si
  unsigned __int8 CurrentIrql; // r8
  LARGE_INTEGER v12; // rcx
  _DWORD *v13; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // r11
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  v6 = _bittestandreset((signed __int32 *)(a1 + 116), 2u);
  PerformanceCounter.QuadPart = 0LL;
  v8 = v6;
  if ( !v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v16) = 4;
      else
        v16 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v16;
    }
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) >= 0 )
    {
      *a4 = *(_QWORD *)a2;
      *a5 = 1;
    }
    else
    {
      if ( a3 )
        v12 = (LARGE_INTEGER)(*(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter) - MEMORY[0xFFFFF780000003B0]);
      else
        v12.QuadPart = KiQueryUnbiasedInterruptTime(0LL);
      v13 = a5;
      *a4 = v12.QuadPart - *(_QWORD *)(a1 + 248) - *(_QWORD *)a2;
      *v13 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v8;
}
