/*
 * XREFs of _lambda_1f06d20aa2c7b6f65f005431986a59fb_::__lambda_1f06d20aa2c7b6f65f005431986a59fb_ @ 0x180073DE4
 * Callers:
 *     _std::for_each_std::_List_const_iterator_std::_List_val_std::_List_simple_types_unsigned_int_______lambda_1f06d20aa2c7b6f65f005431986a59fb____::_1_::dtor$0 @ 0x180073D95 (_std--for_each_std--_List_const_iterator_std--_List_val_std--_List_simple_types_unsigned_int____.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180165E98 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_1f06d20aa2c7b6f65f005431986a59fb_::__lambda_1f06d20aa2c7b6f65f005431986a59fb_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}
