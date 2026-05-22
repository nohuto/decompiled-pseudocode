/*
 * XREFs of ??_ESpotLight@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800B6320
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionLight@Composition@UI@Windows@@UEAA@XZ @ 0x18000DE04 (--1CompositionLight@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

volatile signed __int32 **__fastcall Windows::UI::Composition::SpotLight::`vector deleting destructor'(
        volatile signed __int32 **this,
        __int64 a2)
{
  char v3; // di

  v3 = a2;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 49, a2);
  Windows::UI::Composition::CompositionLight::~CompositionLight((Windows::UI::Composition::CompositionLight *)this);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
