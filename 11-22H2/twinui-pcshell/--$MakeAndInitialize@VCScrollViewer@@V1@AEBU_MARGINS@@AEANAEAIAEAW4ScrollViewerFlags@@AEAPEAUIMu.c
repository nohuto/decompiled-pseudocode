/*
 * XREFs of ??$MakeAndInitialize@VCScrollViewer@@V1@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewer@@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x18058BEA8
 * Callers:
 *     ?CScrollViewer_CreateInstance@@YAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x18058C4A8 (-CScrollViewer_CreateInstance@@YAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElem.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CScrollViewer@@QEAA@XZ @ 0x18058C3A4 (--0CScrollViewer@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCScrollViewer@@@WRL@Microsoft@@QEAAXPEAVCScrollViewer@@@Z @ 0x18058C464 (-Attach@-$ComPtr@VCScrollViewer@@@WRL@Microsoft@@QEAAXPEAVCScrollViewer@@@Z.c)
 *     ?RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x18058C9D8 (-RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaski.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CScrollViewer,CScrollViewer,_MARGINS const &,double &,unsigned int &,enum ScrollViewerFlags &,IMultitaskingViewElement * &,ISwitchThumbnailFactory * &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  CScrollViewer *v10; // rax
  int v11; // esi
  CScrollViewer *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CScrollViewer *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CScrollViewer::CScrollViewer(v10);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<CScrollViewer>::Attach(&v16, v12);
    v13 = *a4;
    v14 = v16;
    v11 = CScrollViewer::RuntimeClassInitialize(v16, a2, *a7, v13, *a5, *a6, *a7);
    if ( v11 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
