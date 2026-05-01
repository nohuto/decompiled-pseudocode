/*
 * XREFs of _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::__lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x180216FAC
 * Callers:
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba____::_1_::dtor$0 @ 0x180216137 (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc242____::_1_::dtor$0 @ 0x1802161D3 (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28ed____::_1_::dtor$0 @ 0x180216281 (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d2.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed____::_1_::dtor$0 @ 0x180216353 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_6.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba____::_1_::dtor$0 @ 0x180216436 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_7.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242____::_1_::dtor$0 @ 0x180216516 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_8.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_c0d8e1709f705684b7fc3b88b56d28ed_::__lambda_c0d8e1709f705684b7fc3b88b56d28ed_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
