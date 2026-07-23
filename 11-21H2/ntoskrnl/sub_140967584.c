/*
 * XREFs of sub_140967584 @ 0x140967584
 * Callers:
 *     sub_140967470 @ 0x140967470 (sub_140967470.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1409676FC @ 0x1409676FC (sub_1409676FC.c)
 */

__int64 __fastcall sub_140967584(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // r15
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rsi

  v2 = (signed __int64 *)(a2 + 352);
  ExAcquirePushLockSharedEx(a2 + 352, 0LL);
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v6 = 0LL;
    goto LABEL_14;
  }
  v5 = (volatile signed __int64 *)(a2 + 136);
  ExAcquirePushLockExclusiveEx(a2 + 136, 0LL);
  v6 = sub_1409676FC(a1, a2 + 144);
  if ( v6 )
    goto LABEL_3;
  v6 = sub_1409676FC(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 136);
  sub_1402AFC00(a2 + 136);
  if ( !v6 )
  {
    ExAcquirePushLockExclusiveEx(a2 + 176, 0LL);
    v6 = sub_1409676FC(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 176);
    sub_1402AFC00(a2 + 176);
    if ( !v6 )
    {
      v5 = (volatile signed __int64 *)(a2 + 200);
      ExAcquirePushLockExclusiveEx(a2 + 200, 0LL);
      v6 = sub_1409676FC(a1, a2 + 208);
LABEL_3:
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      sub_1402AFC00((ULONG_PTR)v5);
    }
  }
LABEL_14:
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  sub_1402AFC00((ULONG_PTR)v2);
  return v6;
}
