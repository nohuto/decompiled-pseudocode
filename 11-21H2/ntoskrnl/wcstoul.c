/*
 * XREFs of wcstoul @ 0x1403E3880
 * Callers:
 *     sub_140220238 @ 0x140220238 (sub_140220238.c)
 *     sub_14051EAEC @ 0x14051EAEC (sub_14051EAEC.c)
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_140772E98 @ 0x140772E98 (sub_140772E98.c)
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 *     sub_140843D74 @ 0x140843D74 (sub_140843D74.c)
 *     sub_140A28700 @ 0x140A28700 (sub_140A28700.c)
 *     sub_140A295FC @ 0x140A295FC (sub_140A295FC.c)
 *     sub_140AF6E6C @ 0x140AF6E6C (sub_140AF6E6C.c)
 *     sub_140B001A8 @ 0x140B001A8 (sub_140B001A8.c)
 * Callees:
 *     sub_1403E3610 @ 0x1403E3610 (sub_1403E3610.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return sub_1403E3610((__int64)&off_1400067F8, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
