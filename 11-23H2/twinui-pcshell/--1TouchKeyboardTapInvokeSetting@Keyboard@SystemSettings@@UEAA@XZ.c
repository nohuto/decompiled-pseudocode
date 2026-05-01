/*
 * XREFs of ??1TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UEAA@XZ @ 0x18050CC94
 * Callers:
 *     ??_G?$heap_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@UEAAPEAXI@Z @ 0x18050D410 (--_G-$heap_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@UEAAP.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 */

void __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::~TouchKeyboardTapInvokeSetting(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  *(_QWORD *)this = &winrt::impl::heap_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 12,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 13,
    0LL);
  v3 = (wil::details *)*((_QWORD *)this + 13);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, v2);
  v4 = (wil::details *)*((_QWORD *)this + 12);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v2);
  if ( *((_QWORD *)this + 5) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref((unsigned int **)this + 5);
  v5 = *((_QWORD *)this + 1);
  while ( v5 >= 0 )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v5 - 1, v5);
    if ( v6 == v5 )
      goto LABEL_12;
  }
  winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v5));
LABEL_12:
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
