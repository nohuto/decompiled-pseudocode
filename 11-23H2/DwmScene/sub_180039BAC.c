/*
 * XREFs of sub_180039BAC @ 0x180039BAC
 * Callers:
 *     sub_180039C9C @ 0x180039C9C (sub_180039C9C.c)
 * Callees:
 *     sub_180039E78 @ 0x180039E78 (sub_180039E78.c)
 *     sub_18003A100 @ 0x18003A100 (sub_18003A100.c)
 */

__int64 __fastcall sub_180039BAC(
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
  v15 = sub_18003A100(a9, a2, a10, a4 - (int)a11, a12, a6, a7);
  sub_180039E78(a1, a9, v15, a11, a12, a6, a7, a8);
  return sub_180039E78(v15, a10, a3, v12, a5 - a12, a6, a7, a8);
}
