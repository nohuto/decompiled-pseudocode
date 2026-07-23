/*
 * XREFs of sub_140693128 @ 0x140693128
 * Callers:
 *     sub_140692DB8 @ 0x140692DB8 (sub_140692DB8.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     sub_140735E30 @ 0x140735E30 (sub_140735E30.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 sub_140693128()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  return ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C497D8, 0LL);
}
