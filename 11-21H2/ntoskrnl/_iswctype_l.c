/*
 * XREFs of _iswctype_l @ 0x1403E3CB0
 * Callers:
 *     sub_1403E3610 @ 0x1403E3610 (sub_1403E3610.c)
 *     sub_1403E3A4C @ 0x1403E3A4C (sub_1403E3A4C.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t _C, wctype_t _Type, _locale_t _Locale)
{
  if ( _C >= 0x100u )
    return 0;
  else
    return _Type & (*off_140C00008)[_C];
}
