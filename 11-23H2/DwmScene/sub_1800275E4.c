/*
 * XREFs of sub_1800275E4 @ 0x1800275E4
 * Callers:
 *     sub_180024E9C @ 0x180024E9C (sub_180024E9C.c)
 *     sub_180024F9C @ 0x180024F9C (sub_180024F9C.c)
 *     sub_18004D5EC @ 0x18004D5EC (sub_18004D5EC.c)
 *     sub_18004D6B4 @ 0x18004D6B4 (sub_18004D6B4.c)
 *     sub_180062BB4 @ 0x180062BB4 (sub_180062BB4.c)
 * Callees:
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 */

__int64 __fastcall sub_1800275E4(__int64 a1)
{
  __int64 result; // rax

  result = 0x3FFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFLL )
    sub_18001DDFC();
  return result;
}
