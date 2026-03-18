/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C003B5C0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C003BC40 (GreCreateCompatibleDC.c)
 */

__int64 __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
