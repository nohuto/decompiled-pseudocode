/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Copy @ 0x140068670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z @ 0x140067B0C (--0-$shared_ptr@UAPO_NOTIFICATION@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  *a2 = off_14009A788;
  v4 = *(_QWORD *)(a1 + 8);
  a2[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  std::shared_ptr<APO_NOTIFICATION>::shared_ptr<APO_NOTIFICATION>(a2 + 2, (_QWORD *)(a1 + 16));
  return a2;
}
