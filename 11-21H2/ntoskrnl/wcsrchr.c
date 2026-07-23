/*
 * XREFs of wcsrchr @ 0x1403E34B0
 * Callers:
 *     sub_1407455A8 @ 0x1407455A8 (sub_1407455A8.c)
 *     sub_14075B6A4 @ 0x14075B6A4 (sub_14075B6A4.c)
 *     sub_14075CF70 @ 0x14075CF70 (sub_14075CF70.c)
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 *     sub_14075E74C @ 0x14075E74C (sub_14075E74C.c)
 *     sub_14075EB84 @ 0x14075EB84 (sub_14075EB84.c)
 *     sub_1407FC710 @ 0x1407FC710 (sub_1407FC710.c)
 *     sub_140800BAC @ 0x140800BAC (sub_140800BAC.c)
 *     sub_14094A3E4 @ 0x14094A3E4 (sub_14094A3E4.c)
 *     sub_140A1DF34 @ 0x140A1DF34 (sub_140A1DF34.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 *     sub_140A281F8 @ 0x140A281F8 (sub_140A281F8.c)
 *     sub_140A2D760 @ 0x140A2D760 (sub_140A2D760.c)
 *     sub_140A2DB88 @ 0x140A2DB88 (sub_140A2DB88.c)
 *     sub_140B4DE2C @ 0x140B4DE2C (sub_140B4DE2C.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r8
  __int16 v4; // ax

  v2 = Str;
  while ( *Str++ )
    ;
  while ( 1 )
  {
    v4 = *--Str;
    if ( Str == v2 )
      break;
    if ( v4 == Ch )
      return (wchar_t *)Str;
  }
  if ( v4 == Ch )
    return (wchar_t *)Str;
  return 0LL;
}
