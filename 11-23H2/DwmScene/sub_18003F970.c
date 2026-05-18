/*
 * XREFs of sub_18003F970 @ 0x18003F970
 * Callers:
 *     sub_1800405C8 @ 0x1800405C8 (sub_1800405C8.c)
 *     sub_180040D28 @ 0x180040D28 (sub_180040D28.c)
 *     sub_1800419A0 @ 0x1800419A0 (sub_1800419A0.c)
 * Callees:
 *     sub_18003F494 @ 0x18003F494 (sub_18003F494.c)
 *     sub_18003F604 @ 0x18003F604 (sub_18003F604.c)
 */

_QWORD *__fastcall sub_18003F970(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_18003F604(a3);
  v7 = sub_18003F494(a1, v9, v6, v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
