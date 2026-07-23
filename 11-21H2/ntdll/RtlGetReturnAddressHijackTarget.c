/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x18010A1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG_PTR RtlGetReturnAddressHijackTarget(void)
{
  return (ULONG_PTR)RtlRaiseExceptionForReturnAddressHijack;
}
