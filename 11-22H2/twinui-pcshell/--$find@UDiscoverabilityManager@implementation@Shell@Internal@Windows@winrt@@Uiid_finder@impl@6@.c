/*
 * XREFs of ??$find@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUDiscoverabilityManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1806F7EA0
 * Callers:
 *     ??$find@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIWindowSnappingEvents@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUDiscoverabilityManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1806F7F10 (--$find@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@Uiid_f_ea_1806F7F10.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r9

  if ( winrt::operator==(*a2, &winrt::impl::guid_v<IServiceProvider>) )
    return (v3 + 32) & -(__int64)(v3 != 0);
  if ( winrt::operator==(v2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
  {
    v7 = v6 + 40;
    return v7 & -(__int64)(v6 != 0);
  }
  if ( winrt::operator==(v5, &winrt::impl::guid_v<IInspectable>) )
  {
    v7 = v6 + 48;
    return v7 & -(__int64)(v6 != 0);
  }
  return v8;
}
