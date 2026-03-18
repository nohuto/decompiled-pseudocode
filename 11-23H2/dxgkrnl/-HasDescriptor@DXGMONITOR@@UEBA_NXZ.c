/*
 * XREFs of ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x1C03C9070
 * Callers:
 *     MonitorSetSDRWhiteLevelOverride @ 0x1C03C51F0 (MonitorSetSDRWhiteLevelOverride.c)
 * Callees:
 *     ?GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ @ 0x1C020E75C (-GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ.c)
 */

bool __fastcall DXGMONITOR::HasDescriptor(DxgMonitor::MonitorDescriptorState **this)
{
  return (unsigned int)DxgMonitor::MonitorDescriptorState::GetNumMonitorDescriptors(this[27]) != 0;
}
