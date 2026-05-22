/*
 * XREFs of ??1EdgyImpl@@QEAA@XZ @ 0x1801CC41C
 * Callers:
 *     ??1EdgyLegacyProcessor@@UEAA@XZ @ 0x1801C8268 (--1EdgyLegacyProcessor@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801CCA54 (-Reset@EdgyImpl@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EdgyImpl::~EdgyImpl(EdgyImpl *this)
{
  __int64 v2; // rcx

  EdgyImpl::Reset(this);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 4);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
