/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02087D4
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02076C0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGMONITOR@@UEAAPEAXI@Z @ 0x1C002FA60 (--_GDXGMONITOR@@UEAAPEAXI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C006B39C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByRef@$0BA@@@@.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z @ 0x1C0207BF4 (--0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?CreateMonitorDriverInterface@DxgMonitor@@YA?AV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@PEAUHDXGMONITOR__@@PEAVADAPTER_DISPLAY@@IPEAU_DEVICE_OBJECT@@@Z @ 0x1C0207EE4 (-CreateMonitorDriverInterface@DxgMonitor@@YA-AV-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C0207F60 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0208748 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0208A68 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03B5C54 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 *     ?DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z @ 0x1C03B5F30 (-DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5,
        struct DXGMONITOR **a6,
        struct _DXGK_CONNECTION_USB4_INFO *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  __int64 v10; // r15
  char *v11; // rax
  DXGMONITOR *v12; // rax
  struct DxgMonitor::IMonitorComponentParent *v13; // r14
  DXGMONITOR *v14; // rdi
  USB4_HOSTROUTER_MGR *v15; // rcx
  void (__fastcall ***v16)(_QWORD, __int64); // rbx
  __int128 *v17; // rax
  int v18; // eax
  __int64 v19; // rsi
  int MonitorInstance; // eax
  DXGMONITOR *v21; // rbx
  int v22; // esi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // r12
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30; // [rsp+20h] [rbp-E0h]
  char v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  DXGMONITOR *v33; // [rsp+60h] [rbp-A0h] BYREF
  void (__fastcall ***v34)(_QWORD, __int64); // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+74h] [rbp-8Ch] BYREF
  int v37; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  struct DXGMONITOR **v41; // [rsp+98h] [rbp-68h]
  __int128 v42; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING v43; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v44[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v45; // [rsp+D0h] [rbp-30h]
  __int128 v46; // [rsp+E0h] [rbp-20h]
  __int128 v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+100h] [rbp+0h]

  v31 = a4;
  v10 = a2;
  v41 = a6;
  v38 = a8;
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v10 == -1 )
    WdLogSingleEntry0(1LL);
  *a6 = 0LL;
  v11 = (char *)operator new[](0x380uLL, 0x4D677844u, 64LL, a4);
  if ( v11 && (v12 = DXGMONITOR::DXGMONITOR(v11, this), v13 = v12, (v14 = v12) != 0LL) )
  {
    DxgMonitor::CreateMonitorDriverInterface(
      (__int64 *)&v34,
      (__int64)v12,
      *((_QWORD *)this + 3),
      (unsigned int)v10,
      (__int64)a3);
    v16 = v34;
    if ( v34 )
    {
      v17 = 0LL;
      v32 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      if ( a7 )
      {
        v25 = USB4_HOSTROUTER_MGR::DuplicateSymbolicLinkName(v15, *((_DWORD *)a7 + 1), &v43);
        v26 = v25;
        if ( v25 < 0 )
        {
          WdLogSingleEntry1(2LL, v25);
          if ( (unsigned int)dword_1C012F8A8 > 5 && tlgKeywordOn((__int64)&dword_1C012F8A8, 0x400000000002LL) )
          {
            v37 = v26;
            v39 = (__int64)v38 + 8;
            v35 = *((_DWORD *)a7 + 1);
            v36 = *(_DWORD *)a7;
            LODWORD(v33) = 1;
            v40 = 16779264LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v27,
              byte_1C009A785,
              v28,
              v29,
              (__int64)&v40,
              (__int64)&v33,
              (__int64)&v37,
              (__int64)&v36,
              (__int64)&v35,
              &v39);
          }
          v17 = (__int128 *)v32;
        }
        else
        {
          v17 = &v42;
          v42 = *(_OWORD *)a7;
        }
      }
      LOBYTE(v30) = v31;
      v18 = DXGMONITOR::_InitializeMonitorNoDriver(v13, (__int64 *)&v34, v10, (__int64)a3, v30, a5, 1u, (__int64)v17);
      LODWORD(v19) = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry2(2LL, v10, v18);
      }
      else
      {
        v33 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v10, 0, &v33);
        v21 = v33;
        v22 = MonitorInstance;
        if ( MonitorInstance >= 0 )
        {
          if ( !v33 )
            WdLogSingleEntry0(1LL);
          if ( *((_DWORD *)v21 + 78) == 1 )
            WdLogSingleEntry0(1LL);
          if ( *((_QWORD *)v21 + 40) )
            WdLogSingleEntry0(1LL);
          RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v32, (__int64)v21, 1);
          DXGMONITOR::_SetAttachedPhysicalMonitor(v21, v13);
          if ( v32 )
          {
            ExReleaseResourceLite((PERESOURCE)(v32 + 24));
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          if ( v33 )
            WdLogSingleEntry0(1LL);
          if ( v22 != -1073741275 )
            WdLogSingleEntry0(1LL);
          MONITOR_MGR::_InsertMonitorToList(this, v13);
        }
        v48 = 0;
        v44[0] = &MonitorEventDeferral::`vftable';
        v44[1] = (char *)this + 8;
        v45 = 0LL;
        v46 = 0LL;
        v47 = 0LL;
        RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v32, (__int64)v13, 1);
        v23 = v38;
        v19 = (int)DXGMONITOR::_InitializeMonitorWithDriver(
                     v13,
                     0LL,
                     (struct DxgMonitor::IMonitorDeferredEventSource *)v44,
                     v38);
        if ( v32 )
        {
          ExReleaseResourceLite((PERESOURCE)(v32 + 24));
          KeLeaveCriticalRegion();
        }
        MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v44, v23);
        if ( v21 )
        {
          RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v32, (__int64)v21, 1);
          DXGMONITOR::_SetAttachedPhysicalMonitor(v21, 0LL);
          if ( v32 )
          {
            ExReleaseResourceLite((PERESOURCE)(v32 + 24));
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          MONITOR_MGR::_RemoveMonitorFromList(this, v13);
        }
        if ( (int)v19 < 0 )
        {
          WdLogSingleEntry2(2LL, v10, v19);
        }
        else
        {
          v14 = 0LL;
          LODWORD(v19) = 0;
          *v41 = v13;
        }
        MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v44);
      }
      v16 = v34;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      LODWORD(v19) = -1073741801;
    }
    if ( v16 )
      (**v16)(v16, 1LL);
    if ( v14 )
      DXGMONITOR::`scalar deleting destructor'(v14, 1);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v19) = -1073741801;
  }
  return (unsigned int)v19;
}
