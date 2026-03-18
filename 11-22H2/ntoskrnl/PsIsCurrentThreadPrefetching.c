/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1403471B0
 * Callers:
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiShareExistingControlArea @ 0x140723D4C (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
