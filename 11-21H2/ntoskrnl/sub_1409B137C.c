/*
 * XREFs of sub_1409B137C @ 0x1409B137C
 * Callers:
 *     sub_1409B3490 @ 0x1409B3490 (sub_1409B3490.c)
 *     sub_1409D9A20 @ 0x1409D9A20 (sub_1409D9A20.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 */

bool __fastcall sub_1409B137C(_DWORD *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v5; // ebp
  volatile signed __int64 *v6; // rsi
  signed __int32 v7; // r14d
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  v5 = 8;
  --*((_WORD *)CurrentThread + 242);
  v6 = (volatile signed __int64 *)(BugCheckParameter1 + 270);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(BugCheckParameter1 + 270), 0LL);
  if ( !BugCheckParameter1[380] )
  {
    v5 = 33554440;
    if ( BugCheckParameter1[501] == 259 )
      BugCheckParameter1[501] = a2;
  }
  _m_prefetchw(BugCheckParameter1 + 281);
  v7 = _InterlockedOr(BugCheckParameter1 + 281, v5);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  sub_1402AFC00((ULONG_PTR)v6);
  sub_1402AC800((__int64)CurrentThread);
  result = (v5 & 0x2000000) != 0;
  if ( (v7 & 0x2000000) == 0 && result )
    return sub_140683990((ULONG_PTR)BugCheckParameter1, 1);
  return result;
}
