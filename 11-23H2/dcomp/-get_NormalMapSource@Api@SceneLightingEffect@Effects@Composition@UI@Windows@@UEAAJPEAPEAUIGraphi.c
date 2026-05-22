/*
 * XREFs of ?get_NormalMapSource@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJPEAPEAUIGraphicsEffectSource@3Graphics@6@@Z @ 0x1800901F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::Api::get_NormalMapSource(
        Windows::UI::Composition::Effects::SceneLightingEffect::Api *this,
        struct Windows::Graphics::Effects::IGraphicsEffectSource **a2)
{
  *a2 = 0LL;
  *a2 = (struct Windows::Graphics::Effects::IGraphicsEffectSource *)*((_QWORD *)this + 9);
  return 0LL;
}
