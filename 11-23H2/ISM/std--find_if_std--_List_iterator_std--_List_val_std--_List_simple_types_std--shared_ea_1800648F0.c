/*
 * XREFs of std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_9193c85b91a90ecd300d0af0c9084680___ @ 0x1800648F0
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801F1ED0 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     _lambda_9193c85b91a90ecd300d0af0c9084680_::operator() @ 0x1800649D4 (_lambda_9193c85b91a90ecd300d0af0c9084680_--operator().c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB34 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_9193c85b91a90ecd300d0af0c9084680___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v8; // rax
  _QWORD *result; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  while ( a2 != a3 )
  {
    v8 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v10, a2 + 2);
    if ( (unsigned __int8)lambda_9193c85b91a90ecd300d0af0c9084680_::operator()(a4, v8) )
      break;
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  *a1 = a2;
  return result;
}
