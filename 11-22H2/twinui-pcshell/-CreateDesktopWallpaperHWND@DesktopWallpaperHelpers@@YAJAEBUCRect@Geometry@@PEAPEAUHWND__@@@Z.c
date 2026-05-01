/*
 * XREFs of ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x180444604
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180445C20 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
        DesktopWallpaperHelpers *this,
        const struct Geometry::CRect *a2,
        HWND *a3)
{
  unsigned int Error; // ebx
  HWND Window; // rbx
  signed int v8; // eax
  unsigned int LastError; // edi
  const char *v10; // r9
  int X; // [rsp+20h] [rbp-79h]
  int v12; // [rsp+60h] [rbp-39h] BYREF
  int *v13; // [rsp+68h] [rbp-31h]
  int v14; // [rsp+70h] [rbp-29h]
  WNDCLASSEXW v15; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v17; // [rsp+108h] [rbp+6Fh] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)&v15.cbClsExtra = 0LL;
  memset(&v15.hIcon, 0, 32);
  v15.hIconSm = 0LL;
  v15.cbSize = 80;
  v15.style = 0x4000;
  v15.lpfnWndProc = DefWindowProcW;
  v15.hInstance = &_ImageBase;
  v15.lpszClassName = L"DesktopWallpaperManager";
  if ( RegisterClassExW(&v15) )
  {
    Error = 0;
    goto LABEL_3;
  }
  Error = ResultFromKnownLastError();
  if ( (int)(Error + 0x80000000) < 0 )
  {
LABEL_3:
    if ( Error != -2147023486 )
      goto LABEL_9;
    goto LABEL_4;
  }
  if ( Error != -2147023486 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
      (const char *)Error);
    return Error;
  }
LABEL_4:
  if ( FindWindowW(L"DesktopWallpaperManager", 0LL) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
      (const char *)0x8000FFFFLL,
      X);
LABEL_9:
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
  if ( !Window )
  {
    v8 = ResultFromKnownLastError();
    LastError = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
        (const char *)(unsigned int)v8);
      return LastError;
    }
  }
  v17 = 1;
  v12 = 17;
  v13 = &v17;
  v14 = 4;
  if ( !(unsigned int)SetWindowCompositionAttribute(Window, &v12) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3D,
                  (int)"pcshell\\private\\shell\\inc\\DesktopWallpaperHelpers.h",
                  v10);
    if ( Window )
      DestroyWindow(Window);
    return LastError;
  }
  ShowWindow(Window, 4);
  *(_QWORD *)a2 = Window;
  return 0LL;
}
