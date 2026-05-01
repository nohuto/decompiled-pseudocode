/*
 * XREFs of ?abi_GetRuntimeClassName@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1805B4C40
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805B3F70 (-GetRuntimeClassName@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell.c)
 *     ?GetRuntimeClassName@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805B3F90 (-GetRuntimeClassName@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapCo_ea_1805B3F90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::abi_GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 32LL))(*(_QWORD *)(a1 + 24));
  else
    return winrt::impl::root_implements<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::NonDelegatingGetRuntimeClassName(
             a1,
             a2);
}
