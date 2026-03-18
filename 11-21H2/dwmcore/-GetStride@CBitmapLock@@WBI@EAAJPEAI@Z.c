/*
 * XREFs of ?GetStride@CBitmapLock@@WBI@EAAJPEAI@Z @ 0x180108070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::GetStride(__int64 a1, unsigned int *a2)
{
  return CBitmapLock::GetStride((CBitmapLock *)(a1 - 24), a2);
}
