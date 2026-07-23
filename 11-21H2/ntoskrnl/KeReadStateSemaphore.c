/*
 * XREFs of KeReadStateSemaphore @ 0x140242A20
 * Callers:
 *     sub_1404053F0 @ 0x1404053F0 (sub_1404053F0.c)
 *     sub_1404055F4 @ 0x1404055F4 (sub_1404055F4.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
