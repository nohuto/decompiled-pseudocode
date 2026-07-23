/*
 * XREFs of KeDetachProcess @ 0x140259B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403470F0 @ 0x1403470F0 (sub_1403470F0.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *((_BYTE *)CurrentThread + 586) )
    sub_1403470F0((char *)CurrentThread + 600, 0LL);
}
