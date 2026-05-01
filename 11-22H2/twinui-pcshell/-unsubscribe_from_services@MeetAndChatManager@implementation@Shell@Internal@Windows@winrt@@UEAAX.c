/*
 * XREFs of ?unsubscribe_from_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801ACAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?remove@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801AEBD4 (-remove@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        struct IServiceProvider *a2)
{
  RTL_SRWLOCK *v3; // rdi
  HWND v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v3 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  if ( *((_QWORD *)this + 33) )
  {
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::remove(
      *((_QWORD *)this + 11) + 32LL,
      *((_QWORD *)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
  v4 = *(HWND *)(*((_QWORD *)this + 11) + 24LL);
  if ( v4 )
    SendMessageW(v4, 0x401u, 0LL, 0LL);
  if ( *((_DWORD *)this + 38) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18));
    *((_DWORD *)this + 38) = 0;
  }
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 18);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 21);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 20);
  *((_QWORD *)this + 22) = 0LL;
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
