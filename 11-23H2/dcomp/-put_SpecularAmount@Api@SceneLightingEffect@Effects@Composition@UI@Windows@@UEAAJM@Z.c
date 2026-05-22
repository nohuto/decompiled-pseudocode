/*
 * XREFs of ?put_SpecularAmount@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJM@Z @ 0x18000F7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::Api::put_SpecularAmount(
        Windows::UI::Composition::Effects::SceneLightingEffect::Api *this,
        float a2)
{
  if ( a2 < 0.0 || a2 > 10000.0 )
    return 2147942487LL;
  *((float *)this + 15) = a2;
  return 0LL;
}
