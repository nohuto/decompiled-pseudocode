/*
 * XREFs of PopIdleInitAoAcDozeS4Timer @ 0x14080AB70
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14036F798 (KeInitializeIRTimer.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7250 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS PopIdleInitAoAcDozeS4Timer()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF

  PopIdleAoAcDozeS4Lock = 0LL;
  v1 = 131080;
  KeInitializeIRTimer(
    (unsigned __int64)&PopIdleAoAcDozeS4Timer,
    (__int64)PopIdleAoAcDozeS4TimerCallback,
    0LL,
    (unsigned __int8 *)&v1,
    2);
  PopIdleAoAcDozeS4WorkItem.Parameter = 0LL;
  PopIdleAoAcDozeS4WorkItem.List.Flink = 0LL;
  PopIdleAoAcDozeS4WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopIdleAoAcDozeToS4;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)PopIdleGlobalUserPresenceCallback,
           0LL,
           0LL);
}
