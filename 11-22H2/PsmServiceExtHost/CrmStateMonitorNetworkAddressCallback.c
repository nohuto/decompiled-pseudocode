/*
 * XREFs of CrmStateMonitorNetworkAddressCallback @ 0x1800552C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CrmStateMonitorNetworkAddressCallback(
        void **CallerContext,
        PMIB_UNICASTIPADDRESS_ROW Row,
        MIB_NOTIFICATION_TYPE NotificationType)
{
  CrmStateMonitorNetworkUpdateState(CallerContext);
}
