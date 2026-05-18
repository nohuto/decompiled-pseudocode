/*
 * XREFs of sub_18008E85C @ 0x18008E85C
 * Callers:
 *     sub_18008E7B0 @ 0x18008E7B0 (sub_18008E7B0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008E85C(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  sub_18004871C(a1, &v2);
  if ( (_QWORD)v2 )
    sub_180043668(v2);
  return sub_180010910((__int64)&v2);
}
