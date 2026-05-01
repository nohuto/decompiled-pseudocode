/*
 * XREFs of ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x18057AA90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805782A8 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??0GridLayoutFactory@@QEAA@AEBUGridMetrics@@AEBUCSize@Geometry@@AEBUCRect@3@PEAUIObjectArray@@@Z @ 0x1805788FC (--0GridLayoutFactory@@QEAA@AEBUGridMetrics@@AEBUCSize@Geometry@@AEBUCRect@3@PEAUIObjectArray@@@Z.c)
 *     ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x180588778 (-LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z.c)
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1805889D8 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x18058914C (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSwitchItemGrid::v_LayoutChildren(CSwitchItemGrid *this)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int (__fastcall *v6)(CSwitchItemGrid *, struct IObjectArray **); // rbx
  const struct Geometry::CSize *v7; // rax
  int v8; // eax
  struct IObjectArray *v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h]
  int v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+64h] [rbp-9Ch]
  _BYTE v17[536]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+288h] [rbp+188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 15);
    v13 = *((_DWORD *)this + 14);
    v14 = v3;
    v15 = v13 + 1;
    v16 = v3 + 1;
    (*(void (__fastcall **)(__int64, int *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v13, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 232) )
  {
    v9 = (struct IObjectArray *)*((_QWORD *)this + 107);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v12, (__int64 *)&v9, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
    v4 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
    v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
    v13 = 0;
    v14 = 0;
    v15 = v5;
    v16 = v4;
    if ( v5 > 0 && v4 > 0 )
    {
      v9 = 0LL;
      v6 = *(int (__fastcall **)(CSwitchItemGrid *, struct IObjectArray **))(*(_QWORD *)this + 56LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
      if ( v6(this, &v9) >= 0 )
      {
        if ( *((_QWORD *)this + 103) )
          goto LABEL_11;
        GridLayoutFactory::GridLayoutFactory(
          (GridLayoutFactory *)v17,
          (CSwitchItemGrid *)((char *)this + 256),
          (CSwitchItemGrid *)((char *)this + 848),
          (const struct Geometry::CRect *)&v13,
          v9);
        v7 = (const struct Geometry::CSize *)GridLayoutFactory::_CalculateRowSize(v17, v11);
        v8 = GridLayoutFactory::LayoutItems((GridLayoutFactory *)v17, v7, (CSwitchItemGrid *)((char *)this + 768));
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x28F,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
            (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
        if ( *((_QWORD *)this + 103) )
LABEL_11:
          GridLayout::LayoutRows((CSwitchItemGrid *)((char *)this + 768), (const struct Geometry::CRect *)&v13);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
    }
    v10 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10,
                  &v10) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
    }
    *((_BYTE *)this + 940) = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v12);
  }
}
