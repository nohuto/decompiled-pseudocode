/*
 * XREFs of ??_GSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801245D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x1800603E4 (--1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::SpringVector2NaturalMotionAnimation *__fastcall Windows::UI::Composition::SpringVector2NaturalMotionAnimation::`scalar deleting destructor'(
        Windows::UI::Composition::SpringVector2NaturalMotionAnimation *this,
        char a2)
{
  Windows::UI::Composition::CompositionAnimation::~CompositionAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
