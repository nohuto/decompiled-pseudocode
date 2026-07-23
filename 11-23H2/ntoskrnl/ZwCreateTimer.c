/*
 * XREFs of ZwCreateTimer @ 0x14041CA10
 * Callers:
 *     DifZwCreateTimerWrapper @ 0x1405EF570 (DifZwCreateTimerWrapper.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14093BD14 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
