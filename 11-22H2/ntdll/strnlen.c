/*
 * XREFs of strnlen @ 0x180093E50
 * Callers:
 *     _strlwr_s @ 0x180090010 (_strlwr_s.c)
 *     _strupr_s @ 0x180090140 (_strupr_s.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *String, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++String )
  {
    if ( !*String )
      break;
    ++result;
  }
  return result;
}
