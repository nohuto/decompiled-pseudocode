/*
 * XREFs of ??_EKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124260
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x1800603E4 (--1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::KeyFrameAnimation *__fastcall Windows::UI::Composition::KeyFrameAnimation::`vector deleting destructor'(
        Windows::UI::Composition::KeyFrameAnimation *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 61);
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
