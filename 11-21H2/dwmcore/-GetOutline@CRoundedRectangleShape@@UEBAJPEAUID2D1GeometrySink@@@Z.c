/*
 * XREFs of ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800B8000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x180062A40 (-GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800865D4 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800B6188 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetOutline(CRoundedRectangleShape *this, struct ID2D1GeometrySink *a2)
{
  unsigned int v2; // ebx
  CShape *v3; // r8
  struct ID2D1GeometrySink *v4; // r9
  int Outline; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)) )
  {
    Outline = CShape::GetOutline(v3, v4);
    v2 = Outline;
    if ( Outline < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, Outline, 0x104u);
  }
  else
  {
    CRoundedRectangleShape::AddNonIntersectedD2DGeometry(v3, v4);
  }
  return v2;
}
