/*
 * XREFs of ?GetLightBehavior@CompositionLight@Composition@UI@Windows@@IEAA?AW4LightBehavior@234@PEAVVisualUnorderedCollectionImpl@234@@Z @ 0x180001A54
 * Callers:
 *     ?RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@@Z @ 0x180001950 (-RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImp.c)
 *     ?RemoveAllVisuals@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@@Z @ 0x1800019E0 (-RemoveAllVisuals@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollection.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::GetLightBehavior(__int64 a1, __int64 a2)
{
  if ( a2 == a1 + 216 )
    return 0LL;
  if ( a2 != a1 + 176 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  return 1LL;
}
