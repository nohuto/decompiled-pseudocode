/*
 * XREFs of ??1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18065F3AC
 * Callers:
 *     ??_G?$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18065F930 (--_G-$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Interna.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher::~ImmersiveShellThreadDispatcher(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher *this,
        volatile int *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rcx
  __int64 v4; // rcx

  v3 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher *)((char *)this + 40);
  if ( *(_QWORD *)v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
      v4,
      a2);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
