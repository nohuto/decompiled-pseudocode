/*
 * XREFs of sub_14020A41C @ 0x14020A41C
 * Callers:
 *     sub_140688318 @ 0x140688318 (sub_140688318.c)
 * Callees:
 *     sub_14020A70C @ 0x14020A70C (sub_14020A70C.c)
 *     sub_1406881CC @ 0x1406881CC (sub_1406881CC.c)
 */

__int64 __fastcall sub_14020A41C(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v9; // r9d

  sub_1406881CC((PRTL_BITMAP)(a1 + 88));
  return sub_14020A70C(a6, 8 * a7, a2, v9, a4, a5);
}
