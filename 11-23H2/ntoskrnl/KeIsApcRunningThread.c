/*
 * XREFs of KeIsApcRunningThread @ 0x1405736E0
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x140AD55A0 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
