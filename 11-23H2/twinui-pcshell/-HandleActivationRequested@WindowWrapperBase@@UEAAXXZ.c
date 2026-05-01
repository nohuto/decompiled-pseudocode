/*
 * XREFs of ?HandleActivationRequested@WindowWrapperBase@@UEAAXXZ @ 0x1804EA6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::HandleActivationRequested(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 240LL))((char *)this - 16);
}
