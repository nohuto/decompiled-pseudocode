/*
 * XREFs of ?GetFrameHwnd@UwpWindowWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x180414B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

HWND __fastcall UwpWindowWrapperBase::GetFrameHwnd(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 232LL))(*((_QWORD *)this + 32));
  return (HWND)*((_QWORD *)this + 14);
}
