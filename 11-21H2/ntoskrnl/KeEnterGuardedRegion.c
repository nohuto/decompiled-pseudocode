/*
 * XREFs of KeEnterGuardedRegion @ 0x1402201E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeEnterGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
}
