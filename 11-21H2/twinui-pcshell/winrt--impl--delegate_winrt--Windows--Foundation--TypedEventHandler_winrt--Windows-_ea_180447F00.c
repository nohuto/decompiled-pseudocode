/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_abf37a923c4e39d61bd96b31f9d5bb1d___::Invoke @ 0x180447F00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActive@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180013368 (-IsActive@-$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActiva.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_136c33c4afb22965c6bbfc180a837019___ @ 0x180447840 (Windows--Internal--ComTaskPool--QueueTask__lambda_136c33c4afb22965c6bbfc180a837019___.c)
 *     _lambda_136c33c4afb22965c6bbfc180a837019_::__lambda_136c33c4afb22965c6bbfc180a837019_ @ 0x180447A40 (_lambda_136c33c4afb22965c6bbfc180a837019_--__lambda_136c33c4afb22965c6bbfc180a837019_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_abf37a923c4e39d61bd96b31f9d5bb1d___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  try
  {
    if ( !winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs<winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::IsActive(&v11) )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v8 = v5;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v9 = a3;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v9);
      Windows::Internal::ComTaskPool::QueueTask__lambda_136c33c4afb22965c6bbfc180a837019___(v6, &v8);
      lambda_136c33c4afb22965c6bbfc180a837019_::__lambda_136c33c4afb22965c6bbfc180a837019_((Platform::WeakReference *)&v8);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v10);
  }
  return result;
}
