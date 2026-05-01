/*
 * XREFs of ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x1804C0080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804BD8FC (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??0GridLayoutFactory@@QEAA@AEBUGridMetrics@@AEBUCSize@Geometry@@AEBUCRect@3@PEAUIObjectArray@@@Z @ 0x1804BDF34 (--0GridLayoutFactory@@QEAA@AEBUGridMetrics@@AEBUCSize@Geometry@@AEBUCRect@3@PEAUIObjectArray@@@Z.c)
 *     ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x1804D0E6C (-LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z.c)
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D10CC (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804D1838 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSwitchItemGrid::v_LayoutChildren(CSwitchItemGrid *this)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int (__fastcall *v6)(CSwitchItemGrid *, struct IObjectArray **); // rbx
  __int64 v7; // rax
  GridLayout *v8; // rbx
  const struct Geometry::CSize *v9; // rax
  int v10; // eax
  struct IObjectArray *v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+5Ch] [rbp-A4h]
  int v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+64h] [rbp-9Ch]
  _BYTE v19[536]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+288h] [rbp+188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 15);
    v15 = *((_DWORD *)this + 14);
    v16 = v3;
    v17 = v15 + 1;
    v18 = v3 + 1;
    (*(void (__fastcall **)(__int64, int *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v15, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 232) )
  {
    v11 = (struct IObjectArray *)*((_QWORD *)this + 107);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v14, (__int64 *)&v11, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
    v4 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
    v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
    v15 = 0;
    v16 = 0;
    v17 = v5;
    v18 = v4;
    if ( v5 > 0 && v4 > 0 )
    {
      v11 = 0LL;
      v6 = *(int (__fastcall **)(CSwitchItemGrid *, struct IObjectArray **))(*(_QWORD *)this + 56LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
      if ( v6(this, &v11) >= 0 )
      {
        v7 = *((_QWORD *)this + 103);
        if ( v7 )
        {
          v8 = (CSwitchItemGrid *)((char *)this + 768);
        }
        else
        {
          GridLayoutFactory::GridLayoutFactory(
            (GridLayoutFactory *)v19,
            (CSwitchItemGrid *)((char *)this + 256),
            (CSwitchItemGrid *)((char *)this + 848),
            (const struct Geometry::CRect *)&v15,
            v11);
          v8 = (CSwitchItemGrid *)((char *)this + 768);
          v9 = (const struct Geometry::CSize *)GridLayoutFactory::_CalculateRowSize(v19, v13);
          v10 = GridLayoutFactory::LayoutItems((GridLayoutFactory *)v19, v9, (CSwitchItemGrid *)((char *)this + 768));
          if ( v10 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x28F,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
              (const char *)(unsigned int)v10);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
          v7 = *((_QWORD *)this + 103);
        }
        if ( v7 )
          GridLayout::LayoutRows(v8, (const struct Geometry::CRect *)&v15);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
    }
    v12 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10,
                  &v12) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12);
    }
    *((_BYTE *)this + 940) = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v14);
  }
}
