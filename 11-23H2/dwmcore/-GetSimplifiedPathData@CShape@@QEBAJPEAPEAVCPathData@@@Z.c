/*
 * XREFs of ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x1800FB6CC
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x180119584 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 *     ?GetTrimmedShapeData_Old@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801196F4 (-GetTrimmedShapeData_Old@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015784 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathData(CShape *this, struct CPathData **a2)
{
  unsigned int v2; // ebx
  volatile signed __int64 *v3; // rdi
  __int64 (__fastcall *v6)(CShape *, struct CPathData **); // rbx
  int v7; // eax
  __int64 v8; // rcx
  struct CPathData *v9; // rax
  struct CPathData *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (volatile signed __int64 *)((char *)this + 8);
  v11 = 0LL;
  if ( !*((_QWORD *)this + 1) )
  {
    v6 = *(__int64 (__fastcall **)(CShape *, struct CPathData **))(*(_QWORD *)this + 104LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v11);
    v7 = v6(this, &v11);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x44Au, 0LL);
      goto LABEL_6;
    }
    if ( !_InterlockedCompareExchange64(v3, (signed __int64)v11, 0LL) )
      v11 = 0LL;
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v11, (__int64 *)v3);
  v9 = v11;
  v11 = 0LL;
  *a2 = v9;
LABEL_6:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v11);
  return v2;
}
