/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_508ef90450617154956e0b927fb269e2___::Invoke @ 0x180559660
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_508ef90450617154956e0b927fb269e2_::operator()_winrt::Windows::Foundation::IInspectable_const_&_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_const_&_ @ 0x180554670 (_lambda_508ef90450617154956e0b927fb269e2_--operator()_winrt--Windows--Foundation--IInspectable_c.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_508ef90450617154956e0b927fb269e2___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 8;
  try
  {
    lambda_508ef90450617154956e0b927fb269e2_::operator()_winrt::Windows::Foundation::IInspectable_const___winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_const___(
      v3,
      a2,
      a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
