/*
 * XREFs of ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x18007F9B0
 * Callers:
 *     ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x18007FB88 (--_GOneCoreUAPInputHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x18007F964 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV-$all.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall OneCoreUAPInputHost::~OneCoreUAPInputHost(OneCoreUAPInputHost *this)
{
  __int64 v2; // rcx
  MPCManager *v3; // rcx
  REGHANDLE v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &OneCoreUAPInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &OneCoreUAPInputHost::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &OneCoreUAPInputHost::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 80) )
  {
    v2 = *((_QWORD *)this + 7);
    if ( v2 )
    {
      std::_Destroy_range<std::allocator<InputProvider>>(v2, *((_QWORD *)this + 8));
      std::_Deallocate<16,0>(*((void **)this + 7), 8 * ((__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) >> 3));
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 9) = 0LL;
    }
    *((_BYTE *)this + 80) = 0;
  }
  MPCGestureHandlerManager::s_instance = 0LL;
  MPCGamepadInputHelper::s_instance = 0LL;
  MPCConstantManager::s_instance = 0LL;
  v3 = MPCManager::s_instance;
  if ( MPCManager::s_instance )
  {
    MPCManager::s_instance = 0LL;
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v3 + 2) + 8LL))((__int64)v3 + 16);
  }
  MPCHolographicInputManager::s_instance = 0LL;
  MPC3DStateHelper::s_instance = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 6);
  *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost = 0LL;
  v4 = RegHandle;
  dword_180240410 = 0;
  RegHandle = 0LL;
  EventUnregister(v4);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 11);
  if ( *((_BYTE *)this + 80) )
  {
    v5 = *((_QWORD *)this + 7);
    if ( v5 )
    {
      std::_Destroy_range<std::allocator<InputProvider>>(v5, *((_QWORD *)this + 8));
      std::_Deallocate<16,0>(*((void **)this + 7), 8 * ((__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) >> 3));
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 5);
  if ( *((int *)this + 8) >= 0 )
    RoUninitialize();
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
