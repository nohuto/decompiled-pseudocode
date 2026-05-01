/*
 * XREFs of ?CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E4D94
 * Callers:
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x1802E2F8A (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 *     ?RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x18058B764 (-RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButton.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCGlyphButtonElement@@V1@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlyphButtonElement@@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1802E4C04 (--$MakeAndInitialize@VCGlyphButtonElement@@V1@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CGlyphButtonElement_CreateInstance(
        unsigned __int16 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        CGlyphButtonElement *a9)
{
  CGlyphButtonElement *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int16 v16; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+28h] BYREF
  int v18; // [rsp+78h] [rbp+38h] BYREF

  v18 = a4;
  v17 = a2;
  v16 = a1;
  v10 = a9;
  *(_QWORD *)a9 = 0LL;
  a9 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a9);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CGlyphButtonElement,CGlyphButtonElement,unsigned short &,enum GlyphButtonFlags &,GlyphButtonMetrics const &,unsigned int &,WeakReference::IWeakReference * &,IDWriteTextFormat * &,ISwitchThumbnailFactory * &>(
          &a9,
          &v16,
          &v17,
          a3,
          &v18,
          &a5,
          &a6,
          &a7);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 210LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_6;
  }
  v11 = (**(__int64 (__fastcall ***)(CGlyphButtonElement *, GUID *, CGlyphButtonElement *))a9)(
          a9,
          &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
          v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 211LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a9);
  return v12;
}
