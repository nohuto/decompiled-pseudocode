/*
 * XREFs of wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_&)_::__clone @ 0x1805B5D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl_bool_const____::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *a2 = &off_1807C7AC8;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  v3 = *(_QWORD *)(a1 + 16);
  a2[2] = v3;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
