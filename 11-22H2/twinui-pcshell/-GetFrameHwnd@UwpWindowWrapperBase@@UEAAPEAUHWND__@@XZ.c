/*
 * XREFs of ?GetFrameHwnd@UwpWindowWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x180053A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

HWND __fastcall UwpWindowWrapperBase::GetFrameHwnd(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 232LL))(*((_QWORD *)this + 33));
  return (HWND)*((_QWORD *)this + 15);
}
