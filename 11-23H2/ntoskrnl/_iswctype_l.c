/*
 * XREFs of _iswctype_l @ 0x1403DC314
 * Callers:
 *     wcstoxlX @ 0x1403DBC70 (wcstoxlX.c)
 *     wcstoxq @ 0x1403DC0BC (wcstoxq.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
