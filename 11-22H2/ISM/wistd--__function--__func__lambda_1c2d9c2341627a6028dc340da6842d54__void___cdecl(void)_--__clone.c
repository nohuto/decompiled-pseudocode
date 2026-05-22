/*
 * XREFs of wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::__clone @ 0x1801254B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_18020A908;
  *a2 = &off_18020A908;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
