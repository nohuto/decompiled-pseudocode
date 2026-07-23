/*
 * XREFs of sub_14080FCD0 @ 0x14080FCD0
 * Callers:
 *     sub_14080FBCC @ 0x14080FBCC (sub_14080FBCC.c)
 *     sub_140919308 @ 0x140919308 (sub_140919308.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void sub_14080FCD0()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C49220, 0LL);
}
