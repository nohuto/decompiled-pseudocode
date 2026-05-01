/*
 * XREFs of s_HandleConnectIfNoCurrentMonitorExists @ 0x1805030A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall s_HandleConnectIfNoCurrentMonitorExists(
        ImmersiveMonitorHelper *a1,
        struct IImmersiveMonitor *a2,
        char a3)
{
  return ImmersiveMonitorHelper::HandleConnectIfNoCurrentMonitorExists(a1, a2, a3);
}
