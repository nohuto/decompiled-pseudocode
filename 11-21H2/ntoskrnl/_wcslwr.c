/*
 * XREFs of _wcslwr @ 0x1403E14F0
 * Callers:
 *     sub_1406BB218 @ 0x1406BB218 (sub_1406BB218.c)
 *     sub_1409F21D0 @ 0x1409F21D0 (sub_1409F21D0.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

wchar_t *__cdecl wcslwr(wchar_t *String)
{
  wchar_t v3; // cx
  wchar_t *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int16)(v3 - 65) <= 0x19u )
        *v4 = v3 + 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    _misaligned_access();
    return 0LL;
  }
}
