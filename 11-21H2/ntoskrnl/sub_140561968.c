/*
 * XREFs of sub_140561968 @ 0x140561968
 * Callers:
 *     sub_1407455A8 @ 0x1407455A8 (sub_1407455A8.c)
 *     sub_14094CFE8 @ 0x14094CFE8 (sub_14094CFE8.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 */

__int64 __fastcall sub_140561968(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  const wchar_t **i; // rsi

  v1 = 0;
  v2 = 0;
  for ( i = (const wchar_t **)&off_140A39660; wcsicmp(*i, Str2); i += 2 )
  {
    if ( ++v2 >= 7 )
      return v1;
  }
  return *((unsigned int *)&off_140A39660 + 4 * v2 + 2);
}
