/*
 * XREFs of ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x180119584
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059ED0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x1800158EC (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800E9498 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x1800F0EB4 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x1800FB6CC (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x1800FB8A0 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 */

__int64 __fastcall CGeometry::GetTrimmedShapeData(CGeometry *this, CShape **a2, struct CShapePtr *a3)
{
  unsigned int v4; // edi
  CShape *v7; // rbx
  int SimplifiedPathData; // eax
  __int64 v9; // rcx
  CPathSegmentsShape *v10; // rax
  __int64 v11; // rcx
  CPathSegmentsShape *v12; // rbx
  unsigned int v14; // [rsp+20h] [rbp-E0h]
  struct CPathData *v15; // [rsp+30h] [rbp-D0h] BYREF
  struct CPathData *v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[400]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0;
  v16 = 0LL;
  v15 = 0LL;
  CTrimPathOperation::CTrimPathOperation((CTrimPathOperation *)v17);
  v7 = *a2;
  if ( !v7 )
    goto LABEL_11;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v16);
  SimplifiedPathData = CShape::GetSimplifiedPathData(v7, &v16);
  v4 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    v14 = 310;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v15);
  SimplifiedPathData = CTrimPathOperation::Trim(
                         (CTrimPathOperation *)v17,
                         v16,
                         *((float *)this + 22),
                         *((float *)this + 23),
                         *((float *)this + 24),
                         &v15);
  v4 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    v14 = 311;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, SimplifiedPathData, v14, 0LL);
    goto LABEL_11;
  }
  v10 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
  if ( v10 && (v12 = CPathSegmentsShape::CPathSegmentsShape(v10, v15)) != 0LL )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v12;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x13Au, 0LL);
  }
LABEL_11:
  std::vector<unsigned char>::_Tidy((__int64)v17);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v16);
  return v4;
}
