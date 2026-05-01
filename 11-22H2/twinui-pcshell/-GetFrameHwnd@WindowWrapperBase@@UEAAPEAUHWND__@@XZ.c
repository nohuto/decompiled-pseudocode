/*
 * XREFs of ?GetFrameHwnd@WindowWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x1804E9F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

HWND __fastcall WindowWrapperBase::GetFrameHwnd(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  return (HWND)*((_QWORD *)this + 15);
}
