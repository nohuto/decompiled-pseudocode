/*
 * XREFs of ??1TapProcessor@@EEAA@XZ @ 0x1801D1F6C
 * Callers:
 *     ??_ETapProcessor@@EEAAPEAXI@Z @ 0x1801D2008 (--_ETapProcessor@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall TapProcessor::~TapProcessor(TapProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &TapProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
  *((_QWORD *)this + 2) = &TapProcessor::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    DestroyInteractionContext(v2);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
