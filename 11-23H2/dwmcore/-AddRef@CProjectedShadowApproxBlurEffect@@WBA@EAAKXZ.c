/*
 * XREFs of ?AddRef@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x18011E470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectedShadowApproxBlurEffect::AddRef(__int64 a1)
{
  return CComposition::AddRef((CComposition *)(a1 - 16));
}
