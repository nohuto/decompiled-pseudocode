/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_002af4b129f803392343893f362c92bd___::Invoke @ 0x18060EA30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_002af4b129f803392343893f362c92bd_::operator() @ 0x18060E65C (_lambda_002af4b129f803392343893f362c92bd_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_002af4b129f803392343893f362c92bd___::Invoke(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 8;
  try
  {
    lambda_002af4b129f803392343893f362c92bd_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
