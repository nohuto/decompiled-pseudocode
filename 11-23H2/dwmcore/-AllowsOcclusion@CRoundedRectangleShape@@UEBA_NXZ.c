/*
 * XREFs of ?AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ @ 0x180038A60
 * Callers:
 *     <none>
 * Callees:
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180038A80 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 */

bool __fastcall CRoundedRectangleShape::AllowsOcclusion(CRoundedRectangleShape *this)
{
  return !CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)this + 2)
                                                                                                + 16LL));
}
