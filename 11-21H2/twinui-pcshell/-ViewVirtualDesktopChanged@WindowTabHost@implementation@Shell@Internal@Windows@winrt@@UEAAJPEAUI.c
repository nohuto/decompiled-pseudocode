/*
 * XREFs of ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x180098920
 * Callers:
 *     <none>
 * Callees:
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x18001D9FC (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180098A54 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@win.c)
 *     ?MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApplicationViewCollection@@PEAUIVirtualDesktopManagerInternal@@PEAUIApplicationView@@@Z @ 0x18057A56C (-MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApp.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ViewVirtualDesktopChanged(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64))
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rcx
  winrt::Windows::Internal::Shell::implementation::WindowData *v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 WindowForView; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+18h] BYREF

  WindowForView = (unsigned int)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  AcquireSRWLockShared((PSRWLOCK)this + 73);
  v11 = (RTL_SRWLOCK *)((char *)this + 584);
  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)&WindowForView + v4++) ^ (unsigned __int64)v5);
  while ( v4 < 8 );
  v6 = *(_QWORD *)(std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Find_last<unsigned __int64>(
                     (char *)this + 592,
                     v9,
                     &WindowForView,
                     v5)
                 + 8);
  if ( !v6 )
    v6 = *((_QWORD *)this + 75);
  if ( v6 != *((_QWORD *)this + 75) )
  {
    v8 = (winrt::Windows::Internal::Shell::implementation::WindowData *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                                                          (unsigned __int64)this + 592,
                                                                          (const unsigned __int8 *)&WindowForView);
    winrt::Windows::Internal::Shell::implementation::WindowData::MoveProxyWindowsToDesktop(
      v8,
      *((struct IApplicationViewCollection **)this + 19),
      *((struct IVirtualDesktopManagerInternal **)this + 55),
      (struct IApplicationView *)a2);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return 0LL;
}
