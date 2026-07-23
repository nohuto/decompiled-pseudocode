/*
 * XREFs of sub_140A697F0 @ 0x140A697F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140A69870 @ 0x140A69870 (sub_140A69870.c)
 */

__int64 sub_140A697F0()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // edi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2AF50, 0LL);
  v1 = sub_140A69870();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2AF50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2AF50);
  sub_1402AFC00((ULONG_PTR)&qword_140C2AF50);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v1;
}
