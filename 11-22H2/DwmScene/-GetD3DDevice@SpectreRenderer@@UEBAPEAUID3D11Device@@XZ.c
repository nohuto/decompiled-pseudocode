/*
 * XREFs of ?GetD3DDevice@SpectreRenderer@@UEBAPEAUID3D11Device@@XZ @ 0x1800189C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11Device *__fastcall SpectreRenderer::GetD3DDevice(SpectreRenderer *this)
{
  return (struct ID3D11Device *)*((_QWORD *)this + 4);
}
