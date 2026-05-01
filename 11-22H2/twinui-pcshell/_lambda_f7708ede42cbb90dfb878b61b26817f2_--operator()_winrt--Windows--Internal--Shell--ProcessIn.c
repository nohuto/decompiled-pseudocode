/*
 * XREFs of _lambda_f7708ede42cbb90dfb878b61b26817f2_::operator()_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs_ @ 0x18027A4DC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs___lambda_f7708ede42cbb90dfb878b61b26817f2___::Invoke @ 0x18027BCA0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Shell--.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8 (-unconditional_release_ref@-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1807246EC (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_f7708ede42cbb90dfb878b61b26817f2_::operator()_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs_(
        __int64 a1,
        void *a2,
        _QWORD *a3)
{
  volatile signed __int64 *v4; // rbx
  int v5; // eax
  __int64 *v6; // rsi
  __int64 v7; // rax
  void (__fastcall *v8)(__int64 *, __int64); // rdi
  __int64 v9; // rax
  volatile signed __int64 *v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1, &v10);
  v4 = v10;
  if ( v10 )
  {
    LOBYTE(v11) = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)*a3 + 64LL))(*a3, &v11);
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
    v6 = (__int64 *)*((_QWORD *)v4 + 3);
    v7 = *v6;
    if ( (_BYTE)v11 )
      v8 = *(void (__fastcall **)(__int64 *, __int64))(v7 + 32);
    else
      v8 = *(void (__fastcall **)(__int64 *, __int64))(v7 + 40);
    v9 = winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
           a3,
           &v11);
    v8(v6, v9);
    winrt::hstring::~hstring(&v11);
  }
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref(&v10);
}
