/*
 * XREFs of PopFxActivateComponentWorker @ 0x1403126B0
 * Callers:
 *     PopFxActivateComponent @ 0x140287590 (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x140312F48 (PopFxIdleWorkerTail.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x140312734 (PopFxAddRefDevice.c)
 *     PopFxActivateComponentDependencies @ 0x140312804 (PopFxActivateComponentDependencies.c)
 *     PopFxProcessWork @ 0x1403128C4 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x14031318C (PopFxCompleteComponentActivation.c)
 *     PopPluginComponentActive @ 0x140313A1C (PopPluginComponentActive.c)
 */

__int64 __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // r8

  PopFxAddRefDevice(a1);
  LOBYTE(v8) = a3;
  result = PopFxActivateComponentDependencies(a2, v8);
  if ( a3 )
    return PopFxCompleteComponentActivation(a1);
  if ( (_BYTE)result )
  {
    LOBYTE(v10) = 1;
    result = PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v10, a4);
    if ( (_BYTE)result == 1 )
      return PopFxProcessWork(0LL);
  }
  return result;
}
