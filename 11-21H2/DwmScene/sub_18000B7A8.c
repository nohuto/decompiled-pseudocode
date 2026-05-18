/*
 * XREFs of sub_18000B7A8 @ 0x18000B7A8
 * Callers:
 *     sub_18000B62C @ 0x18000B62C (sub_18000B62C.c)
 *     sub_18000C400 @ 0x18000C400 (sub_18000C400.c)
 * Callees:
 *     sub_18000BAFC @ 0x18000BAFC (sub_18000BAFC.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000BEB0 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__initialize_onexit_table @ 0x18000BF9E (_o__initialize_onexit_table.c)
 */

char __fastcall sub_18000B7A8(unsigned int a1)
{
  int v2; // eax

  if ( !byte_1801F72D0 )
  {
    if ( a1 > 1 )
    {
      sub_18000BAFC(5LL);
      JUMPOUT(0x18000B832LL);
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      xmmword_1801F72A0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1801BDA40);
      qword_1801F72B0 = -1LL;
      xmmword_1801F72B8 = xmmword_1801F72A0;
      qword_1801F72C8 = -1LL;
    }
    else if ( (unsigned int)o__initialize_onexit_table(&xmmword_1801F72A0)
           || (unsigned int)o__initialize_onexit_table(&xmmword_1801F72B8) )
    {
      return 0;
    }
    byte_1801F72D0 = 1;
  }
  return 1;
}
