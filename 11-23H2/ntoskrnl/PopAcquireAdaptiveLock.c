/*
 * XREFs of PopAcquireAdaptiveLock @ 0x1407EC16C
 * Callers:
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     NtSetThreadExecutionState @ 0x1407A8F10 (NtSetThreadExecutionState.c)
 *     PopSessionConnectionChange @ 0x1407EBC54 (PopSessionConnectionChange.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PopUpdateSystemIdleContext @ 0x140824C78 (PopUpdateSystemIdleContext.c)
 *     PopAdaptivePowerSettingCallback @ 0x140824F50 (PopAdaptivePowerSettingCallback.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140878BC0 (PopIsLockConsoleTimeoutActive.c)
 *     PopSetDisplayStatus @ 0x1408853A8 (PopSetDisplayStatus.c)
 *     PopSystemIdleEventHandler @ 0x140885750 (PopSystemIdleEventHandler.c)
 *     PopActiveLockScreenPowerRequest @ 0x14099B8F0 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099BAC4 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14099BB98 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x14099BC20 (PopAdaptiveWnfCallback.c)
 *     PopUserPresentOverride @ 0x14099BD50 (PopUserPresentOverride.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
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
    while ( v4 != dword_140C39C58 )
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
