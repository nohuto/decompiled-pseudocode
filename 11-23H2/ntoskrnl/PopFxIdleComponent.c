/*
 * XREFs of PopFxIdleComponent @ 0x140312FC0
 * Callers:
 *     PopFxNotifyPostDIrpCompletion @ 0x14028E038 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFxCompleteComponentActivation @ 0x140312EFC (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x140312F80 (PoFxIdleComponent.c)
 *     PopFxDeactivateComponentDependencies @ 0x1403131E0 (PopFxDeactivateComponentDependencies.c)
 *     PopFxResidentTimeoutRoutine @ 0x14034C3C0 (PopFxResidentTimeoutRoutine.c)
 *     PoFxAddComponentRelation @ 0x140587670 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140588110 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140588500 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentRelationsCleanup @ 0x140589914 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x140589DD8 (PopFxDeviceRelationsCleanup.c)
 * Callees:
 *     PopFxQueueWorkOrder @ 0x14028C1CC (PopFxQueueWorkOrder.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42E0 (RtlGetInterruptTimePrecise.c)
 *     PopFxIdleWorker @ 0x140312B9C (PopFxIdleWorker.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x14031313C (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxArmResidentTimer @ 0x14034C4F4 (PopFxArmResidentTimer.c)
 *     PopFxBugCheck @ 0x140588BE0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  __int64 v3; // r11
  unsigned int v4; // esi
  ULONG_PTR v7; // rbx
  __int64 result; // rax
  __int64 InterruptTimePrecise; // rax
  LARGE_INTEGER v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = BugCheckParameter3;
  v11 = 0LL;
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(v10);
    PpmInterlockedUpdateTimeNoFence(v7 + 144, InterruptTimePrecise, &v11);
  }
  else
  {
    v11 = *(_QWORD *)(v7 + 144);
  }
  if ( (*(_DWORD *)(v7 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v7, *(int *)(v7 + 88), 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
  if ( (_DWORD)result == 0x80000000 )
  {
    if ( !v3 )
      v3 = RtlGetInterruptTimePrecise(v10);
    if ( (*(_DWORD *)(v7 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && v3 - v11 < (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 88), -2147483647, 0x80000000);
      if ( (_DWORD)result != 0x80000000 )
        return result;
      result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
      if ( (_DWORD)result == 1 )
      {
        if ( _InterlockedIncrement(&PopFxResidentComponentCount) == 1 )
          return PopFxArmResidentTimer(0LL);
        return result;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
      PpmInterlockedUpdateTimeNoFence(v7 + 144, v3, 0LL);
    if ( (a3 & 2) != 0 )
      return PopFxQueueWorkOrder(v7 + 24, BugCheckParameter2);
    else
      return PopFxIdleWorker((__int64 *)BugCheckParameter2, v4);
  }
  return result;
}
