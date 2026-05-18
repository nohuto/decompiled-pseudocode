/*
 * XREFs of sub_1800933B8 @ 0x1800933B8
 * Callers:
 *     sub_180049D98 @ 0x180049D98 (sub_180049D98.c)
 *     sub_180057E0C @ 0x180057E0C (sub_180057E0C.c)
 *     sub_18007E8D8 @ 0x18007E8D8 (sub_18007E8D8.c)
 *     sub_1800926E0 @ 0x1800926E0 (sub_1800926E0.c)
 *     sub_1800A6170 @ 0x1800A6170 (sub_1800A6170.c)
 *     sub_1800ACF60 @ 0x1800ACF60 (sub_1800ACF60.c)
 *     sub_1800AD2F0 @ 0x1800AD2F0 (sub_1800AD2F0.c)
 * Callees:
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 *     sub_18009341C @ 0x18009341C (sub_18009341C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800933B8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_1800904EC(*(_QWORD *)(a1 + 16), a2);
  v7[0] = *a3;
  v7[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18009341C(a1, v5, v7);
  return sub_180010910((__int64)a3);
}
