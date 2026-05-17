/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x18010A1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (*RtlGetReturnAddressHijackTarget())()
{
  return RtlRaiseExceptionForReturnAddressHijack;
}
