/*
 * XREFs of GreDeleteDC @ 0x1C00B5B40
 * Callers:
 *     <none>
 * Callees:
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 */

__int64 __fastcall GreDeleteDC(HDC a1)
{
  return GrepDeleteDC(a1, 0x400000u);
}
