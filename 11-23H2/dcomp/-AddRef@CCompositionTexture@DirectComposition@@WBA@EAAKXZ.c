/*
 * XREFs of ?AddRef@CCompositionTexture@DirectComposition@@WBA@EAAKXZ @ 0x1800A93F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionTexture::AddRef(__int64 a1)
{
  return CMILCOMBaseT<IPresentationBuffer>::AddRef(a1 - 16);
}
