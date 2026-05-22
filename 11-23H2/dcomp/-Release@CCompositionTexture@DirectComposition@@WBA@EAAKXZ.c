/*
 * XREFs of ?Release@CCompositionTexture@DirectComposition@@WBA@EAAKXZ @ 0x1800A9470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionTexture::Release(__int64 a1)
{
  return CMILCOMBaseT<IUnknown>::Release((volatile signed __int32 *)(a1 - 16));
}
