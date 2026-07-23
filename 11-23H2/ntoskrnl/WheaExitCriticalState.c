/*
 * XREFs of WheaExitCriticalState @ 0x140610AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaExitCriticalState()
{
  _InterlockedDecrement(&WheapCriticalStateRefCount);
}
