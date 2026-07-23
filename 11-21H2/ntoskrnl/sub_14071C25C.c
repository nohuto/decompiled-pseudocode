/*
 * XREFs of sub_14071C25C @ 0x14071C25C
 * Callers:
 *     sub_1402A2204 @ 0x1402A2204 (sub_1402A2204.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 */

void sub_14071C25C()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
}
