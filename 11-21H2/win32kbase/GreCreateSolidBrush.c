/*
 * XREFs of GreCreateSolidBrush @ 0x1C0062880
 * Callers:
 *     <none>
 * Callees:
 *     hCreateSolidBrushInternal @ 0x1C0063600 (hCreateSolidBrushInternal.c)
 */

__int64 __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL);
}
