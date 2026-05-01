/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEBUCSize@Geometry@@AEAN@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewDragVisual@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEBUCSize@Geometry@@AEAN@Z @ 0x1804DD588
 * Callers:
 *     ?MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@NAEBU_GUID@@PEAPEAX@Z @ 0x1804DD998 (-MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingVie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0MultitaskingViewDragVisual@@QEAA@XZ @ 0x1804DD6A8 (--0MultitaskingViewDragVisual@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VMultitaskingViewDragVisual@@@WRL@Microsoft@@QEAAXPEAVMultitaskingViewDragVisual@@@Z @ 0x1804DD7FC (-Attach@-$ComPtr@VMultitaskingViewDragVisual@@@WRL@Microsoft@@QEAAXPEAVMultitaskingViewDragVisua.c)
 *     ?RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@N@Z @ 0x1804DDAE8 (-RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMulti.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewDragVisual,MultitaskingViewDragVisual,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,Geometry::CSize const &,double &>(
        MultitaskingViewDragVisual **a1,
        struct ISwitchThumbnailFactory **a2,
        struct IMultitaskingViewElement **a3,
        struct IMultitaskingViewElement **a4,
        struct Geometry::CSize *a5,
        double *a6)
{
  MultitaskingViewDragVisual *v10; // rax
  int v11; // esi
  MultitaskingViewDragVisual *v12; // rax
  struct IMultitaskingViewElement *v13; // r9
  MultitaskingViewDragVisual *v14; // rbx
  MultitaskingViewDragVisual *v16; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (MultitaskingViewDragVisual *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v10;
  if ( v10 )
  {
    v12 = MultitaskingViewDragVisual::MultitaskingViewDragVisual(v10);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<MultitaskingViewDragVisual>::Attach(&v16, v12);
    v13 = *a4;
    v14 = v16;
    v11 = MultitaskingViewDragVisual::RuntimeClassInitialize(v16, *a2, *a3, v13, a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(MultitaskingViewDragVisual *))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
