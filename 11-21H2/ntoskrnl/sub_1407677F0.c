/*
 * XREFs of sub_1407677F0 @ 0x1407677F0
 * Callers:
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN sub_1407677F0()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  return ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
}
