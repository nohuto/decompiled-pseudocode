/*
 * XREFs of _vswprintf @ 0x1403E13B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E13CC @ 0x1403E13CC (sub_1403E13CC.c)
 */

int __cdecl vswprintf(wchar_t *Dest, const wchar_t *Format, va_list Args)
{
  return sub_1403E13CC(Dest, Format, 0LL, Args);
}
