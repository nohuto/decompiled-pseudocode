/*
 * XREFs of ??_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z @ 0x1802657E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18026EB24 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 */

CScrollPositionKeyframeAnimation *__fastcall CScrollPositionKeyframeAnimation::`vector deleting destructor'(
        CScrollPositionKeyframeAnimation *this,
        char a2)
{
  CScrollKeyframeAnimation::~CScrollKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
