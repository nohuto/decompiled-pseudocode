/*
 * XREFs of ?CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1803999A4
 * Callers:
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18039DDC0 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18001FAC4 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x18039A658 (-GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetNormalDisplayNameFromAppId@ImmersiveAppHelpers@@YAJPEBGPEAPEAG@Z @ 0x1805E9F80 (-GetNormalDisplayNameFromAppId@ImmersiveAppHelpers@@YAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SearchAppDesktopExperienceView::CreateSearchAltTabProxyWindow(HWND *this)
{
  HWND lpParam; // rsi
  unsigned __int16 **v3; // r8
  int NormalDisplayNameFromAppId; // eax
  HWND Window; // rax
  HWND v6; // rax
  WNDCLASSEXW v7; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  LPCWSTR lpWindowName; // [rsp+D8h] [rbp+67h] BYREF

  lpParam = SearchAppDesktopExperienceView::GetHwnd((SearchAppDesktopExperienceView *)this);
  v7.cbSize = 80;
  memset_0(&v7.style, 0, 0x4CuLL);
  v7.style = 512;
  v7.lpfnWndProc = (WNDPROC)SearchAppDesktopExperienceView::s_SearchAltTabProxyWndProc;
  v7.hInstance = &_ImageBase;
  v7.lpszClassName = L"Shell_CortanaProxy";
  v7.cbWndExtra = 8;
  RegisterClassExW(&v7);
  lpWindowName = 0LL;
  NormalDisplayNameFromAppId = ImmersiveAppHelpers::GetNormalDisplayNameFromAppId(
                                 L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI",
                                 (const unsigned __int16 *)&lpWindowName,
                                 v3);
  if ( NormalDisplayNameFromAppId < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x904,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)NormalDisplayNameFromAppId);
  Window = CreateWindowExW(
             0,
             v7.lpszClassName,
             lpWindowName,
             0x8000000u,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0LL,
             0LL,
             &_ImageBase,
             lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    this + 30,
    Window);
  v6 = CreateWindowExW(
         0x200000u,
         v7.lpszClassName,
         lpWindowName,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         this[30],
         0LL,
         &_ImageBase,
         lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    this + 29,
    v6);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&lpWindowName);
}
