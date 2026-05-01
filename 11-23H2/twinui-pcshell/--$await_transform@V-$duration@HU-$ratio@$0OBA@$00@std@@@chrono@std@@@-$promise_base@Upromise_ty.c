/*
 * XREFs of ??$await_transform@V?$duration@HU?$ratio@$0OBA@$00@std@@@chrono@std@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAV?$duration@HU?$ratio@$0OBA@$00@std@@@chrono@std@@@Z @ 0x18069412C
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<std::chrono::duration<int,std::ratio<3600,1>>>(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  bool v3; // cf
  __int64 v4; // rax
  _QWORD *v5; // r8
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v3 = *(_BYTE *)(a1 + 93) != 0;
  v4 = *a3;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = (_QWORD *)((a1 + 72) & -(__int64)v3);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 36000000000LL * v4;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = 0;
  if ( v5 )
  {
    *(_QWORD *)a2 = v5;
    *(_QWORD *)(((a1 + 72) & -(__int64)v3) + 8) = a2;
    *v5 = _lambda_853bb78cc99d5363e4352e3710d5f65c_::_lambda_invoker_cdecl_;
  }
  return a2;
}
