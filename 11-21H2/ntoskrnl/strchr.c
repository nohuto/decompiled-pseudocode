/*
 * XREFs of strchr @ 0x1403E2AA0
 * Callers:
 *     sub_1407584B4 @ 0x1407584B4 (sub_1407584B4.c)
 *     sub_1409DCCC0 @ 0x1409DCCC0 (sub_1409DCCC0.c)
 *     sub_140B0C230 @ 0x140B0C230 (sub_140B0C230.c)
 *     sub_140B0CFC8 @ 0x140B0CFC8 (sub_140B0CFC8.c)
 *     sub_140B102C0 @ 0x140B102C0 (sub_140B102C0.c)
 *     sub_140B18C50 @ 0x140B18C50 (sub_140B18C50.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  char v2; // al
  char *v3; // r8
  char v4; // r9

  v2 = *Str;
  v3 = 0LL;
  if ( *Str )
  {
    v4 = *Str;
    do
    {
      v2 = v4;
      if ( v4 == (_BYTE)Val )
        break;
      v2 = *++Str;
      v4 = *Str;
    }
    while ( *Str );
  }
  if ( v2 == (_BYTE)Val )
    return (char *)Str;
  return v3;
}
