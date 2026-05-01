/*
 * XREFs of ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x18048223C
 * Callers:
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x180487804 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18004418C (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x180483068 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetNormalDisplayNameFromAppId@ImmersiveAppHelpers@@YAJPEBGPEAPEAG@Z @ 0x1807411C0 (-GetNormalDisplayNameFromAppId@ImmersiveAppHelpers@@YAJPEBGPEAPEAG@Z.c)
 */

void __fastcall CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow(HWND *this)
{
  HWND lpParam; // rsi
  void **v3; // rax
  unsigned __int16 **v4; // r8
  int NormalDisplayNameFromAppId; // eax
  HWND Window; // rax
  HWND v7; // rax
  WNDCLASSEXW v8; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  LPCWSTR lpWindowName; // [rsp+D8h] [rbp+67h] BYREF

  lpParam = CortanaDesktopExperienceView::GetHwnd((CortanaDesktopExperienceView *)this);
  v8.cbSize = 80;
  memset_0(&v8.style, 0, 0x4CuLL);
  v8.style = 512;
  v8.lpfnWndProc = (WNDPROC)CortanaDesktopExperienceView::s_CortanaAltTabProxyWndProc;
  v8.hInstance = &_ImageBase;
  v8.lpszClassName = L"Shell_CortanaProxy";
  v8.cbWndExtra = 8;
  RegisterClassExW(&v8);
  lpWindowName = 0LL;
  v3 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&lpWindowName);
  NormalDisplayNameFromAppId = ImmersiveAppHelpers::GetNormalDisplayNameFromAppId(
                                 L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
                                 (const unsigned __int16 *)v3,
                                 v4);
  if ( NormalDisplayNameFromAppId < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBAB,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)NormalDisplayNameFromAppId);
  Window = CreateWindowExW(
             0,
             v8.lpszClassName,
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
    this + 35,
    Window);
  v7 = CreateWindowExW(
         0x200000u,
         v8.lpszClassName,
         lpWindowName,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         this[35],
         0LL,
         &_ImageBase,
         lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    this + 34,
    v7);
  if ( lpWindowName )
    CoTaskMemFree((LPVOID)lpWindowName);
}
