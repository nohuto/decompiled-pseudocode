/*
 * XREFs of ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800F7CEC
 * Callers:
 *     ??_GLampArrayRawInputProvider@@EEAAPEAXI@Z @ 0x1800F7EA0 (--_GLampArrayRawInputProvider@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ @ 0x18001866C (--1-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@UIContextualProcessorEventStreamEnded@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A8F4 (--1-$ComPtr@UIContextualProcessorEventStreamEnded@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$NtList@UAmbientListEntry@LampArrayRawInputProvider@@@@QEAA@XZ @ 0x18006213C (--1-$NtList@UAmbientListEntry@LampArrayRawInputProvider@@@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800A9E6C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??1PnpDeviceWatcher@@QEAA@XZ @ 0x1800F7DAC (--1PnpDeviceWatcher@@QEAA@XZ.c)
 *     ?Clear@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x1800F7F74 (-Clear@-$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXXZ.c)
 *     ?Clear@?$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x1800F7FBC (-Clear@-$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800F9750 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LampArrayRawInputProvider::~LampArrayRawInputProvider(LampArrayRawInputProvider *this)
{
  ULONG_PTR v2; // rcx

  *(_QWORD *)this = &LampArrayRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &LampArrayRawInputProvider::`vftable'{for `IRawInputSessionNotify'};
  *((_QWORD *)this + 2) = &LampArrayRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &LampArrayRawInputProvider::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    *((_QWORD *)this + 42) = 0LL;
    ConsumerControlManager::Release(v2);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)this + 41);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)this + 40);
  PnpDeviceWatcher::~PnpDeviceWatcher((LampArrayRawInputProvider *)((char *)this + 192));
  NtList<LampArrayRawInputProvider::AmbientListEntry>::~NtList<LampArrayRawInputProvider::AmbientListEntry>((__int64 *)this + 15);
  NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Clear((char *)this + 96);
  NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::Clear((char *)this + 72);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IContextualProcessorEventStreamEnded>::~ComPtr<IContextualProcessorEventStreamEnded>();
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
