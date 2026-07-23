/*
 * XREFs of ZwSetSystemTime @ 0x14041DE00
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x1405F79D0 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8168 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8240 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
