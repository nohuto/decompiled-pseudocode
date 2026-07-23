/*
 * XREFs of sub_1407FDB8C @ 0x1407FDB8C
 * Callers:
 *     sub_1407FDA6C @ 0x1407FDA6C (sub_1407FDA6C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406E7E90 @ 0x1406E7E90 (sub_1406E7E90.c)
 */

char sub_1407FDB8C()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
  qword_140C547C0 = (__int64)KeGetCurrentThread();
  if ( qword_140C5B100 )
    sub_1406E7E90((int **)qword_140C5B100);
  qword_140C547C0 = 0LL;
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C15D90);
  sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
