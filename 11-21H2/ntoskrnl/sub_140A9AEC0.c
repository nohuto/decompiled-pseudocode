/*
 * XREFs of sub_140A9AEC0 @ 0x140A9AEC0
 * Callers:
 *     sub_1405FEBA0 @ 0x1405FEBA0 (sub_1405FEBA0.c)
 *     sub_140A89D94 @ 0x140A89D94 (sub_140A89D94.c)
 * Callees:
 *     sub_1405FEF04 @ 0x1405FEF04 (sub_1405FEF04.c)
 *     sub_140A89F08 @ 0x140A89F08 (sub_140A89F08.c)
 *     sub_140A8AAE0 @ 0x140A8AAE0 (sub_140A8AAE0.c)
 *     sub_140A93644 @ 0x140A93644 (sub_140A93644.c)
 *     sub_140A9A540 @ 0x140A9A540 (sub_140A9A540.c)
 */

__int64 __fastcall sub_140A9AEC0(__int64 a1)
{
  int v2; // edi

  sub_1405FEF04(*(_QWORD *)(a1 + 48));
  v2 = sub_140A93644(a1);
  if ( v2 >= 0 )
  {
    sub_140A8AAE0();
    sub_140A9A540((const UNICODE_STRING *)(a1 + 88));
    ++dword_140C29FF8;
    *(_DWORD *)(a1 + 104) &= ~0x2000000u;
    if ( dword_140D5750C )
      sub_140A89F08(2, a1);
  }
  return (unsigned int)v2;
}
