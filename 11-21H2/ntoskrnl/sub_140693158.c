/*
 * XREFs of sub_140693158 @ 0x140693158
 * Callers:
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     sub_1407FC920 @ 0x1407FC920 (sub_1407FC920.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 sub_140693158()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  return ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C497E0, 0LL);
}
