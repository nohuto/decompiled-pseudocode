/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler__lambda_72e1dcf1d191a1fe628d31ef24d41038___::Invoke @ 0x180774940
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_72e1dcf1d191a1fe628d31ef24d41038_::operator() @ 0x180772688 (_lambda_72e1dcf1d191a1fe628d31ef24d41038_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler__lambda_72e1dcf1d191a1fe628d31ef24d41038___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_72e1dcf1d191a1fe628d31ef24d41038_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
