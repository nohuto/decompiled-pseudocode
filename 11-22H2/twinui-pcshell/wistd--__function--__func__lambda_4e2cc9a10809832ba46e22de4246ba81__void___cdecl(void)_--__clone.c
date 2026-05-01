/*
 * XREFs of wistd::__function::__func__lambda_4e2cc9a10809832ba46e22de4246ba81__void___cdecl(void)_::__clone @ 0x18041A830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_4e2cc9a10809832ba46e22de4246ba81__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *a2 = &off_1807B0710;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  v3 = *(_QWORD *)(a1 + 16);
  a2[2] = v3;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
