/*
 * XREFs of sub_140A6ACD4 @ 0x140A6ACD4
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 * Callees:
 *     PsGetThreadId @ 0x140230790 (PsGetThreadId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall sub_140A6ACD4(ULONG_PTR BugCheckParameter2, int a2)
{
  HANDLE v2; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  HANDLE ThreadId; // rax
  __int64 v6; // rdi
  struct _KTHREAD *v7; // rax

  v2 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadId = PsGetThreadId(CurrentThread);
    v6 = *((_QWORD *)CurrentThread + 144);
    v2 = ThreadId;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = KeGetCurrentThread();
  --*((_WORD *)v7 + 242);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 72) = v2;
  *(_QWORD *)(BugCheckParameter2 + 80) = v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  sub_1402AFC00(BugCheckParameter2);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
