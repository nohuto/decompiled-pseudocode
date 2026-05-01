/*
 * XREFs of _lambda_7e13dd26ee5179011b47c221adf0f758_::_lambda_invoker_cdecl_ @ 0x1805CCAC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cb14720fa6952ddf18018f5cea91699b_::operator() @ 0x1805CD34C (_lambda_cb14720fa6952ddf18018f5cea91699b_--operator().c)
 */

__int64 __fastcall lambda_7e13dd26ee5179011b47c221adf0f758_::_lambda_invoker_cdecl_(HWND a1, _QWORD *a2)
{
  char v4; // al
  unsigned int v5; // r8d

  v4 = lambda_cb14720fa6952ddf18018f5cea91699b_::operator()(a1, a1);
  v5 = 0;
  if ( v4 )
    *a2 = a1;
  else
    return 1;
  return v5;
}
