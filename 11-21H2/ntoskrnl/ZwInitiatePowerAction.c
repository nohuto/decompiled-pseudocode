/*
 * XREFs of ZwInitiatePowerAction @ 0x14041D840
 * Callers:
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE LightestSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&SystemAction, *(_QWORD *)&LightestSystemState);
}
