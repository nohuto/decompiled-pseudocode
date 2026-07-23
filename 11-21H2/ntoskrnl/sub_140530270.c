/*
 * XREFs of sub_140530270 @ 0x140530270
 * Callers:
 *     sub_14052DF88 @ 0x14052DF88 (sub_14052DF88.c)
 *     sub_140A64544 @ 0x140A64544 (sub_140A64544.c)
 *     sub_140A650A8 @ 0x140A650A8 (sub_140A650A8.c)
 * Callees:
 *     sub_14052F89C @ 0x14052F89C (sub_14052F89C.c)
 *     sub_1405300A8 @ 0x1405300A8 (sub_1405300A8.c)
 */

__int64 *__fastcall sub_140530270(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 *a10)
{
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+38h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 320) )
    return sub_1405300A8(a1, a2, a3, a4, v11, v12, a7, v13, a9, a10);
  else
    return sub_14052F89C(a1, a2, a7, (__int64)a4, a9, a10);
}
