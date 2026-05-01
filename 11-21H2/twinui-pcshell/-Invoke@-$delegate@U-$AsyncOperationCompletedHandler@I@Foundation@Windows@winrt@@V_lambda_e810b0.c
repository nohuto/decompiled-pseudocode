/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@V_lambda_e810b03a6e5f5a022cc95ca4940e8036_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18049A870
 * Callers:
 *     <none>
 * Callees:
 *     ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4 (-resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>,_lambda_e810b03a6e5f5a022cc95ca4940e8036_>::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 (__fastcall **v5)(_QWORD); // rdx
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(v3 + 16) = a3;
  v4 = a1 + 16;
  v5 = *(__int64 (__fastcall ***)(_QWORD))(v4 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  try
  {
    winrt::impl::resume_apartment(v4, v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
