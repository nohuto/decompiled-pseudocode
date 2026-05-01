/*
 * XREFs of ??1XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1804FD118
 * Callers:
 *     ??_EXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1804FD1E0 (--_EXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::~XamlApplication_WASDK(
        winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 9);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  if ( *((_QWORD *)this + 7) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK *)((char *)this + 56));
  if ( *((_QWORD *)this + 6) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK *)((char *)this + 48));
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::~root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>((__int64)this);
}
