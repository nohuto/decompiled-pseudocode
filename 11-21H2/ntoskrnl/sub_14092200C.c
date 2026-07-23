/*
 * XREFs of sub_14092200C @ 0x14092200C
 * Callers:
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14020AED0 (RtlAreBitsClear.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

bool __fastcall sub_14092200C(__int64 a1, int a2, ULONG a3)
{
  volatile signed __int64 *v6; // rbx
  BOOLEAN v7; // di

  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 || a2 < 0 )
    return 1;
  v6 = (volatile signed __int64 *)(a1 + 80);
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v7 = RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), (unsigned int)a2 >> 9, a3);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  sub_1402AFC00((ULONG_PTR)v6);
  return v7 == 0;
}
