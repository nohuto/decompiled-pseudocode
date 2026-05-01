/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_f11de0bc23a1be581f21c48152b34889___::Invoke @ 0x18028D510
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     _lambda_f11de0bc23a1be581f21c48152b34889_::operator() @ 0x18028D158 (_lambda_f11de0bc23a1be581f21c48152b34889_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_f11de0bc23a1be581f21c48152b34889___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 *v4; // rbx
  winrt::Windows::Foundation::IUnknown *v5; // rax
  __int64 result; // rax
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = a3;
  v8 = a2;
  v3 = (_QWORD *)(a1 + 8);
  v4 = (__int64 *)winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
                    (winrt::Windows::Foundation::IUnknown *)&v7,
                    &v9);
  v5 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
         (winrt::Windows::Foundation::IUnknown *)&v10,
         &v8);
  try
  {
    lambda_f11de0bc23a1be581f21c48152b34889_::operator()(v3, v5, v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
