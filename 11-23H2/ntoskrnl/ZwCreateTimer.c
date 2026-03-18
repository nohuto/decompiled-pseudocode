/*
 * XREFs of ZwCreateTimer @ 0x14041C680
 * Callers:
 *     DifZwCreateTimerWrapper @ 0x1405EF000 (DifZwCreateTimerWrapper.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14093BB14 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, *(_QWORD *)&DesiredAccess);
}
