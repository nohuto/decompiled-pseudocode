/*
 * XREFs of WheaEnterCriticalState @ 0x1406105A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaEnterCriticalState()
{
  _InterlockedIncrement(&WheapCriticalStateRefCount);
}
