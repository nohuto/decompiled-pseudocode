/*
 * XREFs of winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x180685170
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator() @ 0x180682DD8 (_lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_--operator().c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  try
  {
    lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator()((__int64 *)v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
