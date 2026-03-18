/*
 * XREFs of NtGdiSaveDC @ 0x1C00DE7D0
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C00DE7E8 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
