/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C020D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memcmp @ 0x1C002CB10 (memcmp.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B3F4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C020D538 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  UNICODE_STRING *v8; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rbx
  int v11; // edi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  __int64 v13; // r15
  __int64 v14; // r12
  int v15; // r8d
  unsigned int v16; // edi
  int v17; // eax
  __int64 v18; // rdi
  MONITOR_MGR *v19; // rdi
  int MonitorInstance; // eax
  struct DXGMONITOR *v21; // rbx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rcx
  unsigned __int8 v28; // [rsp+38h] [rbp-D0h]
  unsigned __int64 *v29; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGMONITOR *v32; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h]
  _QWORD InputBuffer[3]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v36[4]; // [rsp+90h] [rbp-78h]
  __int64 v37; // [rsp+A0h] [rbp-68h]
  _QWORD v38[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-50h]
  __int128 v40; // [rsp+C8h] [rbp-40h]
  __int128 v41; // [rsp+D8h] [rbp-30h]
  int v42; // [rsp+E8h] [rbp-20h]
  _QWORD v43[10]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v44[144]; // [rsp+148h] [rbp+40h] BYREF

  memset(v43, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v43[1]);
  LODWORD(v33[0]) = -1;
  v43[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v43[3]) = 2;
  LOBYTE(v43[6]) = -1;
  v33[1] = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    LOBYTE(v34) = 1;
    LODWORD(v33[0]) = 7061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 7061);
  }
  else
  {
    LOBYTE(v34) = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v33, 7061);
  WdLogNewEntry5_WdTrace(v6, v5);
  if ( !NotificationStructure )
    goto LABEL_25;
  v7 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v7 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v7 )
  {
    WdLogSingleEntry1(2LL, (char *)NotificationStructure + 20);
LABEL_25:
    v11 = -1073741811;
    goto LABEL_26;
  }
  v8 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v8, 0x80000000, &FileObject, &DeviceObject);
  v10 = DeviceObjectPointer;
  v11 = -1073741772;
  if ( DeviceObjectPointer != -1073741772 )
  {
    if ( DeviceObjectPointer < 0 )
    {
      v27 = 2LL;
    }
    else
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      v37 = 0LL;
      *(_OWORD *)&InputBuffer[1] = 0LL;
      *(_OWORD *)v36 = 0LL;
      v10 = (int)DxgkCallDriverIoControl(
                   DeviceObject,
                   0x232407u,
                   &InputBuffer[1],
                   0x28u,
                   &InputBuffer[1],
                   0x28u,
                   v28,
                   v29);
      ObfDereferenceObject(FileObject);
      if ( (int)v10 >= 0 )
      {
        v13 = InputBuffer[1];
        v14 = v36[0];
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, (struct DXGADAPTER *const)InputBuffer[1], 0LL);
        v16 = v15 + 1;
        v17 = COREADAPTERACCESS::AcquireExclusive((__int64)v44);
        LODWORD(v10) = v17;
        if ( v17 < 0 )
        {
          if ( v17 != -1073741130 )
            WdLogSingleEntry0(v16);
          WdLogSingleEntry0(2LL);
          goto LABEL_33;
        }
        v18 = *(_QWORD *)(v13 + 2792);
        if ( !v18 )
        {
          WdLogSingleEntry0(1LL);
          v18 = *(_QWORD *)(v13 + 2792);
        }
        v19 = *(MONITOR_MGR **)(v18 + 112);
        if ( !v19 )
          WdLogSingleEntry0(1LL);
        v42 = 0;
        v32 = 0LL;
        v38[0] = &MonitorEventDeferral::`vftable';
        v39 = 0LL;
        v38[1] = ((unsigned __int64)v19 + 8) & -(__int64)(v19 != 0LL);
        v40 = 0LL;
        v41 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v19, v14, 1, &v32);
        LODWORD(v10) = MonitorInstance;
        if ( MonitorInstance < 0 )
        {
          if ( MonitorInstance == -1073741275 )
          {
            WdLogSingleEntry2(3LL, v14, v19);
            LODWORD(v10) = 0;
          }
          else
          {
            WdLogSingleEntry3(2LL, v14, v19, MonitorInstance);
          }
LABEL_32:
          MonitorEventDeferral::FlushEventsWithContext(
            (MonitorEventDeferral *)v38,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v43);
          MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v38);
LABEL_33:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
          goto LABEL_27;
        }
        v21 = v32;
        if ( !v32 )
          WdLogSingleEntry0(1LL);
        RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(InputBuffer, (__int64)v21, 1);
        if ( *(PDEVICE_OBJECT *)(*((_QWORD *)v21 + 25) + 8LL) == DeviceAttachmentBaseRef )
        {
          v22 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
          if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
            v22 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
          if ( v22 )
          {
            LODWORD(v10) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                         ? 0xC000000D
                         : 0;
LABEL_30:
            if ( InputBuffer[0] )
            {
              ExReleaseResourceLite((PERESOURCE)(InputBuffer[0] + 24LL));
              KeLeaveCriticalRegion();
            }
            goto LABEL_32;
          }
          v23 = DXGMONITOR::_OnMonitorFunctionDriverArrival(
                  v21,
                  v8,
                  (struct DxgMonitor::IMonitorDeferredEventSource *)v38,
                  (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v43);
          MONITOR_MGR::_LogMonitorPresentEvent((__int64)v19, 3, v14, v23, 0LL);
        }
        else
        {
          WdLogSingleEntry1(3LL, v19);
        }
        LODWORD(v10) = 0;
        goto LABEL_30;
      }
      v27 = 3LL;
    }
    WdLogSingleEntry2(v27, v8->Buffer, v10);
    goto LABEL_27;
  }
  WdLogSingleEntry1(7LL, v8->Buffer);
LABEL_26:
  LODWORD(v10) = v11;
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v33);
  if ( (_BYTE)v34 )
  {
    LOBYTE(v24) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v33[0]);
  }
  return (unsigned int)v10;
}
