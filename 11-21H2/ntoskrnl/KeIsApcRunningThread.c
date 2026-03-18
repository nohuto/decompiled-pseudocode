/*
 * XREFs of KeIsApcRunningThread @ 0x140570740
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x140A95F10 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
