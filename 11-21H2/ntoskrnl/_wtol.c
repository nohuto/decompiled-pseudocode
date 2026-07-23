/*
 * XREFs of _wtol @ 0x1403E1810
 * Callers:
 *     _wtoi @ 0x1403E17F0 (_wtoi.c)
 *     sub_1407DC794 @ 0x1407DC794 (sub_1407DC794.c)
 * Callees:
 *     sub_1403E3850 @ 0x1403E3850 (sub_1403E3850.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return sub_1403E3850(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
