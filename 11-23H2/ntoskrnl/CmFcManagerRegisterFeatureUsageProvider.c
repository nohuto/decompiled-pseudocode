/*
 * XREFs of CmFcManagerRegisterFeatureUsageProvider @ 0x14067F798
 * Callers:
 *     RtlRegisterFeatureUsageProvider @ 0x14067EE30 (RtlRegisterFeatureUsageProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmFcpManagerAllocateUsageProviderSubscription @ 0x14067FB9C (CmFcpManagerAllocateUsageProviderSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureUsageProvider(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // edi
  _QWORD *UsageProviderSubscription; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbp
  _QWORD *v11; // rax

  v5 = 0;
  UsageProviderSubscription = (_QWORD *)CmFcpManagerAllocateUsageProviderSubscription();
  if ( UsageProviderSubscription )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((__int64)&stru_140C14360, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C14360, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140C14360, v8, (__int64)&stru_140C14360);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    v11 = (_QWORD *)qword_140C144F8;
    if ( *(__int64 **)qword_140C144F8 != &qword_140C144F0 )
      __fastfail(3u);
    *UsageProviderSubscription = &qword_140C144F0;
    UsageProviderSubscription[1] = v11;
    *v11 = UsageProviderSubscription;
    qword_140C144F8 = (__int64)UsageProviderSubscription;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C14360, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C14360);
    KeAbPostRelease((ULONG_PTR)&stru_140C14360);
    KeLeaveCriticalRegion();
    *a4 = UsageProviderSubscription;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
