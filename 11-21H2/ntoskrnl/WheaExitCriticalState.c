/*
 * XREFs of WheaExitCriticalState @ 0x140643580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaExitCriticalState()
{
  _InterlockedDecrement(&dword_140CE21C0);
}
