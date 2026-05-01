/*
 * XREFs of ?TransformApplicationViewError@@YAXPEAJ@Z @ 0x1803B5008
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_48be1b905215f5351fccc35e9e1a8494___1_long_::Invoke @ 0x1803AF8C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803AF8C0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ae1749f2dbda6a2b96f2e594d8a744e9___1_long_::Invoke @ 0x1803AFB40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803AFB40.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_d5477cdde00c396a06f6576e925c03df___1_long_::Invoke @ 0x1803AFBF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803AFBF0.c)
 * Callees:
 *     <none>
 */

void __fastcall TransformApplicationViewError(int *a1)
{
  if ( *a1 == -2147023496 || *a1 == -2147024890 )
  {
    *a1 = -2147024809;
  }
  else if ( *a1 == -2147467260 )
  {
    *a1 = 0;
  }
}
