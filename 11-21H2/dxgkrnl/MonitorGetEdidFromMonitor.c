/*
 * XREFs of MonitorGetEdidFromMonitor @ 0x1C01E65CC
 * Callers:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01E63E0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x1C01E6678 (-GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z.c)
 */

__int64 __fastcall MonitorGetEdidFromMonitor(__int64 a1, unsigned int a2, unsigned int *a3, void *a4)
{
  __int64 v8; // rbx
  unsigned int EdidDescriptorRaw; // edi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0;
  if ( a2 )
    memset(a4, 0, a2);
  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v11, a1);
    v8 = v11;
    if ( v11 )
    {
      EdidDescriptorRaw = DxgMonitor::MonitorDescriptorState::GetEdidDescriptorRaw(
                            *(DxgMonitor::MonitorDescriptorState **)(v11 + 216),
                            a2,
                            a3,
                            (unsigned __int8 *)a4);
      ExReleaseResourceLite((PERESOURCE)(v8 + 24));
      KeLeaveCriticalRegion();
    }
    else
    {
      EdidDescriptorRaw = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    return EdidDescriptorRaw;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
