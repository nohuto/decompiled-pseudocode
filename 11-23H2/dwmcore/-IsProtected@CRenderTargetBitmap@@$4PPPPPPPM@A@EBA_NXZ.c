/*
 * XREFs of ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801225B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetBitmap::IsProtected(__int64 a1)
{
  return CRenderTargetBitmap::IsProtected((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4)));
}
