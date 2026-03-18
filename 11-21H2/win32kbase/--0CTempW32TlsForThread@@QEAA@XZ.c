/*
 * XREFs of ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8
 * Callers:
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00456F8 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     W32kEtwEnableCallback @ 0x1C00B53AC (W32kEtwEnableCallback.c)
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5660 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5C20 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     Win32kBaseVideoPortCallout @ 0x1C00D4DB0 (Win32kBaseVideoPortCallout.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C014C410 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01AA4F8 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     GetData @ 0x1C0029E80 (GetData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CTempW32TlsForThread *__fastcall CTempW32TlsForThread::CTempW32TlsForThread(CTempW32TlsForThread *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // al
  int v6; // eax

  *(_DWORD *)this = 0;
  if ( PsGetCurrentThreadWin32Thread() )
  {
    if ( !GetData() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v5 = 1;
  }
  else
  {
    v5 = GetData() != 0;
  }
  *((_BYTE *)this + 4) = v5;
  if ( v5 )
    v6 = -1073740528;
  else
    v6 = PsTlsSetValue(*((unsigned int *)gpxsGlobals + 12), this);
  *((_DWORD *)this + 2) = v6;
  if ( v6 && v6 != -1073740528 && v6 != -1073741801 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  return this;
}
