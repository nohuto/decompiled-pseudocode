/*
 * XREFs of ?GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA?AUBitmapSize@Imaging@Graphics@56@_N@Z @ 0x1802E843E
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18021C660 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D770 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetThumbnailSize(
        __int64 a1,
        int *a2,
        char a3)
{
  LONG WindowLongW; // edi
  LONG v7; // eax
  HWND v8; // rcx
  DWORD v9; // ebx
  HMONITOR v10; // rax
  __int32 bottom; // eax
  int v12; // eax
  HMONITOR v13; // rax
  int v14; // eax
  int v15; // r8d
  int v16; // edx
  int nNumerator; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v19[4]; // [rsp+24h] [rbp-55h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-51h] BYREF
  struct tagRECT v21; // [rsp+38h] [rbp-41h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-31h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+70h] [rbp-9h] BYREF

  *a2 = 0;
  a2[1] = 0;
  WindowLongW = GetWindowLongW(*(HWND *)(a1 + 56), -16);
  v7 = GetWindowLongW(*(HWND *)(a1 + 56), -20);
  v8 = *(HWND *)(a1 + 56);
  v9 = v7;
  Rect = 0LL;
  GetClientRect(v8, &Rect);
  v21 = 0LL;
  if ( AdjustWindowRectEx(&v21, WindowLongW, 0, v9) && GetWindowPlacement(*(HWND *)(a1 + 56), &wndpl) )
  {
    if ( (wndpl.flags & 2) != 0 && wndpl.showCmd == 2 )
    {
      v10 = MonitorFromRect(&wndpl.rcNormalPosition, 0);
      if ( v10 )
      {
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 36);
        if ( GetMonitorInfoW(v10, &mi) )
        {
          Rect = mi.rcWork;
          bottom = v21.bottom + _mm_srli_si128(*(__m128i *)(&mi + 20), 8).m128i_i32[1];
LABEL_8:
          Rect.bottom = bottom;
          goto LABEL_14;
        }
      }
    }
    else if ( ((wndpl.showCmd - 2) & 0xFFFFFFFA) == 0 && wndpl.showCmd != 3 && CopyRect(&Rect, &wndpl.rcNormalPosition) )
    {
      Rect.right += v21.left - v21.right;
      bottom = Rect.bottom - v21.bottom;
      goto LABEL_8;
    }
  }
  bottom = Rect.bottom;
LABEL_14:
  if ( a3 )
  {
    a2[1] = bottom - Rect.top;
    v12 = Rect.right - Rect.left;
LABEL_18:
    *a2 = v12;
    return a2;
  }
  v13 = MonitorFromWindow(0LL, 1u);
  if ( (unsigned int)GetDpiForMonitorInternal(v13, 0LL, &nNumerator, v19) )
  {
    v14 = MulDiv(375, nNumerator, 96);
    v15 = Rect.bottom - Rect.top;
    v16 = Rect.right - Rect.left;
    a2[1] = v14;
    v12 = MulDiv(v14, v16, v15);
    goto LABEL_18;
  }
  return a2;
}
