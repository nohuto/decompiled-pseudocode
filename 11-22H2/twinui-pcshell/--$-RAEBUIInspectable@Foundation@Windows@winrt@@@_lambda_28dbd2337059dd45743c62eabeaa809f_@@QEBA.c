/*
 * XREFs of ??$?RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_28dbd2337059dd45743c62eabeaa809f_@@QEBA?A_PAEBUIInspectable@Foundation@Windows@winrt@@@Z @ 0x180283C6C
 * Callers:
 *     ?Invoke@?$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_28dbd2337059dd45743c62eabeaa809f_@@@impl@winrt@@UEAAHPEAX@Z @ 0x180283EE0 (-Invoke@-$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_la.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180093070 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_28dbd2337059dd45743c62eabeaa809f_::operator()<winrt::Windows::Foundation::IInspectable const &>(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v4; // rsi
  volatile __int64 *v5; // rbx
  void (__fastcall *v6)(__int64, void *, void **); // rbx
  void **v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  volatile __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v8 = 0LL;
    v6 = *(void (__fastcall **)(__int64, void *, void **))(*(_QWORD *)v4 + 24LL);
    v7 = winrt::put_abi((winrt *)&v8, a2);
    v6(v4, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::INetworkConnectionUtils>, v7);
    if ( v8 )
      v5 = (volatile __int64 *)(v8 - 16);
    else
      v5 = 0LL;
    v8 = 0LL;
    v9 = v5;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
  }
  else
  {
    v9 = 0LL;
    v5 = 0LL;
  }
  if ( v5 )
  {
    ((void (__fastcall *)(char *, struct IUnknown *))a1[1])((char *)v5 + *((int *)a1 + 4), a2);
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v9);
  }
}
