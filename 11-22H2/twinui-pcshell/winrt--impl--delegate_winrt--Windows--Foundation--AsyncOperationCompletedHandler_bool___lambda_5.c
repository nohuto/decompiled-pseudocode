/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___::Invoke @ 0x180284530
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x1802841E4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___::Invoke(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (_QWORD *)(a1 + 8);
  try
  {
    lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator()(v2, (__int64)&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
