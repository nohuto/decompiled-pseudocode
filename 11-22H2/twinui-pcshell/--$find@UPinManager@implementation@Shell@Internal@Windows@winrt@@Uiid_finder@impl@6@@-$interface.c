/*
 * XREFs of ??$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUPinManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D8164
 * Callers:
 *     ??$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIPinManagerInterop3@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUPinManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x18024F3A8 (--$find@UPinManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6_ea_18024F3A8.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax

  if ( !(unsigned __int8)winrt::operator==(*a2, &winrt::impl::guid_v<IServiceProvider>) )
  {
    if ( (unsigned __int8)winrt::operator==(v2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
    {
      v8 = v5 + 32;
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(v4, &winrt::impl::guid_v<IInspectable>) )
        return v6;
      v8 = v5 + 40;
    }
    return v8 & -(__int64)(v5 != 0);
  }
  return (v3 + 24) & -(__int64)(v3 != 0);
}
