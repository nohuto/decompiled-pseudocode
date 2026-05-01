/*
 * XREFs of ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x1806E2174
 * Callers:
 *     ?DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806E20C0 (-DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPE.c)
 *     ?GetSharedBackgroundVisualHostFromSinkId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x1806E2820 (-GetSharedBackgroundVisualHostFromSinkId@-$produce@UThemeCoordinator@implementation@Themes@UI@In.c)
 *     ?OnIdleStateFlagsChanged@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1806E3210 (-OnIdleStateFlagsChanged@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJ.c)
 *     ?ShutdownHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAAXW4BackgroundIdentifier@34567@@Z @ 0x1806E39C8 (-ShutdownHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAAXW4Back.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x1806E0928 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V-$allocator@U.c)
 *     ?copy_ref@?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@AEAAXPEAUSharedDesktopBackgroundVisualHost@@@Z @ 0x1806E40F8 (-copy_ref@-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@AEAAXPEAUSharedDesktopBackground.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  bool v6; // bp
  RTL_SRWLOCK *v7; // rsi
  __int64 v8; // rdx
  _BYTE v10[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  *a2 = 0LL;
  v6 = 1;
  v7 = (RTL_SRWLOCK *)(a1 + 200);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 200));
  std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Find_lower_bound<unsigned __int64>(
    (__int64 *)(a1 + 232),
    (__int64)v10,
    &v13);
  v8 = v11;
  if ( *(_BYTE *)(v11 + 25) || a3 < *(_QWORD *)(v11 + 32) )
    v8 = *(_QWORD *)(a1 + 232);
  else
    v6 = v11 == *(_QWORD *)(a1 + 232);
  if ( v6 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x332,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
      (const char *)0x8000FFFFLL,
      1);
  winrt::com_ptr<SharedDesktopBackgroundVisualHost>::copy_ref(a2, *(_QWORD *)(v8 + 40));
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  return a2;
}
