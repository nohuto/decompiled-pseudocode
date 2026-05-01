/*
 * XREFs of ?HandleActivationRequested@UwpWindowWrapperBase@@UEAAXXZ @ 0x18006C070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::HandleActivationRequested(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 256LL))((char *)this - 16);
}
