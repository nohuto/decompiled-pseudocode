/*
 * XREFs of PoFxCompleteIdleCondition @ 0x140356D00
 * Callers:
 *     HalpTimerPowerComponentIdleCallback @ 0x1403B5C20 (HalpTimerPowerComponentIdleCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x14051A950 (HalpInterruptPowerComponentIdleCallback.c)
 *     DifPoFxCompleteIdleConditionWrapper @ 0x1405E93F0 (DifPoFxCompleteIdleConditionWrapper.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140312914 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x140312AD8 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x140588C70 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // edi
  __int64 result; // rax

  v3 = BugCheckParameter3;
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter2[104]
                                                                                     + 8LL
                                                                                     * (unsigned int)BugCheckParameter3)
                                                                         + 136LL));
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
      PopFxBugCheck(0x613uLL, (ULONG_PTR)BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  }
  else
  {
    PopFxAddLogEntry(BugCheckParameter2[6], BugCheckParameter3, 13, 1LL);
    return PopFxIdleWorkerTail(BugCheckParameter2, v3, 0LL);
  }
  return result;
}
