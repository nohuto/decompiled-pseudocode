/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_690d2e9773cc08e07279b20ff14abba4___::Invoke @ 0x18028A770
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     _lambda_690d2e9773cc08e07279b20ff14abba4_::operator() @ 0x18028A24C (_lambda_690d2e9773cc08e07279b20ff14abba4_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_690d2e9773cc08e07279b20ff14abba4___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  winrt::Windows::Foundation::IUnknown *v5; // rax
  __int64 v6; // r9
  __int64 result; // rax
  int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  char v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v3 = (__int64 *)(a1 + 8);
  v4 = (__int64 *)winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
                    (winrt::Windows::Foundation::IUnknown *)&v8,
                    &v10);
  v5 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
         (winrt::Windows::Foundation::IUnknown *)&v11,
         &v9);
  try
  {
    lambda_690d2e9773cc08e07279b20ff14abba4_::operator()(v3, v5, v4, v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v8);
  }
  return result;
}
