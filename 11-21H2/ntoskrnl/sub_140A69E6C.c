/*
 * XREFs of sub_140A69E6C @ 0x140A69E6C
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_140978B04 @ 0x140978B04 (sub_140978B04.c)
 */

char __fastcall sub_140A69E6C(__int64 a1, __int64 a2)
{
  char result; // al

  if ( byte_140E01840 )
  {
    sub_140978B04(*(_QWORD *)(a2 + 88) - 12208LL, 0x5000uLL);
    return sub_140978B04(a1 + 40576, 0x1000uLL);
  }
  return result;
}
