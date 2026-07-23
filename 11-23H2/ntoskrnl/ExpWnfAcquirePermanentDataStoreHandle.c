/*
 * XREFs of ExpWnfAcquirePermanentDataStoreHandle @ 0x1407E2B50
 * Callers:
 *     ExpWnfWriteStateData @ 0x140714220 (ExpWnfWriteStateData.c)
 *     ExpWnfPopulateStateData @ 0x140714A4C (ExpWnfPopulateStateData.c)
 *     ExpWnfDeletePermanentStateData @ 0x140A0757C (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407E2C28 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 */

__int64 __fastcall ExpWnfAcquirePermanentDataStoreHandle(__int64 a1, _QWORD *a2)
{
  signed __int64 *v2; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v2 = (signed __int64 *)(a1 + 8);
  while ( 1 )
  {
    v5 = KeAbPreAcquire((__int64)v2, 0LL);
    if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v2, 0LL, v5, (__int64)v2);
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 )
    {
      *a2 = v6;
      return 0LL;
    }
    if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    if ( *(_DWORD *)(a1 + 40) != 2 )
      break;
    Handle = 0LL;
    result = ExpWnfGetPermanentPerUserDataStoreHandle((PSID)(a1 + 48), &Handle);
    if ( (int)result < 0 )
      return result;
    v8 = KeAbPreAcquire((__int64)v2, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v8, (__int64)v2);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)(a1 + 16) = Handle;
      _InterlockedCompareExchange64(v2, 17LL, 1LL);
      *a2 = *(_QWORD *)(a1 + 16);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    ZwClose(Handle);
  }
  return 3221225524LL;
}
