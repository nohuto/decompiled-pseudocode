/*
 * XREFs of PopFxCompleteComponentActivation @ 0x14031318C
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1403126B0 (PopFxActivateComponentWorker.c)
 *     PopFxProcessWork @ 0x1403128C4 (PopFxProcessWork.c)
 *     PopFxIdleWorkerTail @ 0x140312F48 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PopFxIdleComponent @ 0x140313250 (PopFxIdleComponent.c)
 *     PopFxActivateComponentDependents @ 0x1403149EC (PopFxActivateComponentDependents.c)
 */

LONG __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  LONG result; // eax

  _InterlockedOr((volatile signed __int32 *)(a2 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
  if ( a3 )
    PopFxActivateComponentDependents(a2);
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
  return result;
}
