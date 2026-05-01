/*
 * XREFs of ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x18036EBA4
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18036FF80 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E2710 (--1-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$integr.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
        DesktopWallpaperHelpers *this,
        const struct Geometry::CRect *a2,
        HWND *a3)
{
  signed int Error; // eax
  unsigned int LastError; // ebx
  HWND Window; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  signed int v11; // eax
  const char *v12; // r9
  int X; // [rsp+20h] [rbp-79h]
  int v14; // [rsp+60h] [rbp-39h] BYREF
  int *v15; // [rsp+68h] [rbp-31h]
  int v16; // [rsp+70h] [rbp-29h]
  WNDCLASSEXW v17; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v19; // [rsp+108h] [rbp+6Fh] BYREF
  HWND v20; // [rsp+110h] [rbp+77h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)&v17.cbClsExtra = 0LL;
  memset(&v17.hIcon, 0, 32);
  v17.hIconSm = 0LL;
  v17.cbSize = 80;
  v17.style = 0x4000;
  v17.lpfnWndProc = DefWindowProcW;
  v17.hInstance = &_ImageBase;
  v17.lpszClassName = L"DesktopWallpaperManager";
  if ( !RegisterClassExW(&v17) )
  {
    Error = ResultFromKnownLastError();
    LastError = Error;
    if ( Error < 0 )
    {
      if ( Error != -2147023486 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20,
          (__int64)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
          (const char *)(unsigned int)Error);
        return LastError;
      }
      if ( FindWindowW(L"DesktopWallpaperManager", 0LL) )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          43LL,
          (__int64)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
          (const char *)0x8000FFFFLL,
          X);
    }
  }
  Window = CreateWindowExW(
             0x280080u,
             L"DesktopWallpaperManager",
             0LL,
             0x80880000,
             *(_DWORD *)this,
             *((_DWORD *)this + 1),
             *((_DWORD *)this + 2) - *(_DWORD *)this,
             *((_DWORD *)this + 3) - *((_DWORD *)this + 1),
             0LL,
             0LL,
             &_ImageBase,
             0LL);
  v20 = Window;
  if ( !Window )
  {
    v11 = ResultFromKnownLastError();
    LastError = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
        (const char *)(unsigned int)v11);
LABEL_13:
      wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(&v20);
      return LastError;
    }
  }
  v19 = 1;
  v14 = 17;
  v15 = &v19;
  v16 = 4;
  if ( !(unsigned int)SetWindowCompositionAttribute(Window, &v14, v9, v10) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3D,
                  (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
                  v12);
    goto LABEL_13;
  }
  ShowWindow(Window, 4);
  v20 = 0LL;
  *(_QWORD *)a2 = Window;
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(&v20);
  return 0LL;
}
