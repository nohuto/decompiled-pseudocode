/*
 * XREFs of sub_18000B798 @ 0x18000B798
 * Callers:
 *     sub_18000B61C @ 0x18000B61C (sub_18000B61C.c)
 *     sub_18000C3F0 @ 0x18000C3F0 (sub_18000C3F0.c)
 * Callees:
 *     sub_18000BAEC @ 0x18000BAEC (sub_18000BAEC.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000BEA0 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__initialize_onexit_table @ 0x18000BF8E (_o__initialize_onexit_table.c)
 */

char __fastcall sub_18000B798(unsigned int a1)
{
  int v2; // eax

  if ( !byte_1801D31A0 )
  {
    if ( a1 > 1 )
    {
      sub_18000BAEC(5LL);
      JUMPOUT(0x18000B822LL);
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      xmmword_1801D3170 = (__int128)_mm_load_si128((const __m128i *)&xmmword_180105F90);
      qword_1801D3180 = -1LL;
      xmmword_1801D3188 = xmmword_1801D3170;
      qword_1801D3198 = -1LL;
    }
    else if ( (unsigned int)o__initialize_onexit_table(&xmmword_1801D3170)
           || (unsigned int)o__initialize_onexit_table(&xmmword_1801D3188) )
    {
      return 0;
    }
    byte_1801D31A0 = 1;
  }
  return 1;
}
