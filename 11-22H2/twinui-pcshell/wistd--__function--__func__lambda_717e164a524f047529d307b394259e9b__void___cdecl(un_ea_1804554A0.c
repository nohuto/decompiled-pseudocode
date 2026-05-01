/*
 * XREFs of wistd::__function::__func__lambda_717e164a524f047529d307b394259e9b__void___cdecl(unsigned_long_const_&)_::__clone @ 0x1804554A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_717e164a524f047529d307b394259e9b__void___cdecl_unsigned_long_const____::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_1807A2CE0;
  *a2 = &off_1807A2CE0;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
