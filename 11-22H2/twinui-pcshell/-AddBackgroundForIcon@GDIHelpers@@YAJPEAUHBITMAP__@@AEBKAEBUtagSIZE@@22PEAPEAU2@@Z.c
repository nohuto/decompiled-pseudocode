/*
 * XREFs of ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1807418C4
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1807421B4 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x1805DA754 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GDIHelpers::AddBackgroundForIcon(
        HANDLE h,
        int *a2,
        LONG *a3,
        const struct tagSIZE *a4,
        const struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  HDC CompatibleDC; // rax
  HDC v10; // rdi
  unsigned int LastError; // esi
  HDC v12; // rax
  HDC hdcSrc; // rbx
  HGDIOBJ v14; // r13
  const char *v15; // r9
  HBITMAP v16; // rax
  struct tagSIZE v17; // rsi
  HGDIOBJ v18; // r15
  const struct tagRECT *v19; // r8
  int cx; // r9d
  int hDest; // r11d
  void *ppvBits; // [rsp+78h] [rbp-71h] BYREF
  _BYTE pv[4]; // [rsp+80h] [rbp-69h] BYREF
  int wSrc; // [rsp+84h] [rbp-65h]
  int hSrc; // [rsp+88h] [rbp-61h]
  RECT v28; // [rsp+A0h] [rbp-49h] BYREF
  BITMAPINFO pbmi; // [rsp+B0h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  CompatibleDC = CreateCompatibleDC(0LL);
  v10 = CompatibleDC;
  if ( CompatibleDC )
  {
    v12 = CreateCompatibleDC(CompatibleDC);
    hdcSrc = v12;
    if ( v12 )
    {
      v14 = SelectObject(v12, h);
      if ( GetObjectW(h, 32, pv) )
      {
        pbmi.bmiHeader.biSize = 44;
        memset(&pbmi.bmiHeader.biWidth, 0, 40);
        pbmi.bmiHeader.biWidth = *a3;
        pbmi.bmiHeader.biHeight = a3[1];
        *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
        pbmi.bmiHeader.biCompression = 0;
        v16 = CreateDIBSection(v10, &pbmi, 0, &ppvBits, 0LL, 0);
        v17 = (struct tagSIZE)v16;
        if ( v16 )
        {
          v18 = SelectObject(v10, v16);
          v28.left = (*a3 - a4->cx) / 2;
          v28.top = (a3[1] - a4->cy) / 2;
          v28.right = a4->cx + v28.left;
          v28.bottom = a4->cy + v28.top;
          GDIHelpers::FillRectARGB(v10, &v28, v19, *a2);
          cx = wSrc;
          if ( a5->cx < wSrc )
            cx = a5->cx;
          hDest = hSrc;
          if ( a5->cy < hSrc )
            hDest = a5->cy;
          GdiAlphaBlend(
            v10,
            (*a3 - cx) / 2,
            (a3[1] - hDest) / 2,
            cx,
            hDest,
            hdcSrc,
            0,
            0,
            wSrc,
            hSrc,
            (BLENDFUNCTION)33488896);
          *a6 = v17;
          LastError = 0;
          SelectObject(v10, v18);
        }
        else
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18D,
            (int)"shell\\inc\\GDIHelpers.h",
            (const char *)0x8007000ELL);
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x181,
                      (int)"shell\\inc\\GDIHelpers.h",
                      v15);
      }
      SelectObject(hdcSrc, v14);
    }
    else
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17B,
        (int)"shell\\inc\\GDIHelpers.h",
        (const char *)0x8007000ELL);
    }
    if ( hdcSrc )
      DeleteDC(hdcSrc);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (int)"shell\\inc\\GDIHelpers.h",
      (const char *)0x8007000ELL);
  }
  if ( v10 )
    DeleteDC(v10);
  return LastError;
}
