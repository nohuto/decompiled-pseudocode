/*
 * XREFs of ?add_SearchBoxPlacementMarginChanged@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1801A24C0
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@2@@Z @ 0x1801A4104 (-add@-$event@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Founda.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost3>::add_SearchBoxPlacementMarginChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  try
  {
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>::add();
    *a3 = v5;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
