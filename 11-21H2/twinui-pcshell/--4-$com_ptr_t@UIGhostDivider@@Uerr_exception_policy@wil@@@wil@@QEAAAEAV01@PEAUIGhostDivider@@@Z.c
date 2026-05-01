/*
 * XREFs of ??4?$com_ptr_t@UIGhostDivider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIGhostDivider@@@Z @ 0x18052BA6C
 * Callers:
 *     ?ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z @ 0x18052BB1C (-ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IGhostDivider,wil::err_exception_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
