/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___ @ 0x1801D1890
 * Callers:
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801D225C (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B6080 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x1801D24E0 (_lambda_31ada6ebdd22db73722d2ce1394329de_--operator().c)
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
      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
        v8 + 2,
        a2 + 2);
      v8 = (_QWORD *)*v8;
    }
  }
LABEL_9:
  result = a1;
  *a1 = v8;
  return result;
}
