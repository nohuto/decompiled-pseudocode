/*
 * XREFs of ?SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3C90
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180081EF4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C3D90 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 */

__int64 __fastcall CCompositionSpotLight::SetOuterConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 96) != *(float *)a3 )
  {
    *((_DWORD *)this + 96) = *a3;
    CResource::InvalidateAnimationSources(this, 13);
    CResource::InvalidateAnimationSources(this, 14);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
