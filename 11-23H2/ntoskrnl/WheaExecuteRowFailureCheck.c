/*
 * XREFs of WheaExecuteRowFailureCheck @ 0x140A08BCC
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x140519D90 (HalpMemoryErrorDeferredHandler.c)
 *     KiAltContextProcessMcheckAltReturn @ 0x140580630 (KiAltContextProcessMcheckAltReturn.c)
 *     KiMcheckAlternateReturn @ 0x140580880 (KiMcheckAlternateReturn.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     WheapExecuteRowFailureCheck @ 0x140A08C70 (WheapExecuteRowFailureCheck.c)
 */

char __fastcall WheaExecuteRowFailureCheck(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rbx
  char v12; // bl

  v6 = KeAbPreAcquire((__int64)&WheapPfaLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v11 = v6;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v6, (__int64)&WheapPfaLock);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  LOBYTE(v9) = a4;
  LOBYTE(v8) = 1;
  v12 = WheapExecuteRowFailureCheck(a1, v7, v8, v9);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
  KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
  return v12;
}
