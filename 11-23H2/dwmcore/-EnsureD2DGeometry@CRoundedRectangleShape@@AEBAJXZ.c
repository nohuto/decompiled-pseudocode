/*
 * XREFs of ?EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ @ 0x1800362A8
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180035FB0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x180035DC4 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180038A80 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800CF4A0 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CRoundedRectangleShape::EnsureD2DGeometry(CRoundedRectangleShape *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  struct ID2D1Geometry *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(v3 + 72) )
  {
    v10 = 0LL;
    if ( CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(v3 + 16)) )
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v10);
      v8 = CRoundedRectangleShape::CreateIntersectedD2DGeometry(this, &v10);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xDCu, 0LL);
        goto LABEL_5;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v10);
      v4 = CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(this, &v10);
      v2 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xE0u, 0LL);
        goto LABEL_5;
      }
    }
    v6 = -(__int64)(_InterlockedCompareExchange64(
                      (volatile signed __int64 *)(*((_QWORD *)this + 2) + 72LL),
                      (signed __int64)v10,
                      0LL) != 0);
    v10 = (struct ID2D1Geometry *)(v6 & (unsigned __int64)v10);
LABEL_5:
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v10);
  }
  return v2;
}
