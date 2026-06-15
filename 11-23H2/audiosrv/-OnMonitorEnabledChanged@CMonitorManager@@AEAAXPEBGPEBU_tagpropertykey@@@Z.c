/*
 * XREFs of ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180004180
 * Callers:
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x18012DD50 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180004778 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18000680C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x180008330 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18003F5A4 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_qS @ 0x1800E3F14 (WPP_SF_qS.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18012EA90 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitorManager::OnMonitorEnabledChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  void *v6; // rbx
  CAudioSessionManager *v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  struct IMMDevice *v10; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  struct CMonitorManager::CaptureMonitor *v14; // [rsp+98h] [rbp+48h] BYREF

  v10 = 0LL;
  v12[0] = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v10);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_38;
  MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD *))v10->lpVtbl->QueryInterface)(
                                           v10,
                                           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                           v12);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_38;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v12[0] + 24LL))(
                                           v12[0],
                                           &v13);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_38;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, a2);
  }
  CMonitorManager::FindMonitor(this, &v14, a2);
  if ( v14 )
  {
    v6 = 0LL;
    pv = 0LL;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        40,
        (unsigned int)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        (_DWORD)v14,
        (__int64)a2);
      v7 = WPP_GLOBAL_Control;
    }
    if ( *((_BYTE *)v14 + 12) )
      goto LABEL_24;
    v8 = v13;
    if ( v13 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(v10, (unsigned __int16 **)&pv, 0LL) )
        goto LABEL_29;
      v8 = v13;
      v6 = pv;
      v7 = WPP_GLOBAL_Control;
    }
    if ( v8 )
      goto LABEL_24;
    if ( !CMonitorManager::IsRenderMirrorEnabled(this, v10, (unsigned __int16 **)&pv) )
    {
      v6 = pv;
LABEL_23:
      v7 = WPP_GLOBAL_Control;
LABEL_24:
      if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v7 + 7) & 0x800000) != 0
        && *((_BYTE *)v7 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v7 + 2), 42LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, a2);
      }
      CMonitorManager::RemoveMonitor(this, v14, 1);
      CoTaskMemFree(v6);
      goto LABEL_7;
    }
LABEL_29:
    v9 = (_QWORD *)((char *)v14 + 160);
    if ( *((_QWORD *)v14 + 23) >= 8uLL )
      v9 = (_QWORD *)*v9;
    v6 = pv;
    if ( !(unsigned int)_o__wcsicmp(v9, pv) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
      }
      CoTaskMemFree(v6);
      goto LABEL_8;
    }
    goto LABEL_23;
  }
LABEL_7:
  MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v10);
  if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
  {
LABEL_8:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    goto LABEL_9;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
LABEL_38:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      43LL,
      &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
      (unsigned int)MonitorForCaptureDeviceIfAppropriate);
  }
LABEL_9:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
}
