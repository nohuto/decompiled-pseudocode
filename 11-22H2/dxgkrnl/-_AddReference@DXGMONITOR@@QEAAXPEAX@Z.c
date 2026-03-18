/*
 * XREFs of ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C019E244
 * Callers:
 *     MonitorGetMonitorHandle @ 0x1C0183734 (MonitorGetMonitorHandle.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C019BA70 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01A0250 (DxgkGetMonitorInternalInfo.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_AddReference(DXGMONITOR *this, void *a2)
{
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)((char *)this + 280), a2, File, 1u, 0x20u) < 0 )
    WdLogSingleEntry0(1LL);
}
