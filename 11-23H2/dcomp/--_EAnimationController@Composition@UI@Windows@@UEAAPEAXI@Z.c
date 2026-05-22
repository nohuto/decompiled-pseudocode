/*
 * XREFs of ??_EAnimationController@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000CC60
 * Callers:
 *     ??_EAnimationController@Composition@UI@Windows@@WII@EAAPEAXI@Z @ 0x1800AE270 (--_EAnimationController@Composition@UI@Windows@@WII@EAAPEAXI@Z.c)
 * Callees:
 *     ??1AnimationController@Composition@UI@Windows@@UEAA@XZ @ 0x18000CCA4 (--1AnimationController@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::AnimationController *__fastcall Windows::UI::Composition::AnimationController::`vector deleting destructor'(
        Windows::UI::Composition::AnimationController *this,
        char a2)
{
  Windows::UI::Composition::AnimationController::~AnimationController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xE0uLL);
    else
      operator delete(this);
  }
  return this;
}
