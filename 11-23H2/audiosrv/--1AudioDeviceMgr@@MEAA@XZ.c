/*
 * XREFs of ??1AudioDeviceMgr@@MEAA@XZ @ 0x1801634E0
 * Callers:
 *     ??_EAudioDeviceMgr@@MEAAPEAXI@Z @ 0x180163580 (--_EAudioDeviceMgr@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAAXXZ @ 0x180002E78 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Shutdown@AudioDeviceMgr@@UEAAXXZ @ 0x1801636D0 (-Shutdown@AudioDeviceMgr@@UEAAXXZ.c)
 */

void __fastcall AudioDeviceMgr::~AudioDeviceMgr(AudioDeviceMgr *this)
{
  *(_QWORD *)this = &AudioDeviceMgr::`vftable'{for `IAudioDeviceMgr'};
  *((_QWORD *)this + 1) = &AudioDeviceMgr::`vftable'{for `IMMNotificationClientInternal'};
  *((_QWORD *)this + 2) = &AudioDeviceMgr::`vftable'{for `CUnknown'};
  AudioDeviceMgr::Shutdown(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll((__int64)this + 120);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 4);
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
