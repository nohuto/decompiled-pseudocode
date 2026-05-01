/*
 * XREFs of _lambda_d2929146ab183b5cd17811f33a4bdab8_::operator() @ 0x1807206E4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs___lambda_d2929146ab183b5cd17811f33a4bdab8___::Invoke @ 0x180721A80 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Inte_ea_180721A80.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8 (-unconditional_release_ref@-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?DisplayName@?$consume_Windows_Internal_Shell_IRemoteSystemDisplayInfoChangedEventArgs@UIRemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807215CC (-DisplayName@-$consume_Windows_Internal_Shell_IRemoteSystemDisplayInfoChangedEventArgs@UIRemoteS.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1807246EC (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_d2929146ab183b5cd17811f33a4bdab8_::operator()(
        __int64 a1,
        volatile signed __int64 *a2,
        __int64 *a3)
{
  volatile signed __int64 *v4; // rbx
  __int64 v5; // r14
  void (__fastcall *v6)(__int64, _QWORD *, __int64); // rsi
  __int64 v7; // rdi
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int64 *v10; // [rsp+58h] [rbp+10h] BYREF
  volatile signed __int32 *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a2;
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1, &v10);
  v4 = v10;
  if ( v10 )
  {
    v5 = *((_QWORD *)v10 + 5);
    v6 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v5 + 56LL);
    v7 = winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemDisplayInfoChangedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemDisplayInfoChangedEventArgs>::DisplayName(
           a3,
           &v11);
    v8 = winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
           a3,
           &v9);
    v6(v5, v8, v7);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
  }
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref(&v10);
}
