/*
 * XREFs of wcsstr @ 0x1403E3540
 * Callers:
 *     sub_1403CABF8 @ 0x1403CABF8 (sub_1403CABF8.c)
 *     sub_1405FACB4 @ 0x1405FACB4 (sub_1405FACB4.c)
 *     sub_1406BAF60 @ 0x1406BAF60 (sub_1406BAF60.c)
 *     sub_1406BAFD4 @ 0x1406BAFD4 (sub_1406BAFD4.c)
 *     sub_1407741A4 @ 0x1407741A4 (sub_1407741A4.c)
 *     sub_1407DC5E4 @ 0x1407DC5E4 (sub_1407DC5E4.c)
 *     sub_1407FC710 @ 0x1407FC710 (sub_1407FC710.c)
 *     sub_140812540 @ 0x140812540 (sub_140812540.c)
 *     sub_140933EEC @ 0x140933EEC (sub_140933EEC.c)
 *     sub_140943248 @ 0x140943248 (sub_140943248.c)
 *     sub_140A202A4 @ 0x140A202A4 (sub_140A202A4.c)
 *     sub_140A212A0 @ 0x140A212A0 (sub_140A212A0.c)
 *     sub_140A22650 @ 0x140A22650 (sub_140A22650.c)
 *     sub_140A31A94 @ 0x140A31A94 (sub_140A31A94.c)
 *     sub_140A52500 @ 0x140A52500 (sub_140A52500.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *v3; // r8
  signed __int64 v5; // r9
  const wchar_t *v6; // rdx

  v3 = (wchar_t *)Str;
  if ( !*SubStr )
    return (wchar_t *)Str;
  if ( *Str )
  {
    v5 = (char *)Str - (char *)SubStr;
    while ( 2 )
    {
      v6 = SubStr;
      do
      {
        if ( !*v6 )
          return v3;
        if ( *(const wchar_t *)((char *)v6 + v5) != *v6 )
          break;
        ++v6;
      }
      while ( *(const wchar_t *)((char *)v6 + v5) );
      if ( !*v6 )
        return v3;
      ++v3;
      v5 += 2LL;
      if ( *v3 )
        continue;
      break;
    }
  }
  return 0LL;
}
