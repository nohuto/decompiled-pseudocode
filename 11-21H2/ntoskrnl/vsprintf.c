/*
 * XREFs of vsprintf @ 0x1403E3230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E3198 @ 0x1403E3198 (sub_1403E3198.c)
 */

int __cdecl vsprintf(char *Dest, const char *Format, va_list Args)
{
  return sub_1403E3198(Dest, (__int64)Format, 0LL, (__int64)Args);
}
