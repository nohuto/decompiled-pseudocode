/*
 * XREFs of sub_140923720 @ 0x140923720
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140832E84 @ 0x140832E84 (sub_140832E84.c)
 */

char __fastcall sub_140923720(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rsi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v4 = (volatile signed __int64 *)(a2 + 328);
  ExAcquirePushLockExclusiveEx(a2 + 328, 0LL);
  *(_BYTE *)(a2 + 337) = 0;
  sub_140832E84(a2, 1);
  sub_140832E84(a2, 1);
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
