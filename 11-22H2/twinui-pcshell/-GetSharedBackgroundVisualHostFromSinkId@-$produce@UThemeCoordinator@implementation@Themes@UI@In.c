/*
 * XREFs of ?GetSharedBackgroundVisualHostFromSinkId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x1806E2820
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??$as@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualHost@@$0A@@impl@winrt@@YA?AUISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@1@PEAUSharedDesktopBackgroundVisualHost@@@Z @ 0x1806E0B18 (--$as@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackground.c)
 *     ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x1806E2174 (-GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator>::GetSharedBackgroundVisualHostFromSinkId(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  volatile __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = (a1 - 24) & -(__int64)(a1 != 0);
  try
  {
    winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId(v4, &v6, a2);
    winrt::impl::as<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,SharedDesktopBackgroundVisualHost,0>(
      &v7,
      v6);
    if ( v6 )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v6);
    *a3 = v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
