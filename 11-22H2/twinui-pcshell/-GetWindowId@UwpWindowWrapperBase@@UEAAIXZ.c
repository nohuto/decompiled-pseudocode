/*
 * XREFs of ?GetWindowId@UwpWindowWrapperBase@@UEAAIXZ @ 0x180161630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetWindowId(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 232LL))(*((_QWORD *)this + 33));
  return *((unsigned int *)this + 70);
}
