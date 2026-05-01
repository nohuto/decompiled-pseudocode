/*
 * XREFs of ??$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewerHost@@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804C0458
 * Callers:
 *     ?CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C07B8 (-CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CScrollViewerHost@@QEAA@XZ @ 0x1804C0590 (--0CScrollViewerHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C0B60 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CScrollViewerHost,CScrollViewerHost,enum ScrollViewerHostFlags &,ScrollViewerHostMetrics const &,_MARGINS const &,RelativeMargins const &,unsigned int &,IMultitaskingViewElement * &,ISwitchThumbnailFactory * &>(
        CScrollViewerHost **a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  CScrollViewerHost *v12; // rax
  int v13; // esi
  CScrollViewerHost *v14; // rdi
  CScrollViewerHost *v16; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (CScrollViewerHost *)operator new(0x1E0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v12;
  if ( v12 )
  {
    v14 = CScrollViewerHost::CScrollViewerHost(v12);
    v16 = v14;
    v13 = CScrollViewerHost::RuntimeClassInitialize(v14, *a2, a3, a4, a5, *a6, *a7, *a8, 0LL);
    if ( v13 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(CScrollViewerHost *))(*(_QWORD *)v14 + 8LL))(v14);
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
