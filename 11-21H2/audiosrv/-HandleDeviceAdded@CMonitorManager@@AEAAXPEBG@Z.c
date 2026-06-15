/*
 * XREFs of ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x18011BBAC
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18011DF40 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800518C8 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011A114 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18011BED8 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180121490 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CMonitorManager::HandleDeviceAdded(CMonitorManager *this, const unsigned __int16 *a2)
{
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  unsigned int i; // r15d
  void *v6; // rcx
  bool IsCaptureMonitorEnabled; // al
  LPVOID v8; // rbx
  int v9; // eax
  int v10; // eax
  struct IMMDevice *v11; // [rsp+30h] [rbp-20h] BYREF
  struct IMMDevice *v12; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  int v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+98h] [rbp+48h] BYREF

  v11 = 0LL;
  v13 = 0LL;
  CMonitorManager::HandleDeviceArrivalForExistingMonitors(this, a2);
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v11);
  if ( MonitorForCaptureDeviceIfAppropriate < 0
    || (MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v11->lpVtbl->QueryInterface)(
                                                 v11,
                                                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                                 &v13),
        MonitorForCaptureDeviceIfAppropriate < 0)
    || (MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(
                                                 v13,
                                                 &v16),
        MonitorForCaptureDeviceIfAppropriate < 0) )
  {
LABEL_6:
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x51u,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        MonitorForCaptureDeviceIfAppropriate);
    }
    goto LABEL_10;
  }
  if ( v16 == 1 )
  {
    MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v11);
    if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
      goto LABEL_10;
    goto LABEL_6;
  }
  v17 = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 8) + 24LL))(
                                           *((_QWORD *)this + 8),
                                           1LL,
                                           1LL,
                                           &v17);
  if ( MonitorForCaptureDeviceIfAppropriate < 0
    || (MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(
                                                 v17,
                                                 &v15),
        MonitorForCaptureDeviceIfAppropriate < 0) )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    goto LABEL_6;
  }
  for ( i = 0; i < v15; ++i )
  {
    v12 = 0LL;
    pv = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v17 + 32LL))(v17, i, &v12) >= 0 )
    {
      IsCaptureMonitorEnabled = CMonitor::IsCaptureMonitorEnabled(v12, (unsigned __int16 **)&pv, 0LL);
      v8 = pv;
      if ( IsCaptureMonitorEnabled && !(unsigned int)_o__wcsicmp(pv, a2) )
      {
        v9 = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v12);
        if ( v9 < 0
          && WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x4Fu,
            (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
            v9);
        }
      }
      v6 = v8;
    }
    else
    {
      v6 = 0LL;
    }
    CoTaskMemFree(v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  }
  pv = 0LL;
  if ( CMonitorManager::IsRenderMirrorEnabled(this, v11, (unsigned __int16 **)&pv) )
  {
    v10 = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v11);
    if ( v10 < 0
      && WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x50u,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v10);
    }
  }
  CoTaskMemFree(pv);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
LABEL_10:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
}
