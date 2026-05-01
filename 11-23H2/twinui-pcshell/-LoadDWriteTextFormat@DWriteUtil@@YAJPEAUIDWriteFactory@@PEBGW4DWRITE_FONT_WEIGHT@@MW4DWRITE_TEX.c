/*
 * XREFs of ?LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x180569798
 * Callers:
 *     ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x1802E1620 (-SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z.c)
 *     ?LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x180569948 (-LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@.c)
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x18057B520 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWriteUtil::LoadDWriteTextFormat(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        _QWORD *a8)
{
  _QWORD *v11; // r15
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, _DWORD, const WCHAR *, _QWORD **); // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, _DWORD, const WCHAR *, _QWORD **))(*(_QWORD *)a1 + 120LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a8);
  v13 = v12(a1, a2, 0LL, a3, 0, 5, LODWORD(a4), &LocaleName, &a8);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a8 + 24LL))(a8, a5);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a8 + 32LL))(a8, a6);
      v14 = v13;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a8 + 48LL))(a8, a7);
        v14 = v13;
        if ( v13 >= 0 )
        {
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a8);
          *v11 = a8;
          v14 = 0;
          goto LABEL_11;
        }
        v15 = 35LL;
      }
      else
      {
        v15 = 34LL;
      }
    }
    else
    {
      v15 = 33LL;
    }
  }
  else
  {
    v15 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"desktop\\internal\\shell\\inc\\private\\dwriteutil.h",
    (const char *)(unsigned int)v13);
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a8);
  return v14;
}
