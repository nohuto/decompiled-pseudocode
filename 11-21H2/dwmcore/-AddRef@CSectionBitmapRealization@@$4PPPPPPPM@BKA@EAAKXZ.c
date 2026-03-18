/*
 * XREFs of ?AddRef@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ @ 0x18010AFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSectionBitmapRealization::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 416));
}
