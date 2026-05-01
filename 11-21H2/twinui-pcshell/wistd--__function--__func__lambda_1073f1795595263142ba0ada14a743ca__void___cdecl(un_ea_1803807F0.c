/*
 * XREFs of wistd::__function::__func__lambda_1073f1795595263142ba0ada14a743ca__void___cdecl(unsigned_long_const_&)_::__clone @ 0x1803807F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_1073f1795595263142ba0ada14a743ca__void___cdecl_unsigned_long_const____::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_1806429B8;
  *a2 = &off_1806429B8;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
