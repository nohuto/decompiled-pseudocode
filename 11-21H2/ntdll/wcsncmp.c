/*
 * XREFs of wcsncmp @ 0x1800999E0
 * Callers:
 *     ResourceEntryBinarySearch @ 0x180040E98 (ResourceEntryBinarySearch.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x180041128 (LdrpCompareResourceNamesWithValidation.c)
 *     LdrpResCompareResourceNames @ 0x180066974 (LdrpResCompareResourceNames.c)
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
