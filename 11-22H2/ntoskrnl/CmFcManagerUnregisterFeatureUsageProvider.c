/*
 * XREFs of CmFcManagerUnregisterFeatureUsageProvider @ 0x14067F890
 * Callers:
 *     RtlUnregisterFeatureUsageProvider @ 0x14067EE50 (RtlUnregisterFeatureUsageProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     CmFcManagerFlushFeatureUsage @ 0x14067F5CC (CmFcManagerFlushFeatureUsage.c)
 *     CmpWorkItemRundown @ 0x140A11C80 (CmpWorkItemRundown.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureUsageProvider(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rsi
  __int64 v7; // rdx
  int **v8; // rax

  CmFcManagerFlushFeatureUsage(a1, 1, (__int64)a2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&stru_140C143A0, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C143A0, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140C143A0, v4, (__int64)&stru_140C143A0);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = *(_QWORD *)a2;
  if ( *(int **)(*(_QWORD *)a2 + 8LL) != a2 || (v8 = (int **)*((_QWORD *)a2 + 1), *v8 != a2) )
    __fastfail(3u);
  *v8 = (int *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C143A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C143A0);
  KeAbPostRelease((ULONG_PTR)&stru_140C143A0);
  KeLeaveCriticalRegion();
  CmpWorkItemRundown(a2 + 4);
  if ( a2 < dword_140C143A8 || a2 >= &dword_140C14510 )
    ExFreePoolWithTag(a2, 0);
}
