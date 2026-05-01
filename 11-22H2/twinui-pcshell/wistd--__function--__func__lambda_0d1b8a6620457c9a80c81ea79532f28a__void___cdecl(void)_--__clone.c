/*
 * XREFs of wistd::__function::__func__lambda_0d1b8a6620457c9a80c81ea79532f28a__void___cdecl(void)_::__clone @ 0x180393060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_0d1b8a6620457c9a80c81ea79532f28a__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_1807A2D80;
  *a2 = &off_1807A2D80;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
