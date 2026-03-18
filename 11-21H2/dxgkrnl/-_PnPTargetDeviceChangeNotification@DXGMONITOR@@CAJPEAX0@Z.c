/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C03B5660
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0027E5C (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C020D538 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B55CC (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ @ 0x1C03B6C3C (-HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  NTSTATUS v7; // eax
  struct DXGADAPTER *v9; // rbx
  __int64 v10; // r14
  int v11; // r8d
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  MONITOR_MGR *v15; // r15
  unsigned int v16; // ebx
  struct DXGMONITOR *v17; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct DXGMONITOR *v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26[4]; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  _QWORD v28[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[144]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v28, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v28[1]);
  v28[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v28[3]) = 3;
  LOBYTE(v28[6]) = -1;
  v6 = WdLogNewEntry5_WdTrace(v5, v4);
  *(_QWORD *)(v6 + 24) = Context;
  *(_QWORD *)(v6 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    v27 = 0LL;
    *(_OWORD *)InputBuffer = 0LL;
    *(_OWORD *)v26 = 0LL;
    v7 = DxgkCallDriverIoControl(Context, 0x232407u, InputBuffer, 0x28u, InputBuffer, 0x28u);
    if ( v7 < 0 )
    {
      WdLogSingleEntry2(3LL, Context, v7);
      return 0LL;
    }
    v9 = InputBuffer[0];
    v10 = v26[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, InputBuffer[0], 0LL);
    v12 = v11 + 1;
    v13 = COREADAPTERACCESS::AcquireExclusive((__int64)v29);
    if ( v13 >= 0 )
    {
      v14 = *((_QWORD *)v9 + 349);
      if ( !v14 )
      {
        WdLogSingleEntry0(v12);
        v14 = *((_QWORD *)v9 + 349);
      }
      v15 = *(MONITOR_MGR **)(v14 + 112);
      if ( !v15 )
        WdLogSingleEntry0(v12);
      v23 = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v15, v10, v12, &v23) >= 0 )
      {
        v17 = v23;
        if ( !v23 )
          WdLogSingleEntry0(1LL);
        if ( *((_DWORD *)v17 + 78) != 1 )
          WdLogSingleEntry0(1LL);
        v16 = 0;
        RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v24, (__int64)v17, 1);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
          WdLogSingleEntry0(1LL);
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == *(PDEVICE_OBJECT *)(*((_QWORD *)v17 + 25) + 8LL) )
        {
          v19 = *(_QWORD *)(NotificationStructure + 4);
          v20 = *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v19;
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v19 )
            v20 = *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4 - *(_QWORD *)(NotificationStructure + 12);
          if ( v20 )
          {
            v21 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v19;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v19 )
              v21 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v21 )
            {
              v22 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v19;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v19 )
                v22 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v22 )
              {
                v16 = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DxgMonitor::MonitorPnpState **)v17, 0LL);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v15, 6, v10, 0, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v15, 5, v10, 0, 0LL);
              DxgMonitor::MonitorPnpState::HandleDeviceRemoveCancelled(*((DxgMonitor::MonitorPnpState **)v17 + 25));
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v15, 4, v10, 0, 0LL);
            wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
              (DxgkCompositionObject **)(*((_QWORD *)v17 + 25) + 40LL),
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v10);
        }
        if ( v24 )
        {
          ExReleaseResourceLite((PERESOURCE)(v24 + 24));
          KeLeaveCriticalRegion();
        }
        goto LABEL_39;
      }
      WdLogSingleEntry1(2LL, v10);
    }
    else
    {
      if ( v13 != -1073741130 )
        WdLogSingleEntry0(v12);
      WdLogSingleEntry0(2LL);
    }
    v16 = 0;
LABEL_39:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    return v16;
  }
  return 3221225485LL;
}
