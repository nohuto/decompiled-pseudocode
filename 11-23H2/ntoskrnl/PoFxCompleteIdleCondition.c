/*
 * XREFs of PoFxCompleteIdleCondition @ 0x1403574A0
 * Callers:
 *     HalpTimerPowerComponentIdleCallback @ 0x1403B6490 (HalpTimerPowerComponentIdleCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x14051ADE0 (HalpInterruptPowerComponentIdleCallback.c)
 *     DifPoFxCompleteIdleConditionWrapper @ 0x1405E98D0 (DifPoFxCompleteIdleConditionWrapper.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140312D84 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x140312F48 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
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
