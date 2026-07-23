/*
 * XREFs of PopFxIdleComponent @ 0x140313250
 * Callers:
 *     PopFxNotifyPostDIrpCompletion @ 0x14028E2C8 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFxCompleteComponentActivation @ 0x14031318C (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x140313210 (PoFxIdleComponent.c)
 *     PopFxDeactivateComponentDependencies @ 0x140313470 (PopFxDeactivateComponentDependencies.c)
 *     PopFxResidentTimeoutRoutine @ 0x14034C560 (PopFxResidentTimeoutRoutine.c)
 *     PoFxAddComponentRelation @ 0x140587B60 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140588600 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405889F0 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentRelationsCleanup @ 0x140589E04 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x14058A2C8 (PopFxDeviceRelationsCleanup.c)
 * Callees:
 *     PopFxQueueWorkOrder @ 0x14028C45C (PopFxQueueWorkOrder.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     PopFxIdleWorker @ 0x140312E2C (PopFxIdleWorker.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1403133CC (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxArmResidentTimer @ 0x14034C694 (PopFxArmResidentTimer.c)
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  LARGE_INTEGER v3; // r11
  unsigned int v4; // esi
  ULONG_PTR v7; // rbx
  __int64 result; // rax
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v3.QuadPart = 0LL;
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
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
      v7 + 144,
      (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
      &v11);
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
    if ( !v3.QuadPart )
      v3 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( (*(_DWORD *)(v7 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && v3.QuadPart - v11 < (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
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
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
        v7 + 144,
        (LARGE_INTEGER)v3.QuadPart,
        0LL);
    if ( (a3 & 2) != 0 )
      return PopFxQueueWorkOrder(v7 + 24, BugCheckParameter2);
    else
      return PopFxIdleWorker((__int64 *)BugCheckParameter2, v4);
  }
  return result;
}
