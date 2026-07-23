/*
 * XREFs of WheaEnterCriticalState @ 0x140643530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaEnterCriticalState()
{
  _InterlockedIncrement(&dword_140CE21C0);
}
