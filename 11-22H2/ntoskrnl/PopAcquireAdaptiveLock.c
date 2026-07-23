/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1407EC41C
 * Callers:
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtSetThreadExecutionState @ 0x1407A92D0 (NtSetThreadExecutionState.c)
 *     PopSessionConnectionChange @ 0x1407EBF04 (PopSessionConnectionChange.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PopUpdateSystemIdleContext @ 0x1408258D8 (PopUpdateSystemIdleContext.c)
 *     PopAdaptivePowerSettingCallback @ 0x140825BB0 (PopAdaptivePowerSettingCallback.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140878E50 (PopIsLockConsoleTimeoutActive.c)
 *     PopSetDisplayStatus @ 0x140885638 (PopSetDisplayStatus.c)
 *     PopSystemIdleEventHandler @ 0x1408859E0 (PopSystemIdleEventHandler.c)
 *     PopActiveLockScreenPowerRequest @ 0x14099B7A0 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099B974 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14099BA48 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14099BAD0 (PopAdaptiveWnfCallback.c)
 *     PopUserPresentOverride @ 0x14099BC00 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  ULONG v4; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]

  v7 = 0LL;
  v6 = 0LL;
  if ( !a1 )
  {
    v4 = PoBlockConsoleSwitch((__int64)&v6);
    Interval.QuadPart = -100000LL;
    while ( v4 != dword_140C39CD8 )
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
