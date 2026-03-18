/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x14085AFF8
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x140996C10 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140B52018 (PopInitializePowerButtonHold.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     PopQueryPowerButtonConfiguration @ 0x1403ACCE4 (PopQueryPowerButtonConfiguration.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14041CAC0 (ZwNotifyChangeKey.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle, char a2, _BYTE *a3)
{
  char v3; // bl
  struct _KTHREAD *CurrentThread; // rax
  char v7; // si
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  IoStatusBlock = 0LL;
  if ( !a2
    || ZwNotifyChangeKey(
         KeyHandle,
         0LL,
         PopPowerButtonBugcheckWatchWorkItem,
         (PVOID)1,
         &IoStatusBlock,
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
  {
    v3 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  PopQueryPowerButtonConfiguration(KeyHandle, a3);
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(KeyHandle);
  return result;
}
