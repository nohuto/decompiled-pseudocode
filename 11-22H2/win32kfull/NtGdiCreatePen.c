/*
 * XREFs of NtGdiCreatePen @ 0x1C00AECC0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePen @ 0x1C00AECD8 (GreCreatePen.c)
 */

__int64 NtGdiCreatePen()
{
  return GreCreatePen();
}
