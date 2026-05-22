/*
 * XREFs of ??_GPathKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124310
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1PathKeyFrameAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x18012318C (--1PathKeyFrameAnimation@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::PathKeyFrameAnimation *__fastcall Windows::UI::Composition::PathKeyFrameAnimation::`scalar deleting destructor'(
        Windows::UI::Composition::PathKeyFrameAnimation *this,
        char a2)
{
  Windows::UI::Composition::PathKeyFrameAnimation::~PathKeyFrameAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
