/*
 * XREFs of ??1CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801AFEE8
 * Callers:
 *     ??1?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1801AFE7C (--1-$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::CloudPCComponent___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::CloudPCComponent____::_1_::dtor$1 @ 0x1802B45CF (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1802B45CF.c)
 *     ??_GCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1807058D0 (--_GCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFF3C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::~CloudPCComponent(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  std::_Ref_count_base *v2; // rcx

  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>((char *)this + 144);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 17);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>((char *)this + 112);
  if ( *((_QWORD *)this + 13) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::CloudPCComponent *)((char *)this + 104));
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
