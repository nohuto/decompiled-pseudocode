/*
 * XREFs of ZwSetSystemTime @ 0x14041E4C0
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x1405F7940 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F80B8 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8190 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemTime(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
