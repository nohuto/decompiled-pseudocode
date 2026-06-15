/*
 * XREFs of std::_Func_impl_no_alloc__lambda_42e3628300a97928937161f82d74134d__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x18012AEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_42e3628300a97928937161f82d74134d__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rcx

  v3 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a2 + 112LL);
  EnterCriticalSection(v3);
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 152LL);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 264LL))(v4);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a2 + 152LL));
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
