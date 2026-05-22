/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_Windows::UI::Composition::ProxyObject___unsigned_int_________lambda_5591e94747a7b7ad9a315bca13f7f8de___ @ 0x18012263C
 * Callers:
 *     ?RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I_N@Z @ 0x180072020 (-RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProx.c)
 * Callees:
 *     _lambda_5591e94747a7b7ad9a315bca13f7f8de_::operator() @ 0x180123288 (_lambda_5591e94747a7b7ad9a315bca13f7f8de_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_Windows::UI::Composition::ProxyObject___unsigned_int_________lambda_5591e94747a7b7ad9a315bca13f7f8de___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r10
  __int64 i; // r11
  __int64 j; // rdx
  __int64 v9; // rdx

  v5 = a3;
  for ( i = a2; i != v5; i += 16LL )
  {
    if ( (unsigned __int8)lambda_5591e94747a7b7ad9a315bca13f7f8de_::operator()(a4, i) )
      break;
  }
  if ( i != v5 )
  {
    for ( j = i + 16; j != v5; j = v9 + 16 )
    {
      if ( !(unsigned __int8)lambda_5591e94747a7b7ad9a315bca13f7f8de_::operator()(a4, j) )
      {
        *(_QWORD *)i = *(_QWORD *)v9;
        *(_DWORD *)(i + 8) = *(_DWORD *)(v9 + 8);
        i += 16LL;
      }
    }
  }
  *a1 = i;
  return a1;
}
