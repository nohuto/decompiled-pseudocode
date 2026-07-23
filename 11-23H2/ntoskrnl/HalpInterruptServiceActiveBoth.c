/*
 * XREFs of HalpInterruptServiceActiveBoth @ 0x140506CDC
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     HalpInterruptLookupController @ 0x140320170 (HalpInterruptLookupController.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403201EC (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptSetLineStateInternal @ 0x14037CBD0 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x14037CD18 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptServiceActiveBoth(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v4; // rbx
  ULONG_PTR *v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  v11 = 0LL;
  v2 = *(_DWORD *)(v1 + 64);
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v2, v2 + 1);
  LODWORD(v11) = LinesForGsiRange[4];
  HIDWORD(v11) = v2 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v4 = (_DWORD *)(*((_QWORD *)LinesForGsiRange + 5) + 56LL * (v2 - LinesForGsiRange[7]));
  v5 = HalpInterruptLookupController(v11);
  v6 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  if ( *v4 == 1 )
  {
    *v4 = 2;
  }
  else if ( *v4 == 2 )
  {
    *v4 = 1;
  }
  if ( (int)HalpInterruptSetLineStateInternal((__int64)v5, (__int64)&v11, (__int64)v4) < 0 )
    KeBugCheckEx(0x5Cu, 0x205uLL, *((int *)v5 + 60), (ULONG_PTR)v5, SHIDWORD(v11));
  result = KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  return result;
}
