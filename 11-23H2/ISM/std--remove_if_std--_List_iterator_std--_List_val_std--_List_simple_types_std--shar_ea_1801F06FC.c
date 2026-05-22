/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___ @ 0x1801F06FC
 * Callers:
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801F1000 (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 * Callees:
 *     ??4?$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800615BC (--4-$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x1801F1110 (_lambda_31ada6ebdd22db73722d2ce1394329de_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // rdi
  _QWORD *result; // rax

  while ( 1 )
  {
    if ( a2 == a3 )
    {
      v8 = a2;
      goto LABEL_9;
    }
    if ( (unsigned __int8)lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(a4, a2 + 2) )
      break;
    a2 = (_QWORD *)*a2;
  }
  v8 = a2;
  while ( 1 )
  {
    a2 = (_QWORD *)*a2;
    if ( a2 == a3 )
      break;
    if ( !(unsigned __int8)lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(a4, a2 + 2) )
    {
      std::shared_ptr<SystemCursor2>::operator=(v8 + 2, a2 + 2);
      v8 = (_QWORD *)*v8;
    }
  }
LABEL_9:
  result = a1;
  *a1 = v8;
  return result;
}
