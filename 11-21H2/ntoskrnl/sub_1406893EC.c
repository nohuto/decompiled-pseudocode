/*
 * XREFs of sub_1406893EC @ 0x1406893EC
 * Callers:
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 *     sub_1406800D0 @ 0x1406800D0 (sub_1406800D0.c)
 *     sub_140681670 @ 0x140681670 (sub_140681670.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_1407174E0 @ 0x1407174E0 (sub_1407174E0.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 *     sub_1409194E0 @ 0x1409194E0 (sub_1409194E0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void sub_1406893EC()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C49858, 0LL);
  qword_140D3B258 = (__int64)CurrentThread;
}
