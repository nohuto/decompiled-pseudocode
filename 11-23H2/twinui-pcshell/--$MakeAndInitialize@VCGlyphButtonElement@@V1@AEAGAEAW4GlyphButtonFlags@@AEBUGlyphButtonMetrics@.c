/*
 * XREFs of ??$MakeAndInitialize@VCGlyphButtonElement@@V1@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlyphButtonElement@@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1802E4C04
 * Callers:
 *     ?CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E4D94 (-CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CGlyphButtonElement@@QEAA@XZ @ 0x180582E80 (--0CGlyphButtonElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CGlyphButtonElement@@QEAAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x1805834C4 (-RuntimeClassInitialize@CGlyphButtonElement@@QEAAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@I.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGlyphButtonElement,CGlyphButtonElement,unsigned short &,enum GlyphButtonFlags &,GlyphButtonMetrics const &,unsigned int &,WeakReference::IWeakReference * &,IDWriteTextFormat * &,ISwitchThumbnailFactory * &>(
        CGlyphButtonElement **a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  CGlyphButtonElement *v12; // rax
  int v13; // esi
  CGlyphButtonElement *v14; // rdi
  CGlyphButtonElement *v16; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (CGlyphButtonElement *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v12;
  if ( v12 )
  {
    v14 = CGlyphButtonElement::CGlyphButtonElement(v12);
    v16 = v14;
    v13 = CGlyphButtonElement::RuntimeClassInitialize(v14, *a2, *a3, a4, *a5, *a6, *a7, *a8, 0LL);
    if ( v13 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(CGlyphButtonElement *))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
