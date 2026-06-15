/*
 * XREFs of ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18012F360
 * Callers:
 *     ??1CMonitorManager@@QEAA@XZ @ 0x18012BB80 (--1CMonitorManager@@QEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012B780 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18012C3A8 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x18012EA70 (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18012F52C (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18012F5E8 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::Shutdown(CMonitorManager *this)
{
  int v2; // esi
  __int64 v3; // rcx
  __int64 *v4; // rax
  CMonitorManager::CaptureMonitor *v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v7; // [rsp+28h] [rbp-8h]
  CMonitorManager::CaptureMonitor *v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v2 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) != 1 )
  {
    v2 = -2147024809;
LABEL_13:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v2);
    }
    goto LABEL_17;
  }
  *((_DWORD *)this + 14) = 2;
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(__int64, CMonitorManager *))(*(_QWORD *)v3 + 56LL))(v3, this);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  while ( *((_QWORD *)this + 16) )
  {
    v4 = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
           (__int64 **)this + 14,
           &v9);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v8, *v4);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
    v5 = v8;
    CMonitor::StopIfRunning(*((CMonitor **)v8 + 25));
    CMonitorManager::CaptureMonitor::UninitializeSynchronously(v5);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  LeaveCriticalSection(lpCriticalSection);
  v7 = 0;
  CMonitorManager::CleanupMonitorRestartTimer(this);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 8);
  *((_DWORD *)this + 14) = 3;
  if ( v2 < 0 )
    goto LABEL_13;
LABEL_17:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
