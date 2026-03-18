/*
 * XREFs of ?PowerNotifyingD0EntryToWakeInterrupts@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006F4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C0075A1C (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerNotifyingD0EntryToWakeInterrupts(FxPkgPnp *This)
{
  if ( !This->m_WakeInterruptCount )
    return 821LL;
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventEnteringD0);
  return 873LL;
}
