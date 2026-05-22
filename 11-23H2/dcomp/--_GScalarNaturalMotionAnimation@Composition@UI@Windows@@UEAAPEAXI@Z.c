/*
 * XREFs of ??_GScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801244B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x1800603E4 (--1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::ScalarNaturalMotionAnimation *__fastcall Windows::UI::Composition::ScalarNaturalMotionAnimation::`scalar deleting destructor'(
        Windows::UI::Composition::ScalarNaturalMotionAnimation *this,
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
