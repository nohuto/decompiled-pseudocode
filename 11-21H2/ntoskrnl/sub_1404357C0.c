/*
 * XREFs of sub_1404357C0 @ 0x1404357C0
 * Callers:
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140424520 @ 0x140424520 (sub_140424520.c)
 *     sub_140425050 @ 0x140425050 (sub_140425050.c)
 *     sub_1404257E0 @ 0x1404257E0 (sub_1404257E0.c)
 *     sub_140425B20 @ 0x140425B20 (sub_140425B20.c)
 *     sub_140425E60 @ 0x140425E60 (sub_140425E60.c)
 *     sub_1404261A0 @ 0x1404261A0 (sub_1404261A0.c)
 *     sub_1404264E0 @ 0x1404264E0 (sub_1404264E0.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140427B30 @ 0x140427B30 (sub_140427B30.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_14042C600 @ 0x14042C600 (sub_14042C600.c)
 *     sub_14042CB00 @ 0x14042CB00 (sub_14042CB00.c)
 *     sub_14042D480 @ 0x14042D480 (sub_14042D480.c)
 *     sub_14042D7C0 @ 0x14042D7C0 (sub_14042D7C0.c)
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 *     sub_14042E1C0 @ 0x14042E1C0 (sub_14042E1C0.c)
 *     sub_14042E840 @ 0x14042E840 (sub_14042E840.c)
 *     sub_14042EBC0 @ 0x14042EBC0 (sub_14042EBC0.c)
 *     sub_14042EF00 @ 0x14042EF00 (sub_14042EF00.c)
 *     sub_14042F240 @ 0x14042F240 (sub_14042F240.c)
 *     sub_14042F580 @ 0x14042F580 (sub_14042F580.c)
 *     sub_14042F940 @ 0x14042F940 (sub_14042F940.c)
 *     sub_14042FCC0 @ 0x14042FCC0 (sub_14042FCC0.c)
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 *     sub_140430800 @ 0x140430800 (sub_140430800.c)
 *     sub_140430BC0 @ 0x140430BC0 (sub_140430BC0.c)
 *     sub_140431640 @ 0x140431640 (sub_140431640.c)
 *     sub_140431CC0 @ 0x140431CC0 (sub_140431CC0.c)
 *     sub_140432080 @ 0x140432080 (sub_140432080.c)
 *     sub_140432780 @ 0x140432780 (sub_140432780.c)
 *     sub_140432EC0 @ 0x140432EC0 (sub_140432EC0.c)
 *     sub_140433200 @ 0x140433200 (sub_140433200.c)
 *     sub_140433540 @ 0x140433540 (sub_140433540.c)
 *     sub_140433880 @ 0x140433880 (sub_140433880.c)
 *     sub_140433B00 @ 0x140433B00 (sub_140433B00.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_140AB6E40 @ 0x140AB6E40 (sub_140AB6E40.c)
 *     sub_140AB71C0 @ 0x140AB71C0 (sub_140AB71C0.c)
 * Callees:
 *     sub_140435840 @ 0x140435840 (sub_140435840.c)
 *     sub_140435900 @ 0x140435900 (sub_140435900.c)
 */

char sub_1404357C0()
{
  char result; // al

  if ( (BYTE2(KeGetPcr()[5].KdVersionBlock) & 0x30) == 0 )
    __debugbreak();
  result = BYTE2(KeGetPcr()[5].KdVersionBlock) & 0x30;
  if ( result == 16 )
  {
    sub_140435840(5LL);
    return nullsub_13();
  }
  else if ( result == 32 )
  {
    sub_140435900(12LL);
    return nullsub_14();
  }
  else
  {
    if ( result == 48 )
    {
      __asm
      {
        xbegin  locret_14043598D
        xabort  0
      }
      _mm_lfence();
    }
    __debugbreak();
  }
  return result;
}
