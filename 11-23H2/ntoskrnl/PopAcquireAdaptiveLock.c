/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1407EBE9C
 * Callers:
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtSetThreadExecutionState @ 0x1407A8D20 (NtSetThreadExecutionState.c)
 *     PopSessionConnectionChange @ 0x1407EB984 (PopSessionConnectionChange.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopUpdateSystemIdleContext @ 0x140824978 (PopUpdateSystemIdleContext.c)
 *     PopAdaptivePowerSettingCallback @ 0x140824C50 (PopAdaptivePowerSettingCallback.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140878980 (PopIsLockConsoleTimeoutActive.c)
 *     PopSetDisplayStatus @ 0x140885168 (PopSetDisplayStatus.c)
 *     PopSystemIdleEventHandler @ 0x140885510 (PopSystemIdleEventHandler.c)
 *     PopActiveLockScreenPowerRequest @ 0x14099B6F0 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099B8C4 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14099B998 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14099BA20 (PopAdaptiveWnfCallback.c)
 *     PopUserPresentOverride @ 0x14099BB50 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x140246810 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  int v4; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]

  v7 = 0LL;
  v6 = 0LL;
  if ( !a1 )
  {
    v4 = PoBlockConsoleSwitch((__int64)&v6);
    Interval.QuadPart = -100000LL;
    while ( v4 != dword_140C39CF8 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = KeGetCurrentThread();
  PopAdpmLockThread = (__int64)result;
  PopAdaptiveContext = a1 == 0;
  return result;
}
