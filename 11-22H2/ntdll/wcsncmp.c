/*
 * XREFs of wcsncmp @ 0x180094AB0
 * Callers:
 *     LdrpResCompareResourceNames @ 0x18000708C (LdrpResCompareResourceNames.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1800EBB84 (LdrpCompareResourceNamesWithValidation.c)
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
