/*
 * XREFs of ??1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180591C58
 * Callers:
 *     ??_G?$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805921E0 (--_G-$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Interna.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAIXZ @ 0x180026348 (-subtract_reference@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundat.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEEC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher::~ImmersiveShellThreadDispatcher(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher *)((char *)this + 40);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(v3);
  winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v4, v5, v6);
}
