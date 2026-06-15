/*
 * XREFs of ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18012EA90
 * Callers:
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180004180 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x180006EE0 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180007204 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ??1CStreamConnectionImpl@CMonitorManager@@QEAA@XZ @ 0x18012BC7C (--1CStreamConnectionImpl@CMonitorManager@@QEAA@XZ.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z @ 0x18012F210 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012B730 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18012D03C (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18012E9D0 (-RemoveAt@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@A.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18012F540 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180132178 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::RemoveMonitor(CMonitorManager *this, CMonitorManager::CaptureMonitor *a2, char a3)
{
  CAudioSessionManager *v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  __int64 *Next; // rax
  CMonitorManager::CaptureMonitor *v10; // rbx
  CMonitor *v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v13; // [rsp+28h] [rbp-8h]
  CMonitorManager::CaptureMonitor *v14; // [rsp+60h] [rbp+30h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+48h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x5Du, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
  }
  if ( *((_QWORD *)this + 16) )
  {
    v7 = (_QWORD *)((char *)this + 112);
    v8 = (_QWORD *)*((_QWORD *)this + 14);
    v15 = v8;
    while ( 1 )
    {
      Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
               (__int64)v6,
               &v15);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v14, *Next);
      v10 = v14;
      if ( v14 == a2 )
        break;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
      v8 = v15;
      if ( !v15 )
        goto LABEL_19;
    }
    ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAt(
      v7,
      v8);
    if ( a3 )
    {
      v11 = (CMonitor *)*((_QWORD *)v10 + 25);
      if ( *((_DWORD *)v11 + 14) == 3 )
        CMonitor::Stop(v11);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x5Eu,
          (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
          v10);
      }
      CMonitorManager::CaptureMonitor::Uninitialize(v10);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  }
LABEL_19:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
}
