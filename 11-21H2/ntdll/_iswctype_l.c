/*
 * XREFs of _iswctype_l @ 0x180097680
 * Callers:
 *     wcstoxq @ 0x1800959F4 (wcstoxq.c)
 *     wcstoxlX @ 0x180099BD0 (wcstoxlX.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
