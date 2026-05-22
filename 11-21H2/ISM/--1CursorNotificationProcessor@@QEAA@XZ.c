/*
 * XREFs of ??1CursorNotificationProcessor@@QEAA@XZ @ 0x1800E4D84
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$14 @ 0x180056DF8 (_Win32kInterop--Win32kInterop_--_1_--dtor$14.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800DE510 (--1Win32kInterop@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CursorNotificationProcessor::~CursorNotificationProcessor(CursorNotificationProcessor *this)
{
  __int64 *v2; // rdi

  v2 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 2) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 168LL))(*v2);
  if ( *((_QWORD *)this + 4) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 168LL))(*v2);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this);
}
