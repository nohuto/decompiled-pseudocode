/*
 * XREFs of ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A923C
 * Callers:
 *     ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x1800A93A0 (--_GOneCoreUAPInputHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x18001ADE0 (-Release@BamoInputSystemPrincipal@@UEAAKXZ.c)
 *     ??1?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAA@XZ @ 0x180059668 (--1-$unique_ptr@PEAVSessionMonitor@@U-$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAA@XZ.c)
 *     ??1InputProviderManager@@QEAA@XZ @ 0x1800A91DC (--1InputProviderManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall OneCoreUAPInputHost::~OneCoreUAPInputHost(OneCoreUAPInputHost *this)
{
  BamoInputSystemPrincipal *v2; // rcx
  REGHANDLE v3; // rcx

  *(_QWORD *)this = &OneCoreUAPInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &OneCoreUAPInputHost::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &OneCoreUAPInputHost::`vftable'{for `ISessionMonitorOwner'};
  *((_QWORD *)this + 3) = &OneCoreUAPInputHost::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 88) )
  {
    InputProviderManager::~InputProviderManager((OneCoreUAPInputHost *)((char *)this + 64));
    *((_BYTE *)this + 88) = 0;
  }
  MPCGestureHandlerManager::s_instance = 0LL;
  MPCGamepadInputHelper::s_instance = 0LL;
  MPCConstantManager::s_instance = 0LL;
  v2 = MPCManager::s_instance;
  if ( MPCManager::s_instance )
  {
    MPCManager::s_instance = 0LL;
    BamoInputSystemPrincipal::Release(v2);
  }
  MPCHolographicInputManager::s_instance = 0LL;
  MPC3DStateHelper::s_instance = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 7);
  *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost = 0LL;
  v3 = RegHandle;
  dword_180275498 = 0;
  RegHandle = 0LL;
  EventUnregister(v3);
  std::unique_ptr<SessionMonitor *>::~unique_ptr<SessionMonitor *>((void **)this + 14);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 12);
  if ( *((_BYTE *)this + 88) )
    InputProviderManager::~InputProviderManager((OneCoreUAPInputHost *)((char *)this + 64));
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  if ( *((int *)this + 10) >= 0 )
    RoUninitialize();
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
