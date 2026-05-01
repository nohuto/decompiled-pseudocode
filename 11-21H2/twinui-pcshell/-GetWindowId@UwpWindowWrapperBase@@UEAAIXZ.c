/*
 * XREFs of ?GetWindowId@UwpWindowWrapperBase@@UEAAIXZ @ 0x180415200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetWindowId(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 232LL))(*((_QWORD *)this + 32));
  return *((unsigned int *)this + 68);
}
