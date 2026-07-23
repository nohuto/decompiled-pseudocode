/*
 * XREFs of KeUpdateDpcWatchdogConfiguration @ 0x14056B670
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KeGenericProcessorCallback @ 0x140305DC4 (KeGenericProcessorCallback.c)
 *     KiCreateDpcLimitsProcessorConfiguration @ 0x140383B20 (KiCreateDpcLimitsProcessorConfiguration.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x14056BAA8 (KiValidateDpcWatchdogConfiguration.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x14056BC94 (KiApplyDpcVerificationScaleSettings.c)
 */

__int64 __fastcall KeUpdateDpcWatchdogConfiguration(void *Src, size_t Size)
{
  unsigned int v2; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  int v9; // r14d
  unsigned int v10; // edi
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v14; // r11
  int v15; // eax
  bool v16; // zf
  _OWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(v18, 0, sizeof(v18));
  v2 = Size;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiDpcWatchdogConfigurationLock, 0LL);
  v5 = KiValidateDpcWatchdogConfiguration(Src, v2);
  if ( v5 >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v8 = 4;
      if ( CurrentIrql != 2 )
        v8 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v8;
    }
    v9 = KeDpcWatchdogProfileBufferSizeBytes;
    v10 = KeDpcWatchdogProfileBufferSizeBytes;
    if ( !KeDpcWatchdogProfileBufferSizeBytes
      && (KeDpcWatchdogProfileSingleDpcThresholdMs || KeDpcWatchdogProfileCumulativeDpcThresholdMs) )
    {
      v10 = 266240;
    }
    KeDpcWatchdogProfileBufferSizeBytes = v10;
    dword_140D1D34C = v10 >> 3;
    KiApplyDpcVerificationScaleSettings();
    if ( (_DWORD)KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= v11 && CurrentIrql <= v11 && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    KiCreateDpcLimitsProcessorConfiguration((__int64)v18, v9, v10);
    KeGenericProcessorCallback(
      KeActiveProcessors,
      (void (__fastcall *)(struct _KPRCB *, __int64))KiUpdateProcessorDpcWatchdogConfiguration,
      (__int64)v18,
      2);
    v5 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock);
  KeAbPostRelease((ULONG_PTR)&KiDpcWatchdogConfigurationLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
