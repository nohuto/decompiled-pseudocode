/*
 * XREFs of ??_ECompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180101F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionCapabilitiesFactory *__fastcall Windows::UI::Composition::CompositionCapabilitiesFactory::`vector deleting destructor'(
        Windows::UI::Composition::CompositionCapabilitiesFactory *this,
        char a2)
{
  *((_DWORD *)this + 25) = -1073741823;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
