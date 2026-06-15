/*
 * XREFs of ??1CMonitorManager@@QEAA@XZ @ 0x18012BB30
 * Callers:
 *     ?Release@CMonitorManager@@UEAAKXZ @ 0x1800040A0 (-Release@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAAXXZ @ 0x180006E84 (-RemoveAll@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrE.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x18005C3A4 (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18012C1F8 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18012F310 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18012FA30 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

void __fastcall CMonitorManager::~CMonitorManager(CMonitorManager *this)
{
  HKEY v2; // rcx
  __int64 v3; // rsi
  unsigned int v4; // edx
  void *v5; // rcx
  void *v6; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CMonitorManager::`vftable';
  CMonitorManager::Shutdown(this);
  *((_DWORD *)this + 14) = 4;
  v2 = (HKEY)*((_QWORD *)this + 46);
  if ( v2 )
    RegCloseKey(v2);
  v3 = *((_QWORD *)this + 45);
  if ( v3 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v3 + 152));
    SRWLock = (PSRWLOCK)(v3 + 152);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 148), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v3, v4);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  v5 = (void *)*((_QWORD *)this + 43);
  if ( v5 )
    CoTaskMemFree(v5);
  v6 = (void *)*((_QWORD *)this + 42);
  if ( v6 )
    CoTaskMemFree(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveAll((__int64)this + 200);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll((__int64)this + 112);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
