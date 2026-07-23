/*
 * XREFs of sub_140922C5C @ 0x140922C5C
 * Callers:
 *     sub_140911208 @ 0x140911208 (sub_140911208.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140832E84 @ 0x140832E84 (sub_140832E84.c)
 */

char sub_140922C5C()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49588, 0LL);
  sub_140832E84((__int64)qword_140C49440, 1);
  sub_140832E84((__int64)qword_140C49440, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49588, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49588);
  sub_1402AFC00((ULONG_PTR)&stru_140C49588);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
