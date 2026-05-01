/*
 * XREFs of CrmStateMonitorNetworkAddressCallback @ 0x180055080
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
