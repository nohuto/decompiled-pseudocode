/*
 * XREFs of WheaUnconfigureErrorSource @ 0x140AAB740
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     WheapSetDefaultErrorConfigurationCalls @ 0x14061315C (WheapSetDefaultErrorConfigurationCalls.c)
 */

__int64 __fastcall WheaUnconfigureErrorSource(unsigned int a1)
{
  unsigned __int64 *v1; // rbx
  unsigned int v2; // esi
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdi

  if ( a1 > 0x12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v1 = (unsigned __int64 *)((char *)&WheapSourceConfiguration + 64 * (__int64)(int)a1);
    v2 = -1073741823;
    v3 = KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&WheapConfigTableLock, 0LL, v3, (__int64)&WheapConfigTableLock);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    v4 = KeAbPreAcquire((__int64)v1, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    if ( *((_BYTE *)v1 + 8) )
    {
      *((_BYTE *)v1 + 8) = 0;
      WheapSetDefaultErrorConfigurationCalls(v1);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock);
    KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
  }
  return v2;
}
