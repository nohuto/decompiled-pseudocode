/*
 * XREFs of sub_14045699C @ 0x14045699C
 * Callers:
 *     sub_140230618 @ 0x140230618 (sub_140230618.c)
 *     sub_140458C22 @ 0x140458C22 (sub_140458C22.c)
 *     sub_140458D38 @ 0x140458D38 (sub_140458D38.c)
 *     sub_140458E94 @ 0x140458E94 (sub_140458E94.c)
 *     sub_140458FD4 @ 0x140458FD4 (sub_140458FD4.c)
 *     sub_140504048 @ 0x140504048 (sub_140504048.c)
 *     sub_140504198 @ 0x140504198 (sub_140504198.c)
 *     sub_140504520 @ 0x140504520 (sub_140504520.c)
 *     sub_140504644 @ 0x140504644 (sub_140504644.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_140459160 @ 0x140459160 (sub_140459160.c)
 *     sub_1405047F4 @ 0x1405047F4 (sub_1405047F4.c)
 */

__int64 __fastcall sub_14045699C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d

  if ( (unsigned int)sub_14023A8D0(a1) == 2 )
    return sub_140459160(v8, v9, v6, v7, a5, a6);
  else
    return sub_1405047F4(v8, v9, v6, v7, a5, a6);
}
