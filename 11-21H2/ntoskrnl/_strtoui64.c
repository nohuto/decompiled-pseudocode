/*
 * XREFs of _strtoui64 @ 0x1403E0C10
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1403E09CC @ 0x1403E09CC (sub_1403E09CC.c)
 */

unsigned __int64 __cdecl strtoui64(const char *String, char **EndPtr, int Radix)
{
  return sub_1403E09CC((__int64)&off_1400067F8, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 1);
}
