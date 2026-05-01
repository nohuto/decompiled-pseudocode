/*
 * XREFs of ?TransformApplicationViewError@@YAXPEAJ@Z @ 0x18003FFB4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_b82ab155e0a44f68f34808137a5c37fe___1_long_::Invoke @ 0x18003FF60 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_18003FF60.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_d5477cdde00c396a06f6576e925c03df___1_long_::Invoke @ 0x1802F6970 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F6970.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_fb9bc17fcf0008a7b401a930387895ed___1_long_::Invoke @ 0x1802F6AD0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F6AD0.c)
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
