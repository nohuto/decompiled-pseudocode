/*
 * XREFs of std::_Func_impl_no_alloc__lambda_65776acf8dfa6fe29cb3050938b98b74__long_::_Copy @ 0x1800FB5A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_65776acf8dfa6fe29cb3050938b98b74__long_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = off_180115610;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
