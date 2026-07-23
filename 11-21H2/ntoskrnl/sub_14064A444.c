/*
 * XREFs of sub_14064A444 @ 0x14064A444
 * Callers:
 *     sub_14064A4B8 @ 0x14064A4B8 (sub_14064A4B8.c)
 * Callees:
 *     sub_1402053BC @ 0x1402053BC (sub_1402053BC.c)
 */

__int64 **__fastcall sub_14064A444(const UNICODE_STRING *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  const UNICODE_STRING **i; // rsi

  v1 = 0LL;
  v2 = 0;
  for ( i = (const UNICODE_STRING **)&off_140C09340; !sub_1402053BC(a1, *i); i += 2 )
  {
    if ( ++v2 >= 4 )
      return (__int64 **)v1;
  }
  return &(&off_140C09340)[2 * v2];
}
