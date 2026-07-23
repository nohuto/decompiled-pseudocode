/*
 * XREFs of CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140A2728C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1409BD5A0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureConfigurationChangeNotification(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rbp
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&stru_140C14250, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C14250, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140C14250, v4, (__int64)&stru_140C14250);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v8 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v8 != a2) )
    __fastfail(3u);
  *v8 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C14250, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C14250);
  KeAbPostRelease((ULONG_PTR)&stru_140C14250);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExWaitForRundownProtectionRelease(a2 + 6);
  _InterlockedExchange64((volatile __int64 *)&a2[6], 1LL);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140C14268 || a2 >= (struct _EX_RUNDOWN_REF *)qword_140C14388 )
    ExFreePoolWithTag(a2, 0);
}
