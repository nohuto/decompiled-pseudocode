/*
 * XREFs of ??0CContainerVectorShape@@QEAA@PEAVCComposition@@@Z @ 0x180043BAC
 * Callers:
 *     ??0CShapeTree@@QEAA@PEAVCComposition@@@Z @ 0x180042024 (--0CShapeTree@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x180043C74 (--0CVectorShape@@IEAA@PEAVCComposition@@@Z.c)
 */

CContainerVectorShape *__fastcall CContainerVectorShape::CContainerVectorShape(
        CContainerVectorShape *this,
        struct CComposition *a2,
        int a3)
{
  CContainerVectorShape *v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  CContainerVectorShape *result; // rax

  if ( a3 )
  {
    *((_QWORD *)this + 8) = &CContainerVectorShape::`vbtable'{for `CContent'};
    *((_QWORD *)this + 20) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 19) = &IContent::`vftable'{for `IContent'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 4LL) + 160) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  }
  CVectorShape::CVectorShape(this, a2);
  v4 = *((_QWORD *)v3 + 8);
  *(_QWORD *)v3 = &CContainerVectorShape::`vftable';
  *(_QWORD *)((char *)v3 + *(int *)(v4 + 4) + 64) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v3 + *(int *)(*((_QWORD *)v3 + 8) + 8LL) + 64) = &CContainerVectorShape::`vftable'{for `IContent'};
  v5 = *(int *)(*((_QWORD *)v3 + 8) + 4LL);
  *(_DWORD *)((char *)v3 + v5 + 60) = v5 - 72;
  v6 = *(int *)(*((_QWORD *)v3 + 8) + 8LL);
  result = v3;
  *(_DWORD *)((char *)v3 + v6 + 60) = v6 - 88;
  *((_QWORD *)v3 + 13) = 0LL;
  *((_QWORD *)v3 + 14) = 0LL;
  *((_QWORD *)v3 + 15) = 0LL;
  return result;
}
