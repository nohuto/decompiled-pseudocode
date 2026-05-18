/*
 * XREFs of ?GetRenderContext@SpectreRenderer@@UEBAPEAUISpectreRenderContext@@XZ @ 0x180010380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISpectreRenderContext *__fastcall SpectreRenderer::GetRenderContext(SpectreRenderer *this)
{
  return (struct ISpectreRenderContext *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
}
