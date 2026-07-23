/*
 * XREFs of PsGetBaseTrapFrame @ 0x140463CA0
 * Callers:
 *     PsPicoWalkUserStack @ 0x1409B53AC (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x1409B6A00 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1402A68B0 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
