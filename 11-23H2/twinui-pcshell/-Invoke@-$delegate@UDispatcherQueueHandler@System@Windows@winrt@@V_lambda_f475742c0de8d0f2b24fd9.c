/*
 * XREFs of ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@@impl@winrt@@UEAAHXZ @ 0x1801BD6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_f475742c0de8d0f2b24fd9d946f0a567_>::Invoke(
        __int64 a1)
{
  void (**v1)(void); // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 12LL) = 1;
  v1 = *(void (***)(void))(a1 + 8);
  try
  {
    (*v1)();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v3);
  }
  return result;
}
