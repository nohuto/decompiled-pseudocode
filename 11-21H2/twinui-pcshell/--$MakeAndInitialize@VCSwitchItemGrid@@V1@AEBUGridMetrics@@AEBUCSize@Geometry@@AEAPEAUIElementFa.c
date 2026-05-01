/*
 * XREFs of ??$MakeAndInitialize@VCSwitchItemGrid@@V1@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVCSwitchItemGrid@@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Z @ 0x1804BDB8C
 * Callers:
 *     ?CSwitchItemGrid_CreateInstance@@YAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BE29C (-CSwitchItemGrid_CreateInstance@@YAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSwitchItemGrid@@QEAA@XZ @ 0x1804BDDFC (--0CSwitchItemGrid@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@@Z @ 0x1804BF534 (-RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementF.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemGrid,CSwitchItemGrid,GridMetrics const &,Geometry::CSize const &,IElementFactory * &,ISwitchThumbnailFactory * &,ISwitchItemController * &,IObservableObjectArray * &>(
        CSwitchItemGrid **a1,
        const struct GridMetrics *a2,
        const struct Geometry::CSize *a3,
        struct IElementFactory **a4,
        struct ISwitchThumbnailFactory **a5,
        struct ISwitchItemController **a6,
        struct IObservableObjectArray **a7)
{
  CSwitchItemGrid *v11; // rax
  int v12; // esi
  CSwitchItemGrid *v13; // rdi
  CSwitchItemGrid *v15; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CSwitchItemGrid *)operator new(0x3B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v11;
  if ( v11 )
  {
    v13 = CSwitchItemGrid::CSwitchItemGrid(v11);
    v15 = v13;
    v12 = CSwitchItemGrid::RuntimeClassInitialize(v13, a2, a3, *a4, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
