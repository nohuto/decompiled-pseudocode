/*
 * XREFs of ?IsFlattenedShape@SharedData@CRoundedRectangleShape@@QEBA_NXZ @ 0x1800B7D14
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006C96C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleShape::SharedData::IsFlattenedShape(CRoundedRectangleShape::SharedData *this)
{
  return *((float *)this + 16) > 0.0;
}
