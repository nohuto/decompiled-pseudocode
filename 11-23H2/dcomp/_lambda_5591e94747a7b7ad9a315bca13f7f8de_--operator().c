/*
 * XREFs of _lambda_5591e94747a7b7ad9a315bca13f7f8de_::operator() @ 0x180123288
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_Windows::UI::Composition::ProxyObject___unsigned_int_________lambda_5591e94747a7b7ad9a315bca13f7f8de___ @ 0x18012263C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--pair_Windows--UI--.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_5591e94747a7b7ad9a315bca13f7f8de_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  bool result; // al

  v2 = *a1;
  result = 0;
  if ( *((_BYTE *)a1 + 12) )
    return *(_QWORD *)a2 == v2;
  if ( *(_QWORD *)a2 == v2 )
    return *(_DWORD *)(a2 + 8) == *((_DWORD *)a1 + 2);
  return result;
}
