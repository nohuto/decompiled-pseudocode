/*
 * XREFs of ?AddRef@CHolographicViewer@@WEI@EAAKXZ @ 0x18011D870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicViewer::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 72));
}
