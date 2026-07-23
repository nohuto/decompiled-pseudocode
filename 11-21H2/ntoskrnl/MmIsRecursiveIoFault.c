/*
 * XREFs of MmIsRecursiveIoFault @ 0x140592320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN MmIsRecursiveIoFault(void)
{
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  result = 0;
  if ( *((_BYTE *)CurrentThread + 1389) || *((_BYTE *)CurrentThread + 1388) == 1 )
    return 1;
  return result;
}
