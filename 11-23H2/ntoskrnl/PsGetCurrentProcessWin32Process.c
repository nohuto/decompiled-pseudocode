/*
 * XREFs of PsGetCurrentProcessWin32Process @ 0x140339DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentProcessWin32Process()
{
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[15];
}
