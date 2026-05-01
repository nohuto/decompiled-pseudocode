/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler__lambda_2b9ca255212db89297b14d5a504c020f___::Invoke @ 0x18060A290
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_93a01a015314866c96b4de2e509c5117_::operator() @ 0x180608308 (_lambda_93a01a015314866c96b4de2e509c5117_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler__lambda_2b9ca255212db89297b14d5a504c020f___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_93a01a015314866c96b4de2e509c5117_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
