/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x140232600
 * Callers:
 *     sub_1406FE8F4 @ 0x1406FE8F4 (sub_1406FE8F4.c)
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return (*((_BYTE *)KeGetCurrentThread() + 1384) & 0x40) != 0;
}
