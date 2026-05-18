/*
 * XREFs of sub_18003DDF8 @ 0x18003DDF8
 * Callers:
 *     sub_18003DEE8 @ 0x18003DEE8 (sub_18003DEE8.c)
 * Callees:
 *     sub_18003E0C4 @ 0x18003E0C4 (sub_18003E0C4.c)
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 */

__int64 __fastcall sub_18003DDF8(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  int v15; // edi

  v12 = a4 - a11;
  v15 = sub_18003E350(a9, a2, a10, a4 - (int)a11, a12, a6, a7);
  sub_18003E0C4(a1, a9, v15, a11, a12, a6, a7, a8);
  return sub_18003E0C4(v15, a10, a3, v12, a5 - a12, a6, a7, a8);
}
