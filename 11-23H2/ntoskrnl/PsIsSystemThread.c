/*
 * XREFs of PsIsSystemThread @ 0x140353970
 * Callers:
 *     IopAllocRealFileObject @ 0x14072F500 (IopAllocRealFileObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
