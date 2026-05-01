/*
 * XREFs of ?HandleActivationRequested@UwpWindowWrapperBase@@UEAAXXZ @ 0x180415330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::HandleActivationRequested(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 224LL))(*((_QWORD *)this + 32));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 256LL))((char *)this - 16);
}
