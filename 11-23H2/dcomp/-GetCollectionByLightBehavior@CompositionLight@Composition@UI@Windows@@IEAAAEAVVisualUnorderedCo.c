/*
 * XREFs of ?GetCollectionByLightBehavior@CompositionLight@Composition@UI@Windows@@IEAAAEAVVisualUnorderedCollectionImpl@234@W4LightBehavior@234@@Z @ 0x18018A9AC
 * Callers:
 *     ?RemoveVisualByLightBehavior@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisual@345@W4LightBehavior@345@@Z @ 0x1801827A0 (-RemoveVisualByLightBehavior@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisual@345@W4L.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::GetCollectionByLightBehavior(__int64 a1, int a2)
{
  if ( !a2 )
    return a1 + 216;
  if ( a2 != 1 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  return a1 + 176;
}
