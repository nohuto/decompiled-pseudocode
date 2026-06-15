/*
 * XREFs of ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180006FAC
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x180006CA0 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180004778 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18000680C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18003F5A4 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012B730 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18012D03C (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x18012DB44 (-IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012EBFC (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CMonitorManager::HandleDeviceAdded(CMonitorManager *this, const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  unsigned int i; // esi
  _QWORD *Next; // rax
  int restarted; // eax
  LPCRITICAL_SECTION v9; // rcx
  char IsCaptureMonitorEnabled; // al
  LPCRITICAL_SECTION v11; // rbx
  int v12; // eax
  int v13; // eax
  struct IMMDevice *v14; // [rsp+30h] [rbp-30h] BYREF
  struct IMMDevice *v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v18; // [rsp+50h] [rbp-10h]
  CMonitorManager::CaptureMonitor *v19; // [rsp+90h] [rbp+30h] BYREF
  int v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v14 = 0LL;
  v16 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v18 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v21 = *((_QWORD *)this + 14);
  while ( v21 )
  {
    Next = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                       v4,
                       &v21);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v19, *Next);
    if ( CMonitorManager::CaptureMonitor::IsConnectedTo(v19, a2) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 77LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, a2);
      }
      restarted = CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(v19);
      if ( restarted < 0
        && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          78LL,
          &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
          (unsigned int)restarted);
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
  }
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v14);
  if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
  {
    MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v14->lpVtbl->QueryInterface)(
                                             v14,
                                             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                             &v16);
    if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
    {
      MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 24LL))(
                                               v16,
                                               &v20);
      if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
      {
        if ( v20 == 1 )
        {
          MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v14);
          if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
            goto LABEL_13;
        }
        else
        {
          v21 = 0LL;
          MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 8) + 24LL))(
                                                   *((_QWORD *)this + 8),
                                                   1LL,
                                                   1LL,
                                                   &v21);
          if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
          {
            MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, CMonitorManager::CaptureMonitor **))(*(_QWORD *)v21 + 24LL))(
                                                     v21,
                                                     &v19);
            if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
            {
              for ( i = 0; i < (unsigned int)v19; ++i )
              {
                v15 = 0LL;
                lpCriticalSection = 0LL;
                if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v21 + 32LL))(v21, i, &v15) >= 0 )
                {
                  IsCaptureMonitorEnabled = CMonitor::IsCaptureMonitorEnabled(
                                              v15,
                                              (unsigned __int16 **)&lpCriticalSection,
                                              0LL);
                  v11 = lpCriticalSection;
                  if ( IsCaptureMonitorEnabled )
                  {
                    if ( !(unsigned int)_o__wcsicmp(lpCriticalSection, a2) )
                    {
                      v12 = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v15);
                      if ( v12 < 0
                        && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
                      {
                        WPP_SF_d(
                          *((_QWORD *)WPP_GLOBAL_Control + 2),
                          79LL,
                          &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
                          (unsigned int)v12);
                      }
                    }
                  }
                  v9 = v11;
                }
                else
                {
                  v9 = 0LL;
                }
                CoTaskMemFree(v9);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v15);
              }
              lpCriticalSection = 0LL;
              if ( CMonitorManager::IsRenderMirrorEnabled(this, v14, (unsigned __int16 **)&lpCriticalSection) )
              {
                v13 = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v14);
                if ( v13 < 0
                  && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
                {
                  WPP_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    80LL,
                    &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
                    (unsigned int)v13);
                }
              }
              CoTaskMemFree(lpCriticalSection);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
              goto LABEL_13;
            }
          }
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      81LL,
      &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
      (unsigned int)MonitorForCaptureDeviceIfAppropriate);
  }
LABEL_13:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
}
