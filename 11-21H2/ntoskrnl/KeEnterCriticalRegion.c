/*
 * XREFs of KeEnterCriticalRegion @ 0x1403468F0
 * Callers:
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
}
