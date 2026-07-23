/*
 * XREFs of PsGetCurrentThread @ 0x1402AC250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PETHREAD PsGetCurrentThread(void)
{
  return KeGetCurrentThread();
}
