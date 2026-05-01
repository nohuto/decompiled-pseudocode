/*
 * XREFs of ?GetWindowOwnershipOperations@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedWindowOwnershipOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1803EE790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall UwpWindowEventDispatcher::GetWindowOwnershipOperations(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 280);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
