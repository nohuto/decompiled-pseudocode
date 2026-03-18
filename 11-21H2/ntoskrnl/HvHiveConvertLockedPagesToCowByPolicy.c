/*
 * XREFs of HvHiveConvertLockedPagesToCowByPolicy @ 0x14068E564
 * Callers:
 *     CmpDoLocalizeNextHive @ 0x14068E4E0 (CmpDoLocalizeNextHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x14068F4AC (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 */

__int64 __fastcall HvHiveConvertLockedPagesToCowByPolicy(__int64 a1)
{
  __int64 v1; // rsi
  signed __int64 *v5; // rdi
  volatile signed __int64 *v6; // rbx
  int locked; // esi

  v1 = a1 + 224;
  if ( (*(_DWORD *)(a1 + 256) & 4) != 0 )
  {
    v5 = (signed __int64 *)(a1 + 72);
    ExAcquirePushLockSharedEx(a1 + 72, 0LL);
    v6 = (volatile signed __int64 *)(a1 + 80);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
    locked = HvpViewMapConvertLockedPagesToCOWByPolicy(v1);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    if ( locked >= 0 )
      return 0;
    return (unsigned int)locked;
  }
  else
  {
    return 0;
  }
}
