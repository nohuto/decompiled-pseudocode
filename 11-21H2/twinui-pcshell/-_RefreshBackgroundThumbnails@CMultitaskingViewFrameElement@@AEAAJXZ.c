/*
 * XREFs of ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1804C3DC0
 * Callers:
 *     ?RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C2FC0 (-RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18030318C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1804C1EB0 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804C3BC4 (-_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPE.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x1804C3C24 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 *     ?_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1804C3CFC (-_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x1804C4098 (-_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewFrameElement::_RefreshBackgroundThumbnails(CMultitaskingViewFrameElement *this)
{
  __int64 *v2; // rdi
  const char *v3; // r9
  int WallpaperSrcRect; // ebx
  __int64 v6; // rdx
  int DesktopBackgroundThumbnail; // eax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD); // r11
  struct IDCompThumbnail *v10; // rdx
  __int64 v11; // rbx
  struct IDCompThumbnail *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct IDCompThumbnail *v15; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v16; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v18; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = (__int64 *)((char *)this + 504);
  if ( *((_QWORD *)this + 63) )
  {
    Rect = 0LL;
    v16 = 0LL;
    if ( !GetWindowRect(*((HWND *)this + 59), &Rect) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x33F,
               (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
               v3);
    WallpaperSrcRect = CMultitaskingViewFrameElement::_GetWallpaperSrcRect((HWND *)this, &Rect, &v16);
    if ( WallpaperSrcRect < 0 )
    {
      v6 = 832LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)WallpaperSrcRect);
      return (unsigned int)WallpaperSrcRect;
    }
    if ( !Geometry::operator==(&v16, (_DWORD *)this + 138) )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v15);
      DesktopBackgroundThumbnail = CMultitaskingViewFrameElement::_CreateDesktopBackgroundThumbnail(
                                     this,
                                     (const struct Geometry::CRect *)&v16,
                                     (const struct tagSIZE *)&v15);
      WallpaperSrcRect = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v8 = 836LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)DesktopBackgroundThumbnail);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v15);
        return (unsigned int)WallpaperSrcRect;
      }
      DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64, _QWORD))(*(_QWORD *)v15 + 152LL))(
                                     v15,
                                     *v2,
                                     0LL);
      WallpaperSrcRect = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v8 = 839LL;
        goto LABEL_15;
      }
      v9 = *(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL);
      v18.left = v16.left - Rect.left;
      v18.right = v16.right - Rect.left;
      v18.top = v16.top - Rect.top;
      v18.bottom = v16.bottom - Rect.top;
      DesktopBackgroundThumbnail = v9(v15, &v18, 0LL, 0LL);
      WallpaperSrcRect = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v8 = 840LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v2, (__int64 *)&v15);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v15);
    }
  }
  v10 = (struct IDCompThumbnail *)*((_QWORD *)this + 64);
  if ( v10 )
  {
    if ( *((_QWORD *)this + 34) )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 65);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 64);
      v11 = *((_QWORD *)this + 67);
      v12 = (struct IDCompThumbnail *)*((_QWORD *)this + 66);
      CMultitaskingViewFrameElement::_GetContentLocation((__int64)this, &v18, (_DWORD *)this + 14);
      WallpaperSrcRect = CMultitaskingViewFrameElement::CreateContentDimmingLayerThumbnail(
                           (__int64)this,
                           v13,
                           v12,
                           v11,
                           (char *)this + 512,
                           (char *)this + 520);
      if ( WallpaperSrcRect < 0 )
      {
        v6 = 855LL;
        goto LABEL_6;
      }
      v10 = (struct IDCompThumbnail *)*((_QWORD *)this + 64);
    }
    WallpaperSrcRect = CMultitaskingViewFrameElement::_SetContentThumbnailRects(
                         this,
                         v10,
                         *((struct IDCompThumbnail **)this + 65));
    if ( WallpaperSrcRect < 0 )
    {
      v6 = 857LL;
      goto LABEL_6;
    }
  }
  v14 = *((_QWORD *)this + 68);
  if ( v14 )
  {
    WallpaperSrcRect = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
                         v14,
                         (char *)this + 56,
                         0LL,
                         0LL);
    if ( WallpaperSrcRect < 0 )
    {
      v6 = 862LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
