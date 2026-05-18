/*
 * XREFs of ?GetRenderer@SpectreWorld@@UEBAPEAUISpectreRenderer@@XZ @ 0x18001BF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISpectreRenderer *__fastcall SpectreWorld::GetRenderer(SpectreWorld *this)
{
  return SpectreRenderer::s_pInstance;
}
