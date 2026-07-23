/*
 * XREFs of PspSetProcessTimerDelayForWin32 @ 0x1405A4F64
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x1405A4718 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForWin32(__int64 a1)
{
  signed __int64 *v1; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]
  int SessionId; // [rsp+40h] [rbp+8h] BYREF

  v1 = (signed __int64 *)(a1 + 1080);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( *(_QWORD *)(a1 + 1288) )
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    v4 = *(_QWORD *)(a1 + 2416);
    SessionId = MmGetSessionIdEx(a1);
    v5 = a1;
    v6 = v4 & 0x3FFFFFFF;
    v7 = (v4 >> 30) & 0x3FFFFFFF;
    return PsInvokeWin32Callout(41LL, &v5, 1LL, &SessionId);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0LL;
  }
}
