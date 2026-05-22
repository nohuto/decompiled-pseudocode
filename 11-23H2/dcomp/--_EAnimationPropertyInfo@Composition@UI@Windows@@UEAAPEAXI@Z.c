/*
 * XREFs of ??_EAnimationPropertyInfo@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180062030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1AnimationPropertyInfo@Composition@UI@Windows@@UEAA@XZ @ 0x180061FDC (--1AnimationPropertyInfo@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::AnimationPropertyInfo *__fastcall Windows::UI::Composition::AnimationPropertyInfo::`vector deleting destructor'(
        Windows::UI::Composition::AnimationPropertyInfo *this,
        char a2)
{
  Windows::UI::Composition::AnimationPropertyInfo::~AnimationPropertyInfo(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC0uLL);
    else
      operator delete(this);
  }
  return this;
}
