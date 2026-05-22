/*
 * XREFs of ??1?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@QEAA@XZ @ 0x1800CE68C
 * Callers:
 *     _InjectionRawInputProvider::OnAttachDevice_::_1_::dtor$1 @ 0x1800CEE6C (_InjectionRawInputProvider--OnAttachDevice_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<InputInfoValidator>::~unique_ptr<InputInfoValidator>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  return result;
}
