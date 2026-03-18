/*
 * XREFs of PsIsWin32KFilterEnabled @ 0x14035CA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterEnabled()
{
  return ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 0x4000) != 0;
}
