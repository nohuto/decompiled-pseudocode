/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Copy @ 0x140038700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z @ 0x14003856C (--0-$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx

  *a2 = off_1400A5A10;
  std::shared_ptr<APO_NOTIFICATION>::shared_ptr<APO_NOTIFICATION>(a2 + 1, (_QWORD *)(a1 + 8));
  v4 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v5 + 16) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
