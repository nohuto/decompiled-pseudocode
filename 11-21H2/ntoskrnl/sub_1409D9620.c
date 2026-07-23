/*
 * XREFs of sub_1409D9620 @ 0x1409D9620
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14062AAC8 @ 0x14062AAC8 (sub_14062AAC8.c)
 */

__int64 __fastcall sub_1409D9620(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax

  v4 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2288LL);
  if ( a2 == -1 || (a1 & 0xFFF) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(v4 + 88, 0LL);
    v5 = sub_14062AAC8((PEX_SPIN_LOCK)v4, a1 >> 12, a2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 88), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 + 88);
    sub_1402AFC00(v4 + 88);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return v5;
}
