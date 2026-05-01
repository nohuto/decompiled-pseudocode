/*
 * XREFs of ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x180636ADC
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180637760 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x180033370 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1800333B4 (--$find@X@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$.c)
 *     ?Id@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800339A0 (-Id@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows.c)
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x180036228 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180092240 (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1802E79E0 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x180637DDC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 *     ?GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x180639E48 (-GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@U.c)
 *     ?GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x180639EB4 (-GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHW.c)
 *     ?HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid@6@_N@Z @ 0x180639F20 (-HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid.c)
 *     ?TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x18063A194 (-TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTabAndUpdateTimestamps(
        RTL_SRWLOCK *a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3,
        void (__fastcall ****a4)(_QWORD, __int64 *, __int64 *))
{
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rdi
  char IsEnabled; // al
  HWND TabProxyWindowOwnerWindow; // rbx
  _QWORD *Ptr; // rdi
  _QWORD *i; // rbx
  HWND TabProxyWindowHwnd; // rax
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF

  *(_QWORD *)&v16 = a2;
  v17[0] = a3;
  v8 = a1 + 77;
  AcquireSRWLockExclusive(a1 + 77);
  v17[2] = v8;
  if ( (PVOID)*std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                 (__int64)&a1[78],
                 &v16,
                 (__int64)v17) == a1[79].Ptr
    || (*(_QWORD *)&v16 = 0LL, winrt::Windows::Foundation::operator==(a4, &v16)) )
  {
    *(_QWORD *)a2 = 0LL;
    goto LABEL_18;
  }
  winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
    a4,
    &v18);
  v16 = v18;
  if ( winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTab(a1, a3, &v16) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl) )
    {
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1);
    }
    else
    {
      Ptr = a1[79].Ptr;
      for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncWindowTabDataModel(
          (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
          i[2]);
    }
  }
  v9 = std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
         (unsigned __int64)&a1[78],
         (const unsigned __int8 *)v17);
  v16 = v18;
  if ( (unsigned __int8)winrt::Windows::Internal::Shell::implementation::WindowData::TabProxyWindowExists(v9) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl);
    v16 = v18;
    if ( IsEnabled )
    {
      TabProxyWindowOwnerWindow = (HWND)winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowOwnerWindow(v9);
      if ( TabProxyWindowOwnerWindow != GetForegroundWindow() )
      {
LABEL_16:
        v16 = v18;
        winrt::Windows::Internal::Shell::implementation::WindowData::HideTabProxyWindowFromAltTab(v9, &v16);
        goto LABEL_17;
      }
    }
    else
    {
      TabProxyWindowOwnerWindow = (HWND)winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowOwnerWindow(v9);
    }
    v16 = v18;
    TabProxyWindowHwnd = (HWND)winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowHwnd(v9);
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
      (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
      TabProxyWindowHwnd,
      TabProxyWindowOwnerWindow);
    goto LABEL_16;
  }
LABEL_17:
  *(_QWORD *)a2 = *a4;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
LABEL_18:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return a2;
}
