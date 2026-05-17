/*
 * XREFs of wcsncmp @ 0x1800952B0
 * Callers:
 *     LdrpResCompareResourceNames @ 0x18000746C (LdrpResCompareResourceNames.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1800ECEBC (LdrpCompareResourceNamesWithValidation.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *String1 && *String1 == *String2 )
  {
    ++String1;
    ++String2;
  }
  return *String1 - *String2;
}
