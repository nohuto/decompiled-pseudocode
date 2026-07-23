/*
 * XREFs of _iswctype_l @ 0x1403DC4F4
 * Callers:
 *     wcstoxlX @ 0x1403DBE50 (wcstoxlX.c)
 *     wcstoxq @ 0x1403DC29C (wcstoxq.c)
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
