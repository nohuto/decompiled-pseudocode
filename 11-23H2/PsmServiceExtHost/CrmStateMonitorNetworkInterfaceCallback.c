/*
 * XREFs of CrmStateMonitorNetworkInterfaceCallback @ 0x180055090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CrmStateMonitorNetworkInterfaceCallback(
        void **CallerContext,
        PMIB_IPINTERFACE_ROW Row,
        MIB_NOTIFICATION_TYPE NotificationType)
{
  CrmStateMonitorNetworkUpdateState(CallerContext);
}
