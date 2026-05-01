/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UArrangedWindowResizeStartedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_fb02139e2b90b33082d3ca27ed7b30a7_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180648810
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,winrt::Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowResizeStartedEventArgs>,_lambda_fb02139e2b90b33082d3ca27ed7b30a7_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void (*v4)(void); // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(void (**)(void))(a1 + 16);
  v6 = a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  v7 = a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  try
  {
    v4();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
