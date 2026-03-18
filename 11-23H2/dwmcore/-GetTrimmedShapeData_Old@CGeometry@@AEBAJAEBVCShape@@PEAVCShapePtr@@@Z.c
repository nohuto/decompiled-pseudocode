/*
 * XREFs of ?GetTrimmedShapeData_Old@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801196F4
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

__int64 __fastcall CGeometry::GetTrimmedShapeData_Old(CGeometry *this, const struct CShape *a2, struct CShapePtr *a3)
{
  int SimplifiedPathData; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CPathSegmentsShape *v9; // rax
  __int64 v10; // rcx
  CPathSegmentsShape *v11; // rsi
  unsigned int v13; // [rsp+20h] [rbp-E0h]
  struct CPathData *v14; // [rsp+30h] [rbp-D0h] BYREF
  struct CPathData *v15; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v16[400]; // [rsp+40h] [rbp-C0h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  CTrimPathOperation::CTrimPathOperation((CTrimPathOperation *)v16);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v15);
  SimplifiedPathData = CShape::GetSimplifiedPathData(a2, &v15);
  v8 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    v13 = 335;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v14);
  SimplifiedPathData = CTrimPathOperation::Trim(
                         (CTrimPathOperation *)v16,
                         v15,
                         *((float *)this + 22),
                         *((float *)this + 23),
                         *((float *)this + 24),
                         &v14);
  v8 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    v13 = 336;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, SimplifiedPathData, v13, 0LL);
    goto LABEL_10;
  }
  v9 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
  if ( v9 && (v11 = CPathSegmentsShape::CPathSegmentsShape(v9, v14)) != 0LL )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v11;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x153u, 0LL);
  }
LABEL_10:
  std::vector<unsigned char>::_Tidy((__int64)v16);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v15);
  return v8;
}
