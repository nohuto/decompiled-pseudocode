/*
 * XREFs of ??1VirtualDesktopManagerSuspensionToken@@UEAA@XZ @ 0x180544960
 * Callers:
 *     ??_EVirtualDesktopManagerSuspensionToken@@UEAAPEAXI@Z @ 0x180544C10 (--_EVirtualDesktopManagerSuspensionToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopManagerSuspensionToken::~VirtualDesktopManagerSuspensionToken(
        VirtualDesktopManagerSuspensionToken *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &VirtualDesktopManagerSuspensionToken::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 1) = &VirtualDesktopManagerSuspensionToken::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 0xFFFFFFFFLL);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
}
