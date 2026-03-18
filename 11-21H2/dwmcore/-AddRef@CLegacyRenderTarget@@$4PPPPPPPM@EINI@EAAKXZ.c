/*
 * XREFs of ?AddRef@CLegacyRenderTarget@@$4PPPPPPPM@EINI@EAAKXZ @ 0x180105850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacyRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 18648));
}
