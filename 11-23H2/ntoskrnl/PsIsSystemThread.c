/*
 * XREFs of PsIsSystemThread @ 0x1403537D0
 * Callers:
 *     IopAllocRealFileObject @ 0x14072F300 (IopAllocRealFileObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
