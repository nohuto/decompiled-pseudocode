/*
 * XREFs of CrmStateMonitorNetworkAddressCallback @ 0x180045A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CrmStateMonitorNetworkAddressCallback(
        PVOID CallerContext,
        struct _MIB_IPINTERFACE_ROW *Row,
        MIB_NOTIFICATION_TYPE NotificationType)
{
  CrmStateMonitorNetworkUpdateState(CallerContext, Row, NotificationType);
}
