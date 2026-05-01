/*
 * XREFs of wil::details::lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___::_lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___ @ 0x18030F940
 * Callers:
 *     _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$0 @ 0x18021DA80 (_CApplicationViewManager--RemoveApplicationView_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800EAE5C (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall wil::details::lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___::_lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___(
        __int64 a1)
{
  _DWORD *result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_3752109e28d6ea02fd1f915d996064c2_::operator()(a1);
  }
  return result;
}
