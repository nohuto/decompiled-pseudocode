/*
 * XREFs of ?GetXamlType@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHUstruct_Windows_UI_Xaml_Interop_TypeName@23@PEAPEAX@Z @ 0x180046860
 * Callers:
 *     <none>
 * Callees:
 *     ?GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Microsoft@8@AEBUTypeName@Interop@Xaml@UI@78@@Z @ 0x1800468B4 (-GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Inte_ea_1800468B4.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *XamlType; // rax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  XamlType = (__int64 *)winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::GetXamlType(
                          (a1 - 32) & -(__int64)(a1 != 0),
                          v7,
                          a2);
  v5 = *XamlType;
  *XamlType = 0LL;
  *a3 = v5;
  if ( v7[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v7);
  return 0LL;
}
