/*
 * XREFs of ?SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x18039DC68
 * Callers:
 *     ?s_SearchAltTabProxyWndProc@SearchAppDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18039FB50 (-s_SearchAltTabProxyWndProc@SearchAppDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18022CC64 (--1-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integr.c)
 *     ?HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180387724 (-HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1805EDE30 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail(HWND hWnd)
{
  HMONITOR v2; // rax
  unsigned int DpiForMonitor; // ebx
  __int64 v4; // rdx
  struct tagSIZE v5; // r9
  int ImmersiveIcon; // eax
  HICON v7; // rax
  unsigned int v9; // [rsp+28h] [rbp-30h]
  ImmersiveIcons *v10; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  POINT pt; // [rsp+68h] [rbp+10h] BYREF
  char v13; // [rsp+70h] [rbp+18h] BYREF
  HBITMAP v14; // [rsp+78h] [rbp+20h] BYREF

  pt = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( !v2 )
  {
    DpiForMonitor = -2147418113;
    v4 = 2377LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)DpiForMonitor);
    return DpiForMonitor;
  }
  DpiForMonitor = GetDpiForMonitor(v2, 0LL, &pt, &v13);
  if ( (DpiForMonitor & 0x80000000) != 0 )
  {
    v4 = 2380LL;
    goto LABEL_3;
  }
  LODWORD(v10) = GetSystemMetrics(11);
  HIDWORD(v10) = GetSystemMetrics(12);
  v14 = 0LL;
  LOBYTE(v9) = 0;
  ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                    v10,
                    (struct tagSIZE)v10,
                    (struct tagSIZE)v10,
                    v5,
                    pt.x,
                    v9,
                    (bool)L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI",
                    (const unsigned __int16 *)&v14,
                    (HBITMAP *)v10);
  DpiForMonitor = ImmersiveIcon;
  if ( ImmersiveIcon >= 0 )
  {
    v7 = SearchAppDesktopExperienceView::HICONFromBitmap(v14);
    if ( v7 )
      SendMessageW(hWnd, 0x80u, 0LL, (LPARAM)v7);
    DpiForMonitor = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x950,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
  }
  wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>((void **)&v14);
  return DpiForMonitor;
}
