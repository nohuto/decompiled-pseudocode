/*
 * XREFs of ?Pause@CMonitorManager@@QEAAXXZ @ 0x18012E588
 * Callers:
 *     ?PauseAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ @ 0x18012E680 (-PauseAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012B780 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18012D08C (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x1801321C8 (-Stop@CMonitor@@QEAAXXZ.c)
 */

void __fastcall CMonitorManager::Pause(CMonitorManager *this)
{
  CAudioSessionManager *v2; // rcx
  _QWORD *v3; // rax
  __int64 *Next; // rax
  CMonitor *v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp+10h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
  }
  if ( *((_QWORD *)this + 16) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 14);
    v9 = v3;
    while ( v3 )
    {
      Next = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
               (__int64)v2,
               &v9);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v8, *Next);
      v5 = *(CMonitor **)(v8 + 200);
      if ( *((_DWORD *)v5 + 14) == 3 )
        CMonitor::Stop(v5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
      v3 = v9;
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
