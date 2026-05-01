/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU2@AEAPEAU2@AEAPEAU2@AEAPEAUIAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU3@55AEAPEAUIAnimationCoordinator@@@Z @ 0x18057BF38
 * Callers:
 *     ?CMultitaskingViewFrameElement_CreateInstance@@YAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@PEAPEAU5@@Z @ 0x18057C6C0 (-CMultitaskingViewFrameElement_CreateInstance@@YAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEv.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewFrameElement@@QEAA@XZ @ 0x18057C13C (--0CMultitaskingViewFrameElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x18057DA64 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewFrameElement,IMultitaskingViewElement,FrameMetrics const &,HWND__ * &,AsyncFrameEvents const &,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IAnimationCoordinator * &>(
        _QWORD *a1,
        const struct FrameMetrics *a2,
        HWND *a3,
        const struct AsyncFrameEvents *a4,
        struct ISwitchThumbnailFactory **a5,
        struct IMultitaskingViewElement **a6,
        struct IMultitaskingViewElement **a7,
        struct IMultitaskingViewElement **a8,
        struct IAnimationCoordinator **a9)
{
  CMultitaskingViewFrameElement *v13; // rax
  int v14; // esi
  CMultitaskingViewFrameElement *v15; // rbx

  *a1 = 0LL;
  v13 = (CMultitaskingViewFrameElement *)operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
  {
    v15 = CMultitaskingViewFrameElement::CMultitaskingViewFrameElement(v13);
    v14 = CMultitaskingViewFrameElement::RuntimeClassInitialize(v15, a2, *a3, a4, *a5, *a6, *a7, *a8, *a9);
    if ( v14 >= 0 )
      v14 = (**(__int64 (__fastcall ***)(CMultitaskingViewFrameElement *, GUID *, _QWORD *))v15)(
              v15,
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              a1);
    if ( v15 )
      (*(void (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
