/*
 * XREFs of ?AddRef@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x1801098F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::AddRef(__int64 a1)
{
  return CDxHandleBitmapRealization::AddRef((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 296));
}
