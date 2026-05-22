/*
 * XREFs of ??_GCompositionGeometricClip@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CompositionGeometricClip@Composition@UI@Windows@@UEAA@XZ @ 0x180122FD8 (--1CompositionGeometricClip@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::CompositionGeometricClip *__fastcall Windows::UI::Composition::CompositionGeometricClip::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionGeometricClip *this,
        char a2)
{
  Windows::UI::Composition::CompositionGeometricClip::~CompositionGeometricClip(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
