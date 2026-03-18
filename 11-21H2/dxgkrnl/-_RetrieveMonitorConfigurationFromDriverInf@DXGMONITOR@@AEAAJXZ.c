/*
 * XREFs of ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C020C9A8
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01579C0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXG.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B3F4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C020CA58 (-_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C020CB18 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(DXGMONITOR *this)
{
  __int64 v1; // rax
  struct _DEVICE_OBJECT *v3; // rcx
  NTSTATUS MonitorConfigurationFromRegistry; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 25);
  DeviceRegKey = 0LL;
  if ( !*(_BYTE *)(v1 + 16) )
  {
    MonitorConfigurationFromRegistry = -1073741275;
    goto LABEL_7;
  }
  v3 = *(struct _DEVICE_OBJECT **)(v1 + 8);
  if ( !v3 || !*(_BYTE *)(v1 + 16) )
  {
    MonitorConfigurationFromRegistry = -1073741661;
    goto LABEL_9;
  }
  MonitorConfigurationFromRegistry = IoOpenDeviceRegistryKey(v3, 2u, 0x20019u, &DeviceRegKey);
  if ( MonitorConfigurationFromRegistry < 0 )
  {
LABEL_9:
    WdLogSingleEntry1(2LL, MonitorConfigurationFromRegistry);
    goto LABEL_7;
  }
  MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, DeviceRegKey, 1u);
  if ( MonitorConfigurationFromRegistry >= 0 )
    MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(this);
LABEL_7:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&DeviceRegKey);
  return (unsigned int)MonitorConfigurationFromRegistry;
}
