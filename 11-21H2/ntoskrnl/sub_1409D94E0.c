/*
 * XREFs of sub_1409D94E0 @ 0x1409D94E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14062BA64 @ 0x14062BA64 (sub_14062BA64.c)
 *     sub_1409DA6D4 @ 0x1409DA6D4 (sub_1409DA6D4.c)
 */

__int64 __fastcall sub_1409D94E0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  volatile LONG *v8; // rdi
  int v9; // edi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v11; // rsi

  v8 = *(volatile LONG **)(*((_QWORD *)KeGetCurrentThread() + 23) + 2288LL);
  if ( (unsigned int)sub_1409DA6D4(a1, a2, a3, a4) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v8 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v11 = (volatile signed __int64 *)(v8 + 22);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 22), 0LL);
    v9 = sub_14062BA64(v8, a2 >> 12, a1 >> 12, a3, a4);
    if ( v9 >= 0 )
      v9 = 0;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    sub_1402AFC00((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return (unsigned int)v9;
}
