/*
 * XREFs of PopEtInternerLock @ 0x1407DB3C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopEtInternerLock(__int64 a1, char a2)
{
  ULONG_PTR v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = PopEtGlobals + 40;
  if ( !a2 )
    return PopAcquireRwLockExclusive(v2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return (struct _KTHREAD *)ExAcquirePushLockSharedEx(v2, 0LL);
}
